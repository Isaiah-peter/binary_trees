#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *leftChild;
    struct node *rightChild;
} node_t;

node_t *root = NULL;

void insert(int data)
{
    node_t *tempNode = (node_t*) malloc(sizeof(node_t));
    node_t *current;
    node_t *parent;

    tempNode->data = data;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;

    //if tree is empty, create root node
    if(root == NULL)
        root = tempNode;
    else {
        current = root;
        parent = NULL;
        
        while(1) {
            parent = current;

            //go to left of the tree
            if(data < parent->data) {
                current = current->leftChild;

                //insert to the left
                if(current == NULL) {
                    parent->leftChild = tempNode;
                    return;
                }
            }

            else {
                current = current->rightChild;

                //insert to the right
                if (current == NULL) {
                    parent->rightChild = tempNode;
                    return;
                }
            }
        }
    }
}


node_t* search(int data)
{
    node_t *current = root;
    printf("Visiting elements: ");

    while(current->data != data) {
        if(current != NULL)
            printf("%d ", current->data);

        //go to left tree
        if(current->data > data)
            current = current->leftChild;

        //else go to right tree
        else
            current = current->rightChild;

        //not found
        if(current == NULL)
            return NULL;
    }
    return current;
}

void pre_order_traversal(node_t* root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        pre_order_traversal(root->leftChild);
        pre_order_traversal(root->rightChild);
    }
}

void inorder_traversal(node_t* root)
{
    if(root != NULL)
    {
        inorder_traversal(root->leftChild);
        printf("%d ", root->data);
        inorder_traversal(root->rightChild);
    }
}

void post_order_traversal(node_t* root)
{
    if(root != NULL)
    {
        post_order_traversal(root->leftChild);
        post_order_traversal(root->rightChild);
        printf("%d ", root->data);
    }
}

void delete(int data)
{
    node_t *current, *temp;
    current = search(data);
    if (current == NULL)
        return;

    if (current->leftChild != NULL || current->rightChild != NULL)
    // current has at least one child
        {
            if (current->leftChild == NULL)
            {
                // current has only right child
                temp = current;
                current->data = current->rightChild->data;
                current->rightChild->data = temp;
            }
            else if (current->rightChild == NULL)
            {
                // current has only left child
                temp = current->data;
                current->data = current->leftChild->data;
                current->leftChild->data = temp;
            }
            else
            {
                // current node has two children
            }
        }
    else
    {
        // current has no child
        current = NULL;
        free(current);
    }
}

int main()
{
    int i;
    node_t *temp;
    int array[15] = {27, 14, 22, 38, 12, 39, 50, 8, 10, 35, 11, 19, 31, 53, 42};

    for(i = 0; i < 15; i++)
        insert(array[i]);

    i = 53;
    temp = search(i);

    if(temp != NULL)
    {
        printf("[%d] Element found.", temp->data);
        printf("\n");
    }
    else
        printf("[ x ] Element not found (%d).\n", i);

    printf("\nPre-order traversal: ");
    pre_order_traversal(root);

    printf("\nIn-order traversal: ");
    inorder_traversal(root);

    delete(42);

    printf("\nPost-order traversal: ");
    post_order_traversal(root);

    return 0;
}