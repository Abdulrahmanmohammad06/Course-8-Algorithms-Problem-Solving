#include<iostream>
#include"MyDateLibrary.h"
using namespace std;
using namespace MyDateLib;
int main() 
{
	stDate Date1, Date2;
	Date1 =ReadFullDate();
	Date2 =ReadFullDate();
	cout << "\nDiffrence is: "
		<< GetDifferenceInDays(Date1, Date2) << " Day(s).";
	cout << "\nDiffrence (Including End Day) is: "
		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).";


	system("pause>0");

	return 0;
}



