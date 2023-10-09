#include <stdio.h>
#include <string.h>

const char* name (int i) {
	switch (i){
		case 0: return "철희";
		case 1: return "철수";
		case 2: return "영희";
		case 3: return "영수";
		case 4: return "총점";
		break;
	}
}

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

int main(void) {


	int score[5][5];
	int total, i, j;

	/*점수 입력받기*/
	for (i = 0; i < 4; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			printf("%s의 %s 점수: ",name(i),subj(j)); scanf("%d", &(score[i][j]));
			total += score[i][j];
		}
		score[i][4] = total;
	}

	/*과목별 총점 구하기*/
	for (j = 0; j < 5; j++) {
		total = 0;
		for (i = 0; i < 4; i++) {
			total += score[i][j];
		}
		score[4][j] = total;
	}

	/*표 확인*/
	printf("     국어  영어  수학  국사  총점 \n");
	for (i = 0; i < 5; i++) {
		printf("%s  ", name(i));
		for (j = 0; j < 5; j++) {	
			printf("%d    ", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}