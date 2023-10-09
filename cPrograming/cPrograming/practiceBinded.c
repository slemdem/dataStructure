#include <stdio.h>
#include <string.h>

/*�л��̸� ǥ�ø� ���� ����ġ*/
const char* name(int i) {
	switch (i) {
	case 0: return "ö��";
	case 1: return "ö��";
	case 2: return "����";
	case 3: return "����";
	case 4: return "����";
		break;
	}
}

/*���� ǥ�ø� ���� ����ġ*/
const char* subj(int i) {
	switch (i) {
	case 0: return "����";
	case 1: return "����";
	case 2: return "����";
	case 3: return "����";
	case 4: return "����";
		break;
	}
}

/*������ ����*/
struct employee {
	char employee_name[20];	//�������̸�
	char id_number[20];		//�ֹι�ȣ
	int salary_info;		//�޿�
};


int main(void) {
	/*�迭�� ���� - �迭 �� ���� ����*/
	int A[3][3] = { 1,3,5,6,7,8,9,2,1 };
	int B[3][3] = { 1,3,8,6,7,6,9,2,2 };
	int C[3][3];
	int i, j;

	/*�迭�� ���� - ���*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	/*�迭�� ���� - ���*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}


	/*����ǥ ����� - �迭 �� ���� ����*/
	int score[5][5];
	int total;

	/*����ǥ ����� - ���� �Է¹ޱ�*/
	for (i = 0; i < 4; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			printf("%s�� %s ����: ", name(i), subj(j)); scanf("%d", &(score[i][j]));
			total += score[i][j];
		}
		score[i][4] = total;
	}

	/*����ǥ ����� - ���� ���� ���ϱ�*/
	for (j = 0; j < 5; j++) {
		total = 0;
		for (i = 0; i < 4; i++) {
			total += score[i][j];
		}
		score[4][j] = total;
	}

	/*����ǥ ����� - ���*/
	printf("     ����  ����  ����  ����  ���� \n");
	for (i = 0; i < 5; i++) {
		printf("%s  ", name(i));
		for (j = 0; j < 5; j++) {
			printf("%d    ", score[i][j]);
		}
		printf("\n");
	}

	/*������ ���� - ���� ����*/
	struct employee a;

	/*������ ���� - �Է��ϱ�*/
	printf("�̸��Է�: "); scanf("%s", a.employee_name);
	printf("�ֹι�ȣ�Է�: "); scanf("%s", a.id_number);
	printf("�޿��Է�: "); scanf("%d", &(a.salary_info));

	/*������ ���� - ���*/
	printf("�̸�: %s \n", a.employee_name);
	printf("�ֹι�ȣ: %s \n", a.id_number);
	printf("�޿�: %d \n", a.salary_info);

	/*������ �迭 - ����*/
	struct employee a[3];
	int i;

	/*������ �迭 - �Է�*/
	for (i = 0; i < 3; i++) {
		printf("�̸��Է�: "); scanf("%s", a[i].employee_name);
		printf("�ֹι�ȣ�Է�: "); scanf("%s", a[i].id_number);
		printf("�޿��Է�: "); scanf("%d", &(a[i].salary_info));
		printf("\n");
	}

	/*������ �迭 - ���*/
	for (i = 0; i < 3; i++) {
		printf("�̸�: %s \n", a[i].employee_name);
		printf("�ֹι�ȣ: %s \n", a[i].id_number);
		printf("�޿�: %d \n", a[i].salary_info);
		printf("\n");
	}

	return 0;
}