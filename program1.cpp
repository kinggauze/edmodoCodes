/*
Create a program that will display
Enter your name:
then it will accept your name.
Display the inputted name 
*/
#include<iostream>
#include<stdio.h>
#include<Windows.h>
#include<string>
using namespace std;
	int main() {

		string name = "";
		cout<<"Enter your full name:";
		cin>>name;cout<<endl;
		cout<<name;
		system("pause");
		return 0;

	}
 
