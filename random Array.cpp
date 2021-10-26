#include <iostream>
#include<time.h>
#include<random>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of array:";
	cin >> n;
	int randArray[1000];
	for (int i = 0; i < n; i++) {
		srand(time(0));
		randArray[i] = rand() % 100;
	}
	cout << "Elements of the array:" << endl;
	cout << "["; {
		for (int i = 0; i < n ; i++)
			cout << randArray[i] << ",";
		cout << "\b\b";
			}
	cout <<  "]";
		
		 
	system("pause");
	return 0;
}