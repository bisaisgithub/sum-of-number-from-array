#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	int n;
	do {
		cout << "Enter number elements 1-100: " ;
		cin >> n;
	} while (!(n > 0 && n <= 100));

	cout << "False";
}