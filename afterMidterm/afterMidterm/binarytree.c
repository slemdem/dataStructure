//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//#pragma warning(disable:4996)
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//TreeNode n1 = { 1, NULL, NULL };
//TreeNode n2 = { 4, &n1, NULL };
//TreeNode n3 = { 16, NULL, NULL };
//TreeNode n4 = { 25, NULL, NULL };
//TreeNode n5 = { 20, &n3, &n4 };
//TreeNode n6 = { 15, &n2, &n5 };
//TreeNode* root = &n6;
//
//
//// ���� ��ȸ
//void inorder( TreeNode *root ){
//	if ( root ){
//		 inorder( root->left );	// ���ʼ���Ʈ�� ��ȸ
//		 printf("[%d]", root->data ); 	// ��� �湮
//		 inorder( root->right );	// �����ʼ���Ʈ�� ��ȸ
//	}
//}
//
//// ���� ��ȸ
//void preorder( TreeNode *root ){
//	if ( root ){
//		 printf("[%d]", root->data ); 	// ��� �湮
//		 preorder( root->left );	// ���ʼ���Ʈ�� ��ȸ
//		 preorder( root->right );	// �����ʼ���Ʈ�� ��ȸ
//	}
//}
//
//// ���� ��ȸ
//void postorder( TreeNode *root ){
//	if ( root ){
//		 postorder( root->left );	// ���� ���� Ʈ�� ��ȸ
//		 postorder( root->right );	// ������ ���� Ʈ�� ��ȸ
//		 printf("[%d]", root->data ); 	// ��� �湮
//	}
//}
//
//// ���� ��� �Լ�
//int evaluate(TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	if (root->left == NULL && root->right == NULL)
//		return root->data;
//	else {
//		int op1 = evaluate(root->left);
//		int op2 = evaluate(root->right);
//		printf("%d %c %d�� ����մϴ�.\n", op1, root->data, op2);
//		switch (root->data) {
//		case '+':	return op1 + op2;
//		case '-':	return op1 - op2;
//		case '*':	return op1 * op2;
//		case '/':	return op1 / op2;
//		}
//	}
//	return 0;
//}
//
//// Ʈ�� ��� �� ���
//int get_node_count(TreeNode* node)
//{
//	int count = 0;
//	if (node != NULL)
//		count = 1 + get_node_count(node->left) + get_node_count(node->right);
//
//	return count;
//}
//
//// Ʈ�� �ܸ���� �� ���
//int get_leaf_count(TreeNode* node) {
//	int leaf_count = 0;
//	if (node != NULL) {
//		if (node->left == NULL && node->right == NULL) {
//			return 1;
//		}
//		leaf_count += get_leaf_count(node->left);
//		leaf_count += get_leaf_count(node->right);
//	}
//	return leaf_count;
//}
//
//// Ʈ�� ���� ���
//int get_height(TreeNode* node) {
//	int height_L = 0;
//	int height_R = 0;
//	if (node != NULL) {
//		if (node->left == NULL&& node->right == NULL) {
//			return 1;
//		}
//		height_L = 1 + get_height(node->left);
//		height_R = 1 + get_height(node->right);
//	}
//	return max(height_L, height_R);
//}
//
//int main(void){
//	//TreeNode* n1, * n2, * n3;
//
//	//n1 = (TreeNode*)malloc(sizeof(TreeNode));
//	//n2 = (TreeNode*)malloc(sizeof(TreeNode));
//	//n3 = (TreeNode*)malloc(sizeof(TreeNode));
//
//	//n1->data = 10;		// ù ��° ��带 �����Ѵ�.
//	//n1->left = n2;
//	//n1->right = n3;
//
//	//n2->data = 20;		// �� ��° ��带 �����Ѵ�.
//	//n2->left = NULL;
//	//n2->right = NULL;
//
//	//n3->data = 30;		// �� ��° ��带 �����Ѵ�.
//	//n3->left = NULL;
//	//n3->right = NULL;
//
//	//free(n1);
//	//free(n2);
//	//free(n3);
//	printf("���� ��ȸ=");
//	inorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ=");
//	preorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ=");
//	postorder(root);
//	printf("\n");
//
//	printf("%d", get_height(root));
//	printf("\n");
//	printf("%d", get_leaf_count(root));
//	printf("\n");
//	return 0;
//
//
//}