/*
 * test.cpp
 *
 *  Created on: 5 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
 #include <iomanip>
using namespace std;

struct tnode
{
int field;
struct tnode *left;
struct tnode *right;
};

void treeprint(tnode *tree)
{
  if(tree != NULL)
  {
	treeprint(tree->left);
	cout<< tree->field<<" ";
	treeprint(tree->right);

  }
}
struct tnode * addnode(int x, tnode *tree)
{
 if(tree==NULL)
 {
	 tree = new tnode;
	 tree->field = x;
	 tree->left = NULL;
	 tree->right = NULL;
	 }
 else if (x<tree->field)
	 tree->left = addnode(x, tree->left);
 else
  	 tree->right = addnode(x, tree->right);
  return (tree);
}

void freemem (tnode *tree)
{
	if (tree != NULL)
	{
	freemem(tree->left);
	freemem(tree->right);
	delete tree;
	}
}


int main() {
//int a[]={3,55,5,12,2,8,25,11};
	 srand( time(0));
	 const int arraySize =27; // размер массива а
	int a[ arraySize ];// = {56, 360, 327, 350, 815, 177, 518, 907, 130, 188, 896, 553, 764, 1, 640, 409, 142, 751, 954, 218}; // инициализация массива

	cout<<"Source Array:"<<endl;
	for (int t=0; t<=arraySize; t++)
	{
	 a[t]= rand() % 1000 + 1;
	}
	tnode *root=0;


  for(int i=0; i<=arraySize; i++)
  {

	  root = addnode(a[i], root);
  }
  treeprint(root);
  freemem(root);



    return 0;
}




