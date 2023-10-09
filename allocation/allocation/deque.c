//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
////=====원형덱 코드시작====
//#define MAX_QUEUE_SIZE 10
//typedef int element;
//typedef struct {
//	int front, rear;
//	element data[MAX_QUEUE_SIZE];
//} DequeType;
//
////오류함수
//void error(const char* message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
////덱 초기화
//void init_deque(DequeType* q) {
//	q->front = q->rear = 0;
//}
//
//// 원형큐 출력 함수
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
//// 공백상태 검출 함수
//int is_empty(DequeType* q) {
//	return (q->front == q->rear);
//}
//
//// 포화상태 검출 함수
//int is_full(DequeType* q) {
//	return ((q->rear +1)%MAX_QUEUE_SIZE == q->front);
//}
//
//// 전방 삽입함수 front에 삽입 후 front 이동
//void add_front(DequeType* q, int item) {
//	if (is_full(q)) {
//		error("큐가 포화상태입니다.");
//		exit(1);
//	}
//	q->data[q->front] = item;
//	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//
//// 후방 삽입 함수 rear이동 후 rear에 삽입
//void add_rear(DequeType* q, int item) {
//	if (is_full(q)) {
//		error("큐가 포화상태입니다.");
//		exit(1);
//	}
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q -> data[q->rear] = item;
//}
//
//// 전방 삭제 함수 front의 값 반환 후 front이동
//int deleate_front(DequeType* q) {
//	if (is_empty(q)) {
//		error("큐가 공백상태입니다.");
//		exit(1);
//	}
//	q -> front =(q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//
//// 후방 삭제함수 prev에 rear에 저장 후 rear 이동 prev 위치의 값 반환 
//int delete_rear(DequeType* q) {
//	int prev = q->rear;
//	if (is_empty(q)) {
//		error("큐가 공백상태입니다.");
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
//	printf("단어를 입력하세요: ");
//	scanf("%s", instring);
//
//	// 입력된 문자열의 길이만큼 덱에 문자 추가
//	for (i = 0; i < 10 && instring[i] != '\0'; i++) { 
//		add_rear(&queue, instring[i]);
//	}
//
//	// instring의 길이를 변수에 저장
//	int length = strlen(instring);
//
//	//덱의 맨 앞값과 맨 뒤 값을 반복해서 비교 - 길이를 2로 나누어 홀수일 경우 마지막 하나는 비교하지 않음
//	for (i = 0; i < length / 2; i++) { 
//		if (deleate_front(&queue) != delete_rear(&queue)) {
//			is_palindrom = 0;
//			break; // 회문이 아니라면 반복 종료
//		}
//	}
//
//	//결과출력
//	if (is_palindrom == 1) {
//		printf("%s 는 회문이다", instring);
//	}
//	else {
//		printf("%s 는 회문이 아니다", instring);
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
