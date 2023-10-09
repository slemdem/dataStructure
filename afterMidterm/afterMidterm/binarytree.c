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
//// 중위 순회
//void inorder( TreeNode *root ){
//	if ( root ){
//		 inorder( root->left );	// 왼쪽서브트리 순회
//		 printf("[%d]", root->data ); 	// 노드 방문
//		 inorder( root->right );	// 오른쪽서브트리 순회
//	}
//}
//
//// 전위 순회
//void preorder( TreeNode *root ){
//	if ( root ){
//		 printf("[%d]", root->data ); 	// 노드 방문
//		 preorder( root->left );	// 왼쪽서브트리 순회
//		 preorder( root->right );	// 오른쪽서브트리 순회
//	}
//}
//
//// 후위 순회
//void postorder( TreeNode *root ){
//	if ( root ){
//		 postorder( root->left );	// 왼쪽 서브 트리 순회
//		 postorder( root->right );	// 오른쪽 서브 트리 순회
//		 printf("[%d]", root->data ); 	// 노드 방문
//	}
//}
//
//// 수식 계산 함수
//int evaluate(TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	if (root->left == NULL && root->right == NULL)
//		return root->data;
//	else {
//		int op1 = evaluate(root->left);
//		int op2 = evaluate(root->right);
//		printf("%d %c %d을 계산합니다.\n", op1, root->data, op2);
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
//// 트리 노드 수 계산
//int get_node_count(TreeNode* node)
//{
//	int count = 0;
//	if (node != NULL)
//		count = 1 + get_node_count(node->left) + get_node_count(node->right);
//
//	return count;
//}
//
//// 트리 단말노드 수 계산
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
//// 트리 높이 계산
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
//	//n1->data = 10;		// 첫 번째 노드를 설정한다.
//	//n1->left = n2;
//	//n1->right = n3;
//
//	//n2->data = 20;		// 두 번째 노드를 설정한다.
//	//n2->left = NULL;
//	//n2->right = NULL;
//
//	//n3->data = 30;		// 세 번째 노드를 설정한다.
//	//n3->left = NULL;
//	//n3->right = NULL;
//
//	//free(n1);
//	//free(n2);
//	//free(n3);
//	printf("중위 순회=");
//	inorder(root);
//	printf("\n");
//
//	printf("전위 순회=");
//	preorder(root);
//	printf("\n");
//
//	printf("후위 순회=");
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