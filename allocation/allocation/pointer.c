#include <stdio.h>

int main(void) {

	int i = 10; int* p; p = &i; *p--;
	printf("%d",i); printf("\n");

	int a[3] = { 1,1,1 }; p = a + 1; *++p = 5;
	for (int j = 0; j < 3; j++) {
		printf("%d", a[j]);
	}printf("\n");

	p = a + 1; ++*p++;
	for (int j = 0; j < 3; j++) {
		printf("%d", a[j]);
	}
	printf("%d", *p);
	printf("\n");
	
	p = a + 1; ++*p;
	for (int j = 0; j < 3; j++) {
		printf("%d", a[j]);
	}printf("\n");

	p = a + 1; ++*(p+1);
	for (int j = 0; j < 3; j++) {
		printf("%d", a[j]);
	}printf("\n");

	int a2[] = {1,2,3};
	int* p1 = a2,*p2 =a2+2;
	for (int j = 0; j < 3; j++) {
		printf("%d", a2[j]);
	}
	printf("%d", *p1);
	printf("%d", *p2);
	printf("\n");

	*p1 = *p2;
	for (int j = 0; j < 3; j++) {
		printf("%d", a2[j]);
	}
	printf("%d", p1);
	printf("%d", p2);
	printf("\n");
	
	p2 = p1;
	for (int j = 0; j < 3; j++) {
		printf("%d", a2[j]);
	}
	printf("%d", p1);
	printf("%d", p2);


	return 0;
}