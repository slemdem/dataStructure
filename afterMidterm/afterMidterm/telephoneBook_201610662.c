//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#pragma warning(disable:4996)
//
//
//typedef struct TreeNode {
//	char name[80];
//	char phone[200];
//	struct TreeNode* left;
//	struct TreeNode* right;
//}TreeNode;
//
//
//TreeNode* new_node(char* name, char* phone)
//{
//	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
//	strcpy(temp->name,name);
//	strcpy(temp->phone, phone);
//	temp->left = NULL;
//	temp->right = NULL;
//
//	return temp;
//}
//
//TreeNode* insert_node(TreeNode* node, char* name, char* phone)
//{
//	// 트리가 공백이면 새로운 노드를 반환한다. 
//	if (node == NULL)
//		return new_node(name, phone);
//	
//	// 그렇지 않으면 순환적으로 트리를 내려간다. 
//	if (strcmp(node->name,name) > 0)
//		node->left = insert_node(node->left, name, phone);
//	else if (strcmp(node->name, name) < 0)
//		node->right = insert_node(node->right, name, phone);
//
//	// 변경된 루트 포인터를 반환한다. 
//	return node;
//}
//
//TreeNode* min_value_node(TreeNode* node)
//{
//	TreeNode* current = node;
//
//	// 맨 왼쪽 단말 노드를 찾으러 내려감
//	while (current->left != NULL)
//		current = current->left;
//
//	return current;
//}
//
//TreeNode* delete_node(TreeNode* root, char* name)
//{
//	if (root == NULL) return root;
//
//	// 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
//	if (strcmp(root->name, name) > 0)
//		root->left = delete_node(root->left, name);
//	// 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
//	else if (strcmp(root->name, name) < 0)
//		root->right = delete_node(root->right, name);
//	// 키가 루트와 같으면 이 노드를 삭제하면 됨
//	else {
//		// 첫 번째나 두 번째 경우
//		if (root->left == NULL && root->right == NULL) {
//			free(root);
//			return NULL;
//		}
//		else if (root->left == NULL) {
//			TreeNode* temp = root->right;
//			free(root);
//			return temp;
//		}
//		else if (root->right == NULL) {
//			TreeNode* temp = root->left;
//			free(root);
//			return temp;
//		}
//
//		// 세 번째 경우
//		TreeNode* temp = min_value_node(root->right);
//
//		// 중외 순회시 후계 노드를 복사한다. 
//		strcpy(root->name, temp->name);
//		strcpy(root->phone, temp->phone);
//
//		// 중외 순회시 후계 노드를 삭제한다. 
//		root->right = delete_node(root->right, temp->name);
//	}
//	return root;
//}
//
//void inorder(TreeNode* root) {
//	if (root != NULL) {
//		inorder(root->left);	// 왼쪽서브트리 순회
//		printf("%20s : %s \n", root->name, root->phone); 	// 노드 방문
//		inorder(root->right);	// 오른쪽서브트리 순회
//	}
//}
//
//TreeNode* search(TreeNode* node, char* name)
//{
//	if (node == NULL)
//		return NULL;
//
//	if (strcmp(node->name, name) == 0)
//		return node;
//	else if (strcmp(node->name, name) > 0)
//		return  search(node->left, name);
//	else
//		return  search(node->right, name);
//}
//
//
//
//// 이진 탐색 트리를 사용하는 연락처 프로그램
//int main(void)
//{
//	char	command, name[80], phone[200];
//	TreeNode* root = NULL, *p;
//
//	while (true) {
//		printf("삽입(i), 탐색(s), 삭제(d), 출력(p), 종료(q): ");
//		scanf("%c", &command);
//
//		switch (command) {
//		case 'i':
//			printf("친구의 이름: ");
//			scanf("%s", &name);
//			printf("친구의 전화번호: ");
//			scanf("%s", &phone);
//			root = insert_node(root, name, phone);
//			break;
//		case 'd':
//			printf("  > 삭제할 친구 이름: ");
//			scanf("%s", &name);
//			root = delete_node(root, name);
//			break;
//		case 'p':
//			inorder(root);
//			printf("\n");
//			break;
//		case 's':
//			printf("친구의 이름: ");
//			scanf("%s", &name);
//			p = search(root, name);
//			if (p != NULL) {
//				printf("%s의 전화번호: %s\n", name, p->phone);
//			}
//			else {
//				printf("%s를 찾을수 없음\n");
//			}
//			break;
//		case 'q':
//			return 0;
//		}
//		rewind(stdin);
//	}
//
//	return 0;
//}