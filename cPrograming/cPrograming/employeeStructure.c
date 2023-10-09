#include <stdio.h>

struct employee {
	char employee_name[20];	//종업원이름
	char id_number[20];		//주민번호
	int salary_info;		//급여
};

int main(void) {
	struct employee a;
	/*종업원정보 입력하기*/
	printf("이름입력: "); scanf("%s", a.employee_name);
	printf("주민번호입력: "); scanf("%s", a.id_number);
	printf("급여입력: "); scanf("%d", &(a.salary_info));

	/*종업원정보 출력받기*/
	printf("이름: %s \n", a.employee_name);
	printf("주민번호: %s \n", a.id_number);
	printf("급여: %d \n", a.salary_info);
}
