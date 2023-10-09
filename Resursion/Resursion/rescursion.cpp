#include <iostream>
using namespace std;

double recursion_fraction(int n)
{
	if (n == 1) {
		return 1.0;
	}
	else {
		double a = 1.0/n + recursion_fraction(n - 1);
		return  a;
	}
}

double binominal_coefficient_recursion(int n, int k)
{
	if (k == 0 || k == n) {
		return 1;
	}
	else {
		return binominal_coefficient_recursion(n - 1, k) + binominal_coefficient_recursion(n - 1, k - 1);
	}
}

int factorial(int n) {
	int r = 1;
	for (int i = 1; i <= n; i++) {
		r = r* i;
	}
	return r;
}


double binominal_coefficient_for(int n, int k)
{
	int a = factorial(n);
	int b = factorial(k);
	int c = factorial(n-k);
	int r = a/(b*c);
	return r;
}

int main(void)
{
	double result = 0.0;
	int n1,n2;
	
	cout << "예제 1번을 실행하기 위한 숫자를 하나 입력하세요 :";
	cin >> n1;
	result = recursion_fraction(n1);
	cout << "결과는 " << result << "입니다" <<endl;

	cout << "예제 2번을 실행하기 위한 숫자를 두개를 입력하세요(전체항목의 수를 먼저): ";
	
	
	cin >> n1 >> n2;
	result = binominal_coefficient_recursion(n1,n2);
	cout << "이항계수로 계산한 결과는 " << result << "입니다"<<endl;

	result = binominal_coefficient_for(n1, n2);
	cout << "순환을 사용하지 않았을 때의 결과도 " << result << "입니다" <<endl;

	return 0;
}