#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum1 = 0;  
	int sum2 = 0;   
	while(n > 0) {
		int digit = n % 10;   

		if(digit % 2 == 0) {
			sum1 += digit;
		}
		else {
			sum2 += digit;
		}

		n = n / 10;   
	}

	cout << sum1 << " " << sum2;

	return 0;
}