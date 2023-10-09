//#include <stdio.h>
//#pragma warning(disable:4996)
//
//void* malloc(size_t size);
//void free(void* ptr);
//
//typedef int element;
//
//typedef struct {
//	element data;
//	struct ListNode* link;
//}ListNode;
//
//// 맨 앞에 요소 추가
//ListNode* insert_first(ListNode* head, element value) {
//	ListNode* node =
//		(ListNode*)malloc(sizeof(ListNode));
//	node->data = value;
//	if (head == NULL) {
//		head = node;
//		node->link = head;
//	}
//	else {
//		node->link = head->link;
//		head->link = node;
//	}
//
//	return head;
//}
//
//// 맨 뒤에 요소 추가
//ListNode* insert_last(ListNode* head, element value) {
//	ListNode* node =
//		(ListNode*)malloc(sizeof(ListNode));
//	node->data = value;
//	if (head == NULL) {
//		head = node;
//		node->link = head;
//	}
//	else {
//		node->link = head->link;
//		head->link = node;
//		head = node;
//	}
//
//	return head;
//}
//
//void print_list(ListNode* head) {
//	ListNode* p;
//
//	if (head == NULL)
//		return;
//	p = head->link;
//	do {
//		printf("%d->", p->data);
//		p = p->link;
//	} while (p != head->link);
//}
//
//int main(void)
//{
//	ListNode* head = NULL;
//
//	// list = 10->20->30->40
//	head = insert_last(head, 20);
//	head = insert_last(head, 30);
//	head = insert_last(head, 40);
//	head = insert_first(head, 10);
//	print_list(head);
//	return 0;
//}