//#include <stdio.h>
//#pragma warning(disable:4996)
//
//void* malloc(size_t size);
//void free(void * ptr);
//
//typedef int element;
//
//typedef struct DListNode{
//	element data;
//	struct DListNode* llink;
//	struct DListNode* rlink;
//}DListNode;
//
//void init(DListNode* phead)
//{
//	phead->llink = phead;
//	phead->rlink = phead;
//}
//
//// 이중 연결 리스트의 노드를 출력
//void print_dlist(DListNode* phead)
//{
//	DListNode* p;
//	for (p = phead->rlink; p != phead; p = p->rlink) {
//		printf("<-| |%d| |-> ", p->data);
//	}
//	printf("\n");
//}
//
//
////노드 삽입
//void dinsert(DListNode* before, element data) {
//	DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
//	newnode->data = data;
//
//	newnode->llink = before;
//	newnode->rlink = before->rlink;
//
//	before->rlink->llink = newnode;
//	before->rlink = newnode;
//}
//
//void ddelete(DListNode* head, DListNode* removed)
//{
//	if (removed == head) return;
//
//	removed->llink->rlink = removed->rlink;
//	removed->rlink->llink = removed->llink;
//	free(removed);
//}
//
//DListNode* search(DListNode* head, element data) {
//	DListNode* p;
//	for (p = head->rlink; p != head; p = p->rlink) {
//		if (p->data == data) {
//			return head;
//		}
//	}
//	return NULL;
//}
//
//int main(void)
//{
//	int count;
//	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
//	init(head);
//	dinsert(head, 1); dinsert(head, 2);
//	dinsert(head, 3); dinsert(head, 4);
//	print_dlist(head);
//
//	element data;
//	printf("탐색할 값: ");
//	scanf("%d", &data);
//
//	if (search(head, data) != NULL)
//		printf("값이 리스트 안에 있습니다. \n ");
//	else
//		printf("값이 리스트 안에 없습니다. \n ");
//
//	//DListNode* head = (DListNode*)malloc(sizeof(DListNode));
//	//init(head);
//	//printf("추가 단계\n");
//	//for (int i = 0; i < 5; i++) {
//	//	// 헤드 노드의 오른쪽에 삽입
//	//	dinsert(head, i);
//	//	print_dlist(head);
//	//}
//	//printf("\n삭제 단계\n");
//	//for (int i = 0; i < 5; i++) {
//	//	print_dlist(head);
//	//	ddelete(head, head->rlink);
//	//}
//	//free(head);
//	return 0;
//}
