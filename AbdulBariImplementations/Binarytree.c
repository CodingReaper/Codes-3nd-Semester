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

int height(BT * node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
void printCurrentLevel(BT * root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
} 

void printLevelOrder(BT * root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
int countnodes(BT * root){
    int x,y;
    if(root != NULL){
        x = countnodes(root->left);
        y = countnodes(root->right);
        return x+y+1;
    }
    return 0;
}
int countnodesdegree2(BT * root){ //degree2 means having 2 child node or there are 2 immediate descendants.
    int x,y;
    if(root != NULL){
        x = countnodesdegree2(root->left);
        y = countnodesdegree2(root->right);
        if(root->left && root->right){  //if both nodes exist..
            return x+y+1;
        }
        else{
            return x+y;
        }
    }
    return 0;
}

int countleaf(BT * root){
    int x,y;
    if(root != NULL){
        x = countleaf(root->left);
        y = countleaf(root->right);
        if(root->left == NULL && root->right == NULL){
            return x+y+1;
        }
        else{
            return x+y;
        }
    }
    return 0;
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
    printf("\nLevelORDer:\n");
    printLevelOrder(xd);
    printf("\n\nCount:%d",countnodes(xd));
    printf("\n\nCount:%d",countnodesdegree2(xd));
    printf("\n\nHeight:%d",height(xd));
    printf("\n\nCount:%d",countleaf(xd));

}