#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} BT;

BT *create()
{
    BT *p;
    int q;
    printf("\nEnter Data(-1 For No Node):");
    scanf("%d", &q);
    if (q == -1)
    {
        return NULL;
    }
    p = (BT *)malloc(sizeof(BT));
    p->data = q;
    printf("\nEnter Left Node of %d:", q);
    p->left = create();
    printf("\nEnter Right Node of %d:", q);
    p->right = create();
    return p;
}

void printinorder(BT *root)
{
    if (root == NULL)
    {
        // printf("Binary Tree Empty.\n");
        return;
    }
    printinorder(root->left);
    printf("%d  ", root->data);
    printinorder(root->right);
}

void printPreorder(BT *root)
{
    if (root == NULL){
        return;
    }
    printf("%d ", root->data);
    printPreorder(root->left);
    printPreorder(root->right);
}

void printPostorder(BT *root)
{
    if (root == NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    BT *xd = NULL;
    //printinorder(xd);
    xd = create();
    printf("INORDER Traversal:\n");
    printinorder(xd);
    printf("\nPOSTORDER Traversal:\n");
    printPostorder(xd);
    printf("\nPREORDER Traversal:\n");
    printPreorder(xd);
}