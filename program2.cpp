/*
Create a program that will accept two numbers. 
Calculate the sum. Display the sum
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	int fnum = 0;
	int snum = 0;
	int sum = 0;
	cout<<"Enter 2 numbers: \t";cin>>fnum>>snum;cout<<endl;
	sum = fnum + snum;
	cout<<"The sum is: \t"<<sum;cout<<endl;
	system("pause");
	return 0;
	
}
