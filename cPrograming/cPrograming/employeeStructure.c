#include <stdio.h>

struct employee {
	char employee_name[20];	//�������̸�
	char id_number[20];		//�ֹι�ȣ
	int salary_info;		//�޿�
};

int main(void) {
	struct employee a;
	/*���������� �Է��ϱ�*/
	printf("�̸��Է�: "); scanf("%s", a.employee_name);
	printf("�ֹι�ȣ�Է�: "); scanf("%s", a.id_number);
	printf("�޿��Է�: "); scanf("%d", &(a.salary_info));

	/*���������� ��¹ޱ�*/
	printf("�̸�: %s \n", a.employee_name);
	printf("�ֹι�ȣ: %s \n", a.id_number);
	printf("�޿�: %d \n", a.salary_info);
}