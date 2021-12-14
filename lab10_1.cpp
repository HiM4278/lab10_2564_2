#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, interest, amout,Total = 0,money = 0,Newbalance = 0;
	int i = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> amout;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	while (loan > 0)
		{
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << (money = loan*(interest/100.0));
		cout << setw(13) << left << (Total = loan+money);
		if (amout > Total)
			{
			amout = Total;
			}
		cout << setw(13) << left << amout;
		cout << setw(13) << left << (loan = Total-amout);
		cout << "\n";
		i++;	
		}
	
	
	
	return 0;
}
