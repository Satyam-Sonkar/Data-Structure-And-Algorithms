//Minimum value of BST
#include "stdio.h"
#include "stdlib.h"
struct node
{
	int data;
	struct node * right,*left;
	
};
struct node * newnode(int data)
{
	struct node * _node =(struct node *)malloc(sizeof(node));
	_node->data=data;
	_node->right=_node->left=NULL;
	return _node;
}
struct node * insertnode(struct node * root,int _data)
{
	if(root == NULL)
		{root = newnode(_data);
		return root;
		}
	if(root->data < _data)
		root->right= insertnode((root->right),_data);
	else
		root->left= insertnode((root->left),_data);
	
	return root;
}
int  MinOfBST(struct node * root)
{
	if(root==NULL)
		return -10000;
	if (root->left==NULL)
	{
		return root->data;
		/* code */
	}
	
	return MinOfBST(root->left);
	
}
int main()
{
	struct node * root=newnode(14);
	
	insertnode(root,11);
	insertnode(root,9);
	insertnode(root,5);
	insertnode(root,4);
	insertnode(root,14);
	insertnode(root,11);
	insertnode(root,9);
	insertnode(root,5);
	insertnode(root,4);
	insertnode(root,14);
	
	
	printf("%d\n",MinOfBST(root) );
	/* code */
	return 0;
}