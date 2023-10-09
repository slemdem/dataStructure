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
//	// Ʈ���� �����̸� ���ο� ��带 ��ȯ�Ѵ�. 
//	if (node == NULL)
//		return new_node(name, phone);
//	
//	// �׷��� ������ ��ȯ������ Ʈ���� ��������. 
//	if (strcmp(node->name,name) > 0)
//		node->left = insert_node(node->left, name, phone);
//	else if (strcmp(node->name, name) < 0)
//		node->right = insert_node(node->right, name, phone);
//
//	// ����� ��Ʈ �����͸� ��ȯ�Ѵ�. 
//	return node;
//}
//
//TreeNode* min_value_node(TreeNode* node)
//{
//	TreeNode* current = node;
//
//	// �� ���� �ܸ� ��带 ã���� ������
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
//	// ���� Ű�� ��Ʈ���� ������ ���� ���� Ʈ���� �ִ� ����
//	if (strcmp(root->name, name) > 0)
//		root->left = delete_node(root->left, name);
//	// ���� Ű�� ��Ʈ���� ũ�� ������ ���� Ʈ���� �ִ� ����
//	else if (strcmp(root->name, name) < 0)
//		root->right = delete_node(root->right, name);
//	// Ű�� ��Ʈ�� ������ �� ��带 �����ϸ� ��
//	else {
//		// ù ��°�� �� ��° ���
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
//		// �� ��° ���
//		TreeNode* temp = min_value_node(root->right);
//
//		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
//		strcpy(root->name, temp->name);
//		strcpy(root->phone, temp->phone);
//
//		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
//		root->right = delete_node(root->right, temp->name);
//	}
//	return root;
//}
//
//void inorder(TreeNode* root) {
//	if (root != NULL) {
//		inorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
//		printf("%20s : %s \n", root->name, root->phone); 	// ��� �湮
//		inorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
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
//// ���� Ž�� Ʈ���� ����ϴ� ����ó ���α׷�
//int main(void)
//{
//	char	command, name[80], phone[200];
//	TreeNode* root = NULL, *p;
//
//	while (true) {
//		printf("����(i), Ž��(s), ����(d), ���(p), ����(q): ");
//		scanf("%c", &command);
//
//		switch (command) {
//		case 'i':
//			printf("ģ���� �̸�: ");
//			scanf("%s", &name);
//			printf("ģ���� ��ȭ��ȣ: ");
//			scanf("%s", &phone);
//			root = insert_node(root, name, phone);
//			break;
//		case 'd':
//			printf("  > ������ ģ�� �̸�: ");
//			scanf("%s", &name);
//			root = delete_node(root, name);
//			break;
//		case 'p':
//			inorder(root);
//			printf("\n");
//			break;
//		case 's':
//			printf("ģ���� �̸�: ");
//			scanf("%s", &name);
//			p = search(root, name);
//			if (p != NULL) {
//				printf("%s�� ��ȭ��ȣ: %s\n", name, p->phone);
//			}
//			else {
//				printf("%s�� ã���� ����\n");
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