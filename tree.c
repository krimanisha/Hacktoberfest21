#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node) : ");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    newnode->data=x;
    printf("For left child of %d , ",x);
    newnode->left=create();
    printf("For right child of %d , ",x);
    newnode->right=create();
    return newnode;
}
int count=0;
int leafnodes(struct node *newnode)
{
    if(newnode!=NULL)
    {
        leafnodes(newnode->left);
        if((newnode->left==NULL) && (newnode->right==NULL))
        count++;
        leafnodes(newnode->right);
    }
    return count;
}
void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("The number of leaf nodes : %d",leafnodes(root));
}


/* OUTPUT 
Enter data (-1 for no node) : 1
For left child of 1 , Enter data (-1 for no node) : 2
For left child of 2 , Enter data (-1 for no node) : 3
For left child of 3 , Enter data (-1 for no node) : -1
For right child of 3 , Enter data (-1 for no node) : -1
For right child of 2 , Enter data (-1 for no node) : 4
For left child of 4 , Enter data (-1 for no node) : -1
For right child of 4 , Enter data (-1 for no node) : -1
For right child of 1 , Enter data (-1 for no node) : 5
For left child of 5 , Enter data (-1 for no node) : -1
For right child of 5 , Enter data (-1 for no node) : -1
The number of leaf nodes : 3
    Binary Tree :             1
                            /   \
                           2     5
                         /  \
                        3    4
