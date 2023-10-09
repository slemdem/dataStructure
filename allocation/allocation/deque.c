//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
////=====������ �ڵ����====
//#define MAX_QUEUE_SIZE 10
//typedef int element;
//typedef struct {
//	int front, rear;
//	element data[MAX_QUEUE_SIZE];
//} DequeType;
//
////�����Լ�
//void error(const char* message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
////�� �ʱ�ȭ
//void init_deque(DequeType* q) {
//	q->front = q->rear = 0;
//}
//
//// ����ť ��� �Լ�
//void deque_print(DequeType* q)
//{
//	printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
//	if (!is_empty(q)) {
//		int i = q->front;
//		do {
//			i = (i + 1) % (MAX_QUEUE_SIZE);
//			printf("%d | ", q->data[i]);
//			if (i == q->rear)
//				break;
//		} while (i != q->front);
//	}
//	printf("\n");
//}
//
//// ������� ���� �Լ�
//int is_empty(DequeType* q) {
//	return (q->front == q->rear);
//}
//
//// ��ȭ���� ���� �Լ�
//int is_full(DequeType* q) {
//	return ((q->rear +1)%MAX_QUEUE_SIZE == q->front);
//}
//
//// ���� �����Լ� front�� ���� �� front �̵�
//void add_front(DequeType* q, int item) {
//	if (is_full(q)) {
//		error("ť�� ��ȭ�����Դϴ�.");
//		exit(1);
//	}
//	q->data[q->front] = item;
//	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//
//// �Ĺ� ���� �Լ� rear�̵� �� rear�� ����
//void add_rear(DequeType* q, int item) {
//	if (is_full(q)) {
//		error("ť�� ��ȭ�����Դϴ�.");
//		exit(1);
//	}
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q -> data[q->rear] = item;
//}
//
//// ���� ���� �Լ� front�� �� ��ȯ �� front�̵�
//int deleate_front(DequeType* q) {
//	if (is_empty(q)) {
//		error("ť�� ��������Դϴ�.");
//		exit(1);
//	}
//	q -> front =(q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//
//// �Ĺ� �����Լ� prev�� rear�� ���� �� rear �̵� prev ��ġ�� �� ��ȯ 
//int delete_rear(DequeType* q) {
//	int prev = q->rear;
//	if (is_empty(q)) {
//		error("ť�� ��������Դϴ�.");
//		exit(1);
//	}
//	q -> rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//	return q->data[prev];
//}
//
//
//int main(void) {
//	DequeType queue;
//
//	init_deque(&queue);
//	char instring[MAX_QUEUE_SIZE];
//	int i;
//	int is_palindrom = 1;
//
//	printf("�ܾ �Է��ϼ���: ");
//	scanf("%s", instring);
//
//	// �Էµ� ���ڿ��� ���̸�ŭ ���� ���� �߰�
//	for (i = 0; i < 10 && instring[i] != '\0'; i++) { 
//		add_rear(&queue, instring[i]);
//	}
//
//	// instring�� ���̸� ������ ����
//	int length = strlen(instring);
//
//	//���� �� �հ��� �� �� ���� �ݺ��ؼ� �� - ���̸� 2�� ������ Ȧ���� ��� ������ �ϳ��� ������ ����
//	for (i = 0; i < length / 2; i++) { 
//		if (deleate_front(&queue) != delete_rear(&queue)) {
//			is_palindrom = 0;
//			break; // ȸ���� �ƴ϶�� �ݺ� ����
//		}
//	}
//
//	//������
//	if (is_palindrom == 1) {
//		printf("%s �� ȸ���̴�", instring);
//	}
//	else {
//		printf("%s �� ȸ���� �ƴϴ�", instring);
//	}
//
//	return 0; 
//}


//int main(void)
//{
//	DequeType queue;
//
//	init_deque(&queue);
//	for (int i = 0; i < 3; i++) {
//		add_front(&queue, i);
//		deque_print(&queue);
//	}
//	for (int i = 0; i < 3; i++) {
//		delete_rear(&queue);
//		deque_print(&queue);
//	}
//	return 0;
//}