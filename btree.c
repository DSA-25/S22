#include<stdio.h>
#include<malloc.h>
#include"btree.h"


void main()
{
    struct node *root=NULL;

    struct node * create();
    struct node * insert();
    void inorder();
    void preorder();
    void postorder();

    int n,ch,q=0;
    do
    {
        printf("\n1.Create\n2.Insert\n3.Preorder\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:root=create(root);
            break;
        case 2:root=insert(root);
            break;
        case 3:preorder(root);
            break;
        case 4:q=1;
            break;
        }
    } while (q==0);
}

