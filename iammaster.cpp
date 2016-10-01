#include<bits/stdc++.h>

using namespace std;

class node{
public:
	node *left;
	node *right;
	int val;
	node(int vl){val=vl;}
};

int main(){

	node *root;
	root->left=new node(3);
	root->right=new node(4);

	return 0;
}



