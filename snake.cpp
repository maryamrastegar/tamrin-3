#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;

	cout << "enter a number";
	cin >> n;


	{

	for (int i = 0; i < n/2; i++)

		cout << "*#";

	if (n%2 !=0)
	{
		cout << "*";
	}
}
	system("pause");
	return 0;
}