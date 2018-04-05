#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define mp make_pair 
#define loop(i,a,b) for(int i=a;i<b;i++)


typedef long long int ll;

struct binaryTree{
	int value;
	binaryTree *left;
	binaryTree *right;
};


// print inorder tree
void printInorderOfTree(binaryTree *bTree){
	if(bTree==NULL)
		return;
	printInorderOfTree(bTree->left);
	
	cout<<bTree->value<<", ";
	
	printInorderOfTree(bTree->right);
	
	return ;
}


//make Binary tree
binaryTree *makeBinaryTree(string &s,int i){
	if(s[i]=='0')
	return NULL;
	
	i++;
	
	binaryTree * bTree;
	bTree->value=(stoi)s[i];
	i++;
	
	bTree->left=makeBinaryTree(s,i);
	bTree->right=makeBinaryTree(s,i);	
	
	else if(s[i]!=0) {
		bTree->left=
	}
	
	if(s[i]=='{')
	return bTree;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s;
		cin>>s1;
		int j=0;
		
		
		//find string without comma ','
		loop(i,0.s1.length()){
			id(s[i]!=','){
				s[j]=s1[i];
				j++;
			}
		}
		
		binaryTree *bTree =makeBinaryTree(s, 0);
		printInorderOfTree(nTree);
		cout<<endl;
	}
	return 0;
}
