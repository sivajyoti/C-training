#include <iostream>

using namespace std;

int main()
{
	string user_name = " Jyothi ";
	int user_age = 23;
	string name_guess;

	cout << " guess my name ";
	cin >> name_guess;

	int age_guess;
	cout << " guess my age man! ";
	cin >> age_guess;

	if ((name_guess == user_name) && (age_guess == user_age))
	{
		cout << " yes! you are correct " << endl;
	}
	else if ((name_guess == user_name) || (age_guess == user_age))
	{
		cout << " Hurry! correct match " << endl;
	}

	else
		cout << " try next time with exact name and age " << endl;

}
