//#include <stdio.h>
//
//#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
//#define MAX_SIZE 10
//
//void print_list(int list[], int n)
//{
//	for (int i = 0; i < n; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//
//// 선택정렬 프로그램
//void selection_sort(int list[], int n)
//{
//	int i, j, least, temp;
//
//	for (i = 0; i < n - 1; i++) {
//		least = i;
//		for (j = i + 1; j < n; j++) 			// 최솟값 탐색
//			if (list[j] < list[least])
//				least = j;
//
//		SWAP(list[i], list[least], temp);
//
//		print_list(list, n);
//
//	}
//}
//
////삽입정렬 프로그램
//void insertion(int list[], int n)
//{
//	int i, j, key;
//	for (i = 0; i < n - 1; i++) {
//		key = list[i];
//
//		for (j = i - 1; j >= 0 && list[j] > key; j--)
//			list[j + 1] = list[j]; 		// 레코드의 오른쪽 이동
//
//		list[j + 1] = key;
//		print_list(list, n);
//	}
//}
//
////버블정렬 프로그램
//void bubblesort(int list[], int n)
//{
//	int i, j, temp;
//	for (i = n - 1; i > 0; i--) {
//		for (j = 0; j < i; j++) 	// 앞뒤의 레코드를 비교한 후 교체
//			if (list[j] > list[j + 1])
//				SWAP(list[j], list[j + 1], temp);
//
//		print_list(list, n);
//	}
//}
//
////쉘정렬
//// gap 만큼 떨어진 요소들을 삽입 정렬
//// 정렬의 범위는 first에서 last
//void inc_insertion_sort(int list[], int first, int last, int gap)
//{
//	int i, j, key;
//	for (i = first + gap; i <= last; i = i + gap) {
//		key = list[i];
//		for (j = i - gap; j >= first && key < list[j]; j = j - gap)
//			list[j + gap] = list[j];
//		list[j + gap] = key;
//	}
//}
//
////
//void shell_sort(int list[], int n)   // n = size
//{
//	int i, gap;
//	for (gap = n / 2; gap > 0; gap = gap / 2) {
//		if ((gap % 2) == 0)
//			gap++;
//
//		for (i = 0; i < gap; i++)		// 부분 리스트의 개수는 gap
//			inc_insertion_sort(list, i, n - 1, gap);
//
//		print_list(list, n);
//	}
//}
//
//
//
////합병 정렬 프로그램 일부
//int sorted[MAX_SIZE]; // 추가공간이 필요
//void merge(int list[], int left, int mid, int right)
//{
//	//i는 정렬된 왼쪽리스트에 대한 인덱스
//	//j는 정렬된 오른쪽리스트에 대한 인덱스
//	//k는 정렬될 리스트에 대한 인덱스
//	int i, j, k, l;
//	
//	i = left; j = mid + 1; k = left;
//	// 분할 정렬된 list의 합병
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//	if (i > mid) 	                                  // 남아 있는 레코드의 일괄 복사
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	else 	                                  // 남아 있는 레코드의 일괄 복사
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//
//	for (l = left; l <= right; l++) 	// 배열 sorted[]의 리스트를 배열 list[]로 복사
//		list[l] = sorted[l];
//
//}
//
////합병정렬
//void merge_sort(int list[], int left, int right)
//{
//	int mid;
//	if (left < right)
//	{
//		mid = (left + right) / 2;              // 리스트의 균등분할
//		merge_sort(list, left, mid);     // 부분리스트 정렬
//		merge_sort(list, mid + 1, right);//부분리스트 정렬
//		merge(list, left, mid, right);    // 합병
//	}
//
//}
//
////퀵정렬 분할처리
//int partition(int list[], int left, int right)
//{
//	int pivot, temp;
//	int low, high;
//
//	low = left;
//	high = right + 1;
//	pivot = list[left];
//	do {
//		do
//			low++;
//		while (low <= right && list[low] < pivot);
//
//		do
//			high--;
//		while (high >= left && list[high] > pivot);
//
//		if (low < high)
//			SWAP(list[low], list[high], temp);
//	} while (low < high);
//
//	SWAP(list[left], list[high], temp);
//	return high;
//}
//
////퀵정렬
//void quick_sort(int list[], int left, int right)
//{
//	if (left < right) {
//		int q = partition(list, left, right);
//		quick_sort(list, left, q - 1);
//		quick_sort(list, q + 1, right);
//	}
//}
//
//
//int main(void) 
//{
//	int i;
//	int n = MAX_SIZE;
//	int list[MAX_SIZE];
//	srand(32323);
//
//	for (i = 0; i < n; i++)      	// 난수 생성 및 출력 
//		list[i] = rand() % 100; // 난수 발생 범위 0~99
//
//	print_list(list, n);
//
//	selection_sort(list, n);                // 선택정렬 호출 
//
//	for (i = 0; i < n; i++)      	// 난수 생성 및 출력 
//		list[i] = rand() % 100;
//	
//	print_list(list, n);
//
//	merge_sort(list, list[0], list[n / 2], list[n - 1]);
//	
//	print_list(list, n);
//
//	return 0;
//
//}