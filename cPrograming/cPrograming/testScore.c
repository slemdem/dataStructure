#include <stdio.h>
#include <string.h>

const char* name (int i) {
	switch (i){
		case 0: return "ö��";
		case 1: return "ö��";
		case 2: return "����";
		case 3: return "����";
		case 4: return "����";
		break;
	}
}

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

int main(void) {


	int score[5][5];
	int total, i, j;

	/*���� �Է¹ޱ�*/
	for (i = 0; i < 4; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			printf("%s�� %s ����: ",name(i),subj(j)); scanf("%d", &(score[i][j]));
			total += score[i][j];
		}
		score[i][4] = total;
	}

	/*���� ���� ���ϱ�*/
	for (j = 0; j < 5; j++) {
		total = 0;
		for (i = 0; i < 4; i++) {
			total += score[i][j];
		}
		score[4][j] = total;
	}

	/*ǥ Ȯ��*/
	printf("     ����  ����  ����  ����  ���� \n");
	for (i = 0; i < 5; i++) {
		printf("%s  ", name(i));
		for (j = 0; j < 5; j++) {	
			printf("%d    ", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}