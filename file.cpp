#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data =d;
		left = NULL;
		right = NULL;
	}
}; 
node* buildTree()
{

  int d;
  cin>>d;
  if(d==-1)
  	return NULL;
  node* n = new node(d);
  n->left = buildTree();
  n->right = buildTree();

  return n;
}
class HDPair{
public:
	int height;
	int diameter;
};

HDPair optDiameter(node* root)
{
  HDPair p;
  if(root==NULL)
  {
  	p.height=p.diameter=0;
     return p;
  }
 HDPair Left = optDiameter(root->left);
 HDPair Right = optDiameter(root->right);
  
 p.height = max(Left.height,Right.height);
 int D1 = Left.height  + Right.height;
 int D2 = Left.diameter;
 int D3 = Right.diameter;

 p.diameter = max(D1,max(D2,D3));
  return p;

}

int replaceSum(node* root)
{
	// base case
	if(root==NULL)
		return 0;
    if(root->left==NULL and root->right==NULL)
    {
    	return root->data;
    }

    // recursive
    int LS = replaceSum(root->left);
    int RS = replaceSum(root->right);
    
    int temp = root->data;
    root->data = LS + RS ;
    return temp + root->data ;
}


















int main()
{
	node* root = buildTree();
	cout<< " Diameter "<< optDiameter(root).diameter<<endl;
	return 0; 
}