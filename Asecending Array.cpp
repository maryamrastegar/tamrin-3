#include<iostream>
using namespace std;
int main() {
	int n,flag;
	const int size = 100;
	int A[size];
		cout << "enter the size of the array:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{ 
		cout << "insert the element (0-100)" << i << ":";
		cin >> A[i];
	}
	for (int i = 0; i <n; i++) {
		if (A[i] < A[i + 1]) {
			flag=1;
			break;
		}
		else if (A[i] > A[i + 1]) {
			flag = 0;
		}
	}
	if (flag == 1) { cout << "yes"<<"\n"; }
	else if (flag == 0) { cout << "No" << "\n"; }
	system("pause");
	return 0;
}