#include <iostream>
using namespace std;
class BinarySearchTree{
 private:

class node{
	public:
		int data;
		node*left,*right;
		node(int data){
			this->data=data;
			left=right =NULL;
		}
	
		};
		node *root;
		node*insert(node*root,int val);
		node*DeleteNodeInBST(node*root,int data);
		node*InOrderTraversal(node*root);
		node*PreOrderTraversal(node*root);
		node*PostOrderTraversal(node*root);
		node*FindMax(node*root);
		public:
			BinarySearchTree(){
				root=NULL;
			}
			void insert(int val){
				Insert(this->root,val);
			}
			void Delete(inr val){
				DeleteNodeInBST(this->root,val);
			}
			
	  	    void InOrderTraversal(){
	  	    	InOrderTraversal(this->root);
			  }
	        void   PreOrderTraversal(){
	        	PreOrderTraversal(this->root)
			}

             void PostOrderTraversal(){
             	PostOrderTraversal(this->root);
			 }

  };
  int main(){
  	BinarySearchTree t1,t2
  	t1.insert(20);
  	t1.Delete(9);
  	
  }
node* BinarySearchTree::insert(node*r,int val){
	if(r==NULL){
		node*t=new node(val);
		if(r==root)
		root=t;
		else
		r=t;
	}
	else if (r->data==val){
		cout<<"record already exist"<<val;
	}
	else if (val< r->data)
	r->left=Insert(r->right,val);
	return r;
}
node * BinarySearchTree::DeleteNodeInBST(node *root,int data)
{
	if(root==NULL)
	return root;
	else if(data <root->data)
	root->left=DeleteNodeInBST(root->left,data);
	else if(data>root->data)
	root->right=DeleteNodeInBST(root->rught,data);
	else{
		if(root->right==NULL&&root->left==NULL){
			delete root;
			root=NULL;
			return root;
			
		}
		else if(root->right==NULL){
			node*temp=root;
			root= root->left;
			delete temp;
			
		}
		else if(root)
		{
		}
     else 
     {
     	node*temp=FindMAx(root->left);
     	root->data=temp->data;
     	root->left=Delete
	 }



	}
	
}


		
		
		
		
		
		
		
		