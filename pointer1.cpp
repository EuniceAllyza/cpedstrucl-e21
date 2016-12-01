#include<iostream>
using namespace std;
int main(){
	int num, *p1;
	p1=&num;
	cout << "Enter a number: ";
	cin >> num;
	cout << p1;
}
