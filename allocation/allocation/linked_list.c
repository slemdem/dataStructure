//#include <stdio.h>
//#pragma warning(disable:4996)
//
//void* malloc(size_t size);
//void free(void * ptr);
//
//typedef int element;
///*
//typedef struct {
//	char name[100];
//} element;
//*/
//
//typedef struct{
//	element data;
//	struct ListNode*link;
//}ListNode;
//
//void error(const char* message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
//// 맨 앞에 요소 추가
//ListNode* insert_first(ListNode* head, element value) {
//	ListNode* p = 
//		(ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = head;
//	head = p;
//
//	return head;
//}
//
//// 중간에 요소 추가
//ListNode* insert(ListNode* head, ListNode* pre, element value) {
//	ListNode* p =
//		(ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//
//	return head;
//}
//
////맨 앞의 요소 삭제
//ListNode* delete_first(ListNode* head) {
//	ListNode* removed;
//	if (head == NULL)
//		return NULL;
//
//	removed = head;
//	head = removed->link; // == head = head -> link;
//	free(removed);
//
//	return head;
//}
//
////중간 요소 삭제
//ListNode* delete(ListNode* head, ListNode* pre) {
//	ListNode* removed;
//
//	removed = pre->link;
//	pre->link = removed->link;
//	free(removed);
//
//	return head;
//}
//
////중간 요소를 값을 기반으로 삭제 
//ListNode* delete_node(ListNode* head, element x) {
//	ListNode* p = head;
//	ListNode* pre = NULL;
//
//	while (p != NULL) {
//		if (p->data == x) {
//			ListNode* removed = p;
//			if (p->link == NULL){
//				pre->link = NULL;
//				free(removed);
//				break;
//			}
//			p = p->link;
//			if (pre == NULL) {
//				// 삭제할 노드가 첫 번째 노드인 경우
//				head = p;
//			}
//			else {
//				// 삭제할 노드가 중간이나 마지막 노드인 경우
//				pre->link = p;
//			}
//			free(removed);
//		}
//		pre = p;
//		p = p->link;
//	}
//	p = NULL;
//	pre = NULL;
//	free(p);
//	free(pre);
//
//	return head;
//}
//
//void MinMaxfromList(ListNode* head) {
//	element min = head ->data;
//	element max = head->data;
//
//	while (head != NULL) {
//		if (head->data < min) {
//			min = head->data;
//		}
//		else if (head->data > max) {
//			max = head->data;
//		}
//		head = head->link;
//	}
//	printf("리스트의 최소값은 %d", min);
//	printf("리스트의 최대값은 %d", max);
//}
//
////두개의 리스트를 연결
//ListNode* concat_list(ListNode* head1, ListNode* head2) {
//	if (head1 == NULL)
//		return head2;
//	else if (head2 == NULL)
//		return head1;
//	else {
//		ListNode* p = head1;
//		while (p->link != NULL) {
//			p = p->link;
//		}
//		p->link = head2;
//		return head1;
//	}
//}
//
////리스트 출력
//void print_list(ListNode* head) {
//	for (ListNode* p = head; p != NULL; p = p->link) {
//		printf("%d->", p->data);
//	}
//	printf("NULL\n");
//}
//
////값을 받아 해당값을 가지고 있는지 없는지
//ListNode* serch_list(ListNode* head, element x) {
//	for (ListNode* p = head; p != NULL; p = p->link) {
//		if (p->data == x) {
//			return head;
//		}
//	}
//	return NULL;
//}
//
//
//int main(void){
//	
//	ListNode* head = NULL;
//	element value;
//
//	print_list(head);
//	head = insert_first(head, 10);
//	head = insert_first(head, 13);
//	head = insert_first(head, 8);
//	head = insert_first(head, 33);
//	head = insert_first(head, 21);
//	print_list(head);
//
//	printf("삭제할 값을 입력하시오: ");
//	scanf_s("%d", &value);
//
//	head = delete_node(head, value);
//	print_list(head);
//
//	MinMaxfromList(head);
//	
//
//	/*
//	ListNode* head = NULL;
//	
//
//	
//	for (int i = 0; i < 5; i++) {
//		head = insert_first(head, i*10);
//		print_list(head);
//	}
//	
//	if (serch_list(head, 30) != NULL) {
//		printf("리스트에서 30을 찾았습니다\n");
//	}
//	else
//		printf("리스트에서 30을 찾지 못했습니다\n");
//
//	for (int i = 0; i < 5; i++) {
//		head = delete_first(head);
//		print_list(head);
//	}
//	
//	ListNode* head1 = NULL;
//	ListNode* head2 = NULL;
//	ListNode* combined_head = NULL;
//
//	for (int i = 0; i < 5; i++) {
//		head1 = insert_first(head1, i * 10);
//	}
//	print_list(head1);
//
//
//	for (int i = 0; i < 3; i++) {
//		head2 = insert_first(head2, i + 3);
//	}
//	print_list(head2);
//
//	combined_head = concat_list(head1, head2);
//	print_list(combined_head);
//	*/
//
//	/*head = (ListNode*)malloc(sizeof(ListNode));
//	head->data = 10;
//	head->link = NULL;
//
//	ListNode* p = NULL;
//	p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = 20;
//	p->link = NULL;
//
//	head->link = p;*/
//
//	return 0;
//
//
//}
//
