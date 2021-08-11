#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left, *right;
};
struct node* newNode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
void printLeftSubtree(node *ptr)

{   if(ptr->left!=NULL&&ptr->right!=NULL)
    printf("%d ",ptr->data);
    if(ptr->left!=NULL)
    {
        printLeftSubtree(ptr->left);
    }
}

void printRightSubtree(node *ptr)
{   
    if(ptr->right!=NULL)
    {
        printRightSubtree(ptr->right);
    }
    if(ptr->left!=NULL&&ptr->right!=NULL)
    printf("%d ",ptr->data);
}

void printLeaves(node* ptr)
{
    if(ptr==NULL)
        return;
    printLeaves(ptr->left);
    if(ptr->left==NULL&&ptr->right==NULL)
        printf("%d ",ptr->data);
    printLeaves(ptr->right);
}

void printBoundary(node* root)
{   printf("%d ",root->data);
    printLeftSubtree(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightSubtree(root->right);

}



int main()
{
    // Let us construct the tree given in the above diagram
    struct node* root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
 
    printBoundary(root);
 
    return 0;
}
