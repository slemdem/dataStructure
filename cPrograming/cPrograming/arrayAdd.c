#include <stdio.h>

int main(void) {
	/*¹è¿­°£ µ¡¼À*/
	int A[3][3] = { 1,3,5,6,7,8,9,2,1 };
	int B[3][3] = { 1,3,8,6,7,6,9,2,2 };
	int C[3][3];
	int i, j;

	for (i = 0; i < 3; i++) {
		for ( j = 0; j < 3; j++){
			C[i][j] = A[i][j]+ B[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}