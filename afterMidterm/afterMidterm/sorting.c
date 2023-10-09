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
//// �������� ���α׷�
//void selection_sort(int list[], int n)
//{
//	int i, j, least, temp;
//
//	for (i = 0; i < n - 1; i++) {
//		least = i;
//		for (j = i + 1; j < n; j++) 			// �ּڰ� Ž��
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
////�������� ���α׷�
//void insertion(int list[], int n)
//{
//	int i, j, key;
//	for (i = 0; i < n - 1; i++) {
//		key = list[i];
//
//		for (j = i - 1; j >= 0 && list[j] > key; j--)
//			list[j + 1] = list[j]; 		// ���ڵ��� ������ �̵�
//
//		list[j + 1] = key;
//		print_list(list, n);
//	}
//}
//
////�������� ���α׷�
//void bubblesort(int list[], int n)
//{
//	int i, j, temp;
//	for (i = n - 1; i > 0; i--) {
//		for (j = 0; j < i; j++) 	// �յ��� ���ڵ带 ���� �� ��ü
//			if (list[j] > list[j + 1])
//				SWAP(list[j], list[j + 1], temp);
//
//		print_list(list, n);
//	}
//}
//
////������
//// gap ��ŭ ������ ��ҵ��� ���� ����
//// ������ ������ first���� last
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
//		for (i = 0; i < gap; i++)		// �κ� ����Ʈ�� ������ gap
//			inc_insertion_sort(list, i, n - 1, gap);
//
//		print_list(list, n);
//	}
//}
//
//
//
////�պ� ���� ���α׷� �Ϻ�
//int sorted[MAX_SIZE]; // �߰������� �ʿ�
//void merge(int list[], int left, int mid, int right)
//{
//	//i�� ���ĵ� ���ʸ���Ʈ�� ���� �ε���
//	//j�� ���ĵ� �����ʸ���Ʈ�� ���� �ε���
//	//k�� ���ĵ� ����Ʈ�� ���� �ε���
//	int i, j, k, l;
//	
//	i = left; j = mid + 1; k = left;
//	// ���� ���ĵ� list�� �պ�
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//	if (i > mid) 	                                  // ���� �ִ� ���ڵ��� �ϰ� ����
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	else 	                                  // ���� �ִ� ���ڵ��� �ϰ� ����
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//
//	for (l = left; l <= right; l++) 	// �迭 sorted[]�� ����Ʈ�� �迭 list[]�� ����
//		list[l] = sorted[l];
//
//}
//
////�պ�����
//void merge_sort(int list[], int left, int right)
//{
//	int mid;
//	if (left < right)
//	{
//		mid = (left + right) / 2;              // ����Ʈ�� �յ����
//		merge_sort(list, left, mid);     // �κи���Ʈ ����
//		merge_sort(list, mid + 1, right);//�κи���Ʈ ����
//		merge(list, left, mid, right);    // �պ�
//	}
//
//}
//
////������ ����ó��
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
////������
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
//	for (i = 0; i < n; i++)      	// ���� ���� �� ��� 
//		list[i] = rand() % 100; // ���� �߻� ���� 0~99
//
//	print_list(list, n);
//
//	selection_sort(list, n);                // �������� ȣ�� 
//
//	for (i = 0; i < n; i++)      	// ���� ���� �� ��� 
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