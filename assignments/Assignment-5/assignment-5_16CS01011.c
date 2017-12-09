/*	Aman Pratap Singh
 *	16CS01011, Indian Institute of Technology Bhubaneswar
 *	Data Structure LAB
 *	Assignment - 5
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
} node;

node* createNode(int data) {
	node* temp = (node*) malloc(sizeof(node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node* insert(node* root, int value) {
	if (root == NULL) {
		root = createNode(value);
	}

	if (value > root->data) {
		root->right = insert(root->right, value);
	}
	if (value < root->data) {
		root->left = insert(root->left, value);
	}

	return root;
}

void inorder(node *root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
	return;
}

void postorder(node *root) {
	if(root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

void preorder(node *root) {
	if(root != NULL) {
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void levelorder(node *root) {
	node* arr[1000];
	int front = 0, back = 0;

	arr[back++] = root;

	while(front != back) {
		printf("%i ", arr[front]->data);
		if (arr[front]->left != NULL)
			arr[back++] = arr[front]->left;
		if (arr[front]->right != NULL)
			arr[back++] = arr[front]->right;
		front++;
	}
}

void allpaths(node* root, int* pathArray, int sz) {
	if (root==NULL) return;

	pathArray[sz] = root->data;
	sz++;
 
	if (root->left==NULL && root->right==NULL) {
		for(int i = 0; i < sz; i++) {
			printf("%i ", pathArray[i]);
		}
		printf("\n");
	}
	else {
		allpaths(root->left, pathArray, sz);
		allpaths(root->right, pathArray, sz);
	}
}

void lowestCommonAncestor(node* root, int first, int second) {
	if (first > second) {
		int temp = second;
		second = first;
		first = temp;
	}
	if (root->data >= first && root->data <= second) {
		printf("Lowest Common Ancestor of these two numbers is %d\n", root->data);
		return;
	}
	else if (root->data > second) {
		lowestCommonAncestor(root->left, first, second);
	}
	else if (root->data < first) {
		lowestCommonAncestor(root->right, first, second);
	}

	return;
}

int inorderSuccessor(node* root, int key, int res) {
	if (root == NULL)
		return res;
	if (root->data == key) {
		if (root->right != NULL) {
			node* temp = root->right;
			while(temp->left) {
				temp = temp->left;
			}
			res = temp->data;
		}
		return res;
	}	
	if (root->data > key) {
		res = root->data;
		res = inorderSuccessor(root->left, key, res);
	}
	else {
		res = inorderSuccessor(root->right, key, res);
	}
	return res;
}

int main() {
	printf("ENTER N:");
	int n;
	scanf("%i", &n);
	printf("ENTER %i NUMBERS: ", n);
	node* root = NULL;
	for(int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		root = insert(root, temp);
	}
	// allpaths(root);
	printf("\nINORDER: \n");
	inorder(root);
	printf("\n\nPREORDER: \n");
	preorder(root);
	printf("\n\nPOSTORDER: \n");
	postorder(root);
	printf("\n\nLEVEL ORDER: \n");
	levelorder(root);
	printf("\n\nALL PATHS\n");
	int paths[1000];
	allpaths(root, paths, 0);
	printf("\nLowest Common Ancestor: \n");
	printf("Enter two numbers seperated by space: ");
	int f, s;
	scanf("%d", &f);
	scanf("%d", &s);
	lowestCommonAncestor(root, f, s);
	printf("\nInorder Successor: \n");
	printf("Enter a number for which Inorder Successor is required: ");
	int is;
	scanf("%i", &is);
	printf("Inorder Successor of this number is: %i\n", inorderSuccessor(root, is, 0));
	printf("\n");
	return 0;
}