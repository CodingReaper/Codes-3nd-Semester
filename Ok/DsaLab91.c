#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} BST;

BST *insert(BST *t, int x)
{
    if (t == NULL)
    {
        t = (BST *)malloc(sizeof(BST));
        t->data = x;
        t->left = NULL;
        t->right = NULL;
    }
    else if (x < t->data)
    {
        t->left = insert(t->left, x);
    }
    else if(x > t->data){
        t->right = insert(t->right,x);
    }
    return t;
}

void inorder(BST* root)  //left,root,right
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

BST * minValueNode(BST * node)
{
    BST* current = node;
    while (current && current->left != NULL)
        current = current->left;
  
    return current;
}

BST * deleteNode(BST * root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            BST * temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            BST * temp = root->left;
            free(root);
            return temp;
        }
        BST * temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main(){
    BST * xd = NULL;
    xd = insert(xd,20);
    xd = insert(xd,30);
    xd = insert(xd,40);
    xd = insert(xd,50);
    xd = insert(xd,60);
    xd = insert(xd,70);
    xd = insert(xd,80);

    xd = deleteNode(xd,50);
    inorder(xd);    
}
