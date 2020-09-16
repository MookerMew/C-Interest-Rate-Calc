//Interest rate calculator given savings balance and rate

#include<iostream>
using namespace std;

int main()
{
	double enteredRate, principle, silverExceed, goldExceed, platinumExceed, year1, year2, year3, interest, rate;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Enter your savings account balance: ";
	cin >> principle;
	cout << "Enter your interest rate: ";
	cin >> enteredRate;
	
	rate = (enteredRate / 100);
	
	//*************YEAR 1
	
	interest = (rate * principle);
	year1 = (interest + principle);
	silverExceed = (year1 - 1000);
	goldExceed = (year1 - 5000);
	platinumExceed = (year1 - 10000);
	
	//silver
	if ((year1 > 1000) && (year1 < 5000))
	{
		cout << "Balance at year 1: $";
		cout << year1 << "." << " You are a member of the Silver Bank Club.";
		cout << " You have exceeded the minimum for Silver Club by: $" << silverExceed << "." << endl;
	}
	//gold
	if ((year1 > 5000) && (year1 < 10000))
	{
		cout << "Balance at year 1: $";
		cout << year1 << "."<< " You are a member of the Gold Bank Club.";
		cout << " You have exceeded the minimum for Gold Club by: $" << goldExceed << "." << endl;
	}
	//platinum
	if (year1 > 10000)
	{
		cout << "Balance at year 1: $";
		cout << year1 << "." << " You are a member of the Platinum Bank Club.";
		cout << " You have exceeded the minimum for Platinum Club by: $" << platinumExceed << "." << endl;
	}
	//not a member yet
	if (year1 < 1000)
	{
		cout << "Balance at year 1: $" << year1 << "." << endl;
	}
	
	//**************YEAR 2
	
	interest = (rate * year1);
	year2 = (interest + year1);
	silverExceed = (year2 - 1000);
	goldExceed = (year2 - 5000);
	platinumExceed = (year2 - 10000);
	
		//silver
	if ((year2 > 1000) && (year2 < 5000))
	{
		cout << "Balance at year 2: $";
		cout << year2 << "." << " You are a member of the Silver Bank Club.";
		cout << " You have exceeded the minimum for Silver Club by: $" << silverExceed << "." << endl;
	}
	//gold
	if ((year2 > 5000) && (year2 < 10000))
	{
		cout << "Balance at year 2: $";
		cout << year2 << "."<< " You are a member of the Gold Bank Club.";
		cout << " You have exceeded the minimum for Gold Club by: $" << goldExceed << "." << endl;
	}
	//platinum
	if (year2 > 10000)
	{
		cout << "Balance at year 2: $";
		cout << year2 << "." << " You are a member of the Platinum Bank Club.";
		cout << " You have exceeded the minimum for Platinum Club by: $" << platinumExceed << "." << endl;
	}
	//not a member yet
	if (year2 < 1000)
	{
		cout << "Balance at year 2: $" << year2 << "." << endl;
	}
	
	
	//**************YEAR 3
	
	interest = (rate * year2);
	year3 = (interest + year2);
	silverExceed = (year3 - 1000);
	goldExceed = (year3 - 5000);
	platinumExceed = (year3 - 10000);
	
		//silver
	if ((year3 > 1000) && (year3 < 5000))
	{
		cout << "Balance at year 3: $";
		cout << year3 << "." << " You are a member of the Silver Bank Club.";
		cout << " You have exceeded the minimum for Silver Club by: $" << silverExceed << "." << endl;
	}
	//gold
	if ((year3 > 5000) && (year3 < 10000))
	{
		cout << "Balance at year 3: $";
		cout << year3 << "."<< " You are a member of the Gold Bank Club.";
		cout << " You have exceeded the minimum for Gold Club by: $" << goldExceed << "." << endl;
	}
	//platinum
	if (year3 > 10000)
	{
		cout << "Balance at year 3: $";
		cout << year3 << "." << " You are a member of the Platinum Bank Club.";
		cout << " You have exceeded the minimum for Platinum Club by: $" << platinumExceed << "." << endl;
	}
	//not a member yet
	if (year3 < 1000)
	{
		cout << "Balance at year 3: $" << year3 << "." << endl;
	}
	
	return 0;
}

