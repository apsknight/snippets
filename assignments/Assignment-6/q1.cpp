#include <iostream>
using namespace std;

typedef struct node {
	int key;
	float priority;
	struct node* left, right, parent;
}* root;

class Treap {
	public:
		void insert(int, float);
		void del(int);
		void display(node*);
		void lrotate(node*);
		void rrotate(node*);
		Treap() {
			root = NULL:
		}
}

void Treap::insert(node* treap, node* newNode) {
	if (root == NULL) {
		root = new node;
		root->key = newNode->key;
		root->priority = newNode->priority;
		root->left = NULL;
		root->right = NULL;
		return;
	}
	if (tree->info == newNode->info) {
		return;
	}
	if (tree->info > newNode->info) {
		if (tree->left != NULL) {
			insert(tree->left, newNode);
		}
		else {
			tree->left = newNode;
			return;
		}
	}
	else {
		if (tree->right != NULL) {
			insert(tree->right, newNode);
		}
		else {
			tree->right = newNode;
			
			return;
		}
	}
}

int main() {
	off;
	

  	return 0;
}