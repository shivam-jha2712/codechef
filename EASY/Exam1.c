#include <stdio.h> //HEADER FILE INCLUSION
#include <stdlib.h>
struct node // defining structure
{
    int data;
    struct node *left;
    struct node *right;
};
int sch, ctr = 0;
struct node *newnode(int value)
{
    struct node *nn = malloc(sizeof(struct node));
    nn->data = value;
    nn->left = NULL;
    nn->right = NULL;
}
struct node *insertion(struct node *root, int value)
{
    if (root == NULL)
    {
        return (newnode(value));
    }
    if (root->data < value)
    {
        root->right = insertion(root->right, value);
    }
    else if (root->data > value)
    {
        root->left = insertion(root->left, value);
    }
    return root;
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        if (root->data == sch)
        {
            ctr++;
        }
    }
}

int main() // DEFINING MAIN

{
    struct node *root = NULL;
    root = insertion(root, 10);
    root = insertion(root, 6);
    root = insertion(root, 192);
    root = insertion(root, 30);
    scanf("%d", &sch);
    postorder(root);
    if (ctr > 0)

    {
        printf("FOUND");
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}
