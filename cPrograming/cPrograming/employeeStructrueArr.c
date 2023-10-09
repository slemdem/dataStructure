#include <stdio.h>

struct employee {
	char employee_name[20];	//종업원이름
	char id_number[20];		//주민번호
	int salary_info;		//급여
};

int main(void) {
	/*배열선언*/
	struct employee a[3];
	int i;

	/*종업원 배열 입력받기*/
	for (i = 0; i < 3; i++) {
		printf("이름입력: "); scanf("%s", a[i].employee_name);
		printf("주민번호입력: "); scanf("%s", a[i].id_number);
		printf("급여입력: "); scanf("%d", &(a[i].salary_info));
		printf("\n");
	}

	/*종업원 배열 출력받기*/
	for (i = 0; i < 3; i++) {
		printf("이름: %s \n", a[i].employee_name);
		printf("주민번호: %s \n", a[i].id_number);
		printf("급여: %d \n", a[i].salary_info);
		printf("\n");
	}
}
