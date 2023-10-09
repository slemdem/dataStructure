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
//// ���� ���� ����Ʈ�� ��带 ���
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
////��� ����
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
//	printf("Ž���� ��: ");
//	scanf("%d", &data);
//
//	if (search(head, data) != NULL)
//		printf("���� ����Ʈ �ȿ� �ֽ��ϴ�. \n ");
//	else
//		printf("���� ����Ʈ �ȿ� �����ϴ�. \n ");
//
//	//DListNode* head = (DListNode*)malloc(sizeof(DListNode));
//	//init(head);
//	//printf("�߰� �ܰ�\n");
//	//for (int i = 0; i < 5; i++) {
//	//	// ��� ����� �����ʿ� ����
//	//	dinsert(head, i);
//	//	print_dlist(head);
//	//}
//	//printf("\n���� �ܰ�\n");
//	//for (int i = 0; i < 5; i++) {
//	//	print_dlist(head);
//	//	ddelete(head, head->rlink);
//	//}
//	//free(head);
//	return 0;
//}