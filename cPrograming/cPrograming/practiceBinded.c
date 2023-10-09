#include <stdio.h>
#include <string.h>

/*학생이름 표시를 위한 스위치*/
const char* name(int i) {
	switch (i) {
	case 0: return "철희";
	case 1: return "철수";
	case 2: return "영희";
	case 3: return "영수";
	case 4: return "총점";
		break;
	}
}

/*과목 표시를 위한 스위치*/
const char* subj(int i) {
	switch (i) {
	case 0: return "국어";
	case 1: return "영어";
	case 2: return "수학";
	case 3: return "국사";
	case 4: return "총점";
		break;
	}
}

/*종업원 구조*/
struct employee {
	char employee_name[20];	//종업원이름
	char id_number[20];		//주민번호
	int salary_info;		//급여
};


int main(void) {
	/*배열간 덧셈 - 배열 및 변수 선언*/
	int A[3][3] = { 1,3,5,6,7,8,9,2,1 };
	int B[3][3] = { 1,3,8,6,7,6,9,2,2 };
	int C[3][3];
	int i, j;

	/*배열간 덧셈 - 계산*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	/*배열간 덧셈 - 출력*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}


	/*성적표 만들기 - 배열 및 변수 선언*/
	int score[5][5];
	int total;

	/*성적표 만들기 - 점수 입력받기*/
	for (i = 0; i < 4; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			printf("%s의 %s 점수: ", name(i), subj(j)); scanf("%d", &(score[i][j]));
			total += score[i][j];
		}
		score[i][4] = total;
	}

	/*성적표 만들기 - 과목별 총점 구하기*/
	for (j = 0; j < 5; j++) {
		total = 0;
		for (i = 0; i < 4; i++) {
			total += score[i][j];
		}
		score[4][j] = total;
	}

	/*성적표 만들기 - 출력*/
	printf("     국어  영어  수학  국사  총점 \n");
	for (i = 0; i < 5; i++) {
		printf("%s  ", name(i));
		for (j = 0; j < 5; j++) {
			printf("%d    ", score[i][j]);
		}
		printf("\n");
	}

	/*종업원 정보 - 구조 선언*/
	struct employee a;

	/*종업원 정보 - 입력하기*/
	printf("이름입력: "); scanf("%s", a.employee_name);
	printf("주민번호입력: "); scanf("%s", a.id_number);
	printf("급여입력: "); scanf("%d", &(a.salary_info));

	/*종업원 정보 - 출력*/
	printf("이름: %s \n", a.employee_name);
	printf("주민번호: %s \n", a.id_number);
	printf("급여: %d \n", a.salary_info);

	/*종업원 배열 - 선언*/
	struct employee a[3];
	int i;

	/*종업원 배열 - 입력*/
	for (i = 0; i < 3; i++) {
		printf("이름입력: "); scanf("%s", a[i].employee_name);
		printf("주민번호입력: "); scanf("%s", a[i].id_number);
		printf("급여입력: "); scanf("%d", &(a[i].salary_info));
		printf("\n");
	}

	/*종업원 배열 - 출력*/
	for (i = 0; i < 3; i++) {
		printf("이름: %s \n", a[i].employee_name);
		printf("주민번호: %s \n", a[i].id_number);
		printf("급여: %d \n", a[i].salary_info);
		printf("\n");
	}

	return 0;
}