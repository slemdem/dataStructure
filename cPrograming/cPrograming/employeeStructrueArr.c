#include <stdio.h>

struct employee {
	char employee_name[20];	//�������̸�
	char id_number[20];		//�ֹι�ȣ
	int salary_info;		//�޿�
};

int main(void) {
	/*�迭����*/
	struct employee a[3];
	int i;

	/*������ �迭 �Է¹ޱ�*/
	for (i = 0; i < 3; i++) {
		printf("�̸��Է�: "); scanf("%s", a[i].employee_name);
		printf("�ֹι�ȣ�Է�: "); scanf("%s", a[i].id_number);
		printf("�޿��Է�: "); scanf("%d", &(a[i].salary_info));
		printf("\n");
	}

	/*������ �迭 ��¹ޱ�*/
	for (i = 0; i < 3; i++) {
		printf("�̸�: %s \n", a[i].employee_name);
		printf("�ֹι�ȣ: %s \n", a[i].id_number);
		printf("�޿�: %d \n", a[i].salary_info);
		printf("\n");
	}
}