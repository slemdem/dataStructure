//#include <stdio.h>
//#pragma warning(disable:4996)
//
//typedef int element;	// ����� Ÿ��
//
//typedef struct QueueNode {	// ť�� ����� Ÿ�� 
//	element data;
//	struct QueueNode* link;
//} QueueNode;
//
//typedef struct {		// ť ADT ����
//	QueueNode* front;
//	QueueNode* rear;
//} LinkedQueueType;
//
//// ���� �Լ�
//void enqueue(LinkedQueueType* q, element data)
//{
//	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
//	temp->data = data; 		// ������ ����
//	temp->link = NULL; 		              // ��ũ �ʵ带 NULL
//
//	if (is_empty(q)) { 		    // ť�� �����̸�
//		q->front = temp;
//		q->rear = temp;
//	}
//	else { 		                   // ť�� ������ �ƴϸ�
//		q->rear->link = temp;
//		q->rear = temp; 
//	}
//}
//
//// ���� �Լ�
//element dequeue(LinkedQueueType* q)
//{
//	QueueNode* temp = q->front;
//	element data;
//	if (is_empty(q)) {		// �������
//		fprintf(stderr, "������ �������\n");
//		exit(1);
//	}
//	else {
//		data = temp->data; 	// �����͸� ������.
//		q->front = q->front->link;     // front�� �������
//		if (q->front == NULL) 	// ���� ����
//			q->rear = NULL;
//		free(temp); 		// �����޸� ����
//		return data; 		// ������ ��ȯ
//	}
//}