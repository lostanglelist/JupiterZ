#include<iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;

void welcomeText()
{
    cout <<"-----Welcome to guessing number game-----"<< endl<< endl;
    cout <<"---Rules---" << endl;
    cout <<" 1. Enter your name "<<endl;
    cout <<" 2. Enter your number 1-100.If you do not meet the conditions The program will provide a new one."<< endl;
    cout <<"****Warning**** if you misplace it again, the program will count as you start playing."<< endl;
    cout <<" 3. You have 5 chance of guessing. "<< endl;
    cout <<" 4. If you guess 5 times incorrectly, the program will answer the correct answer. "<< endl << endl;
    cout << " --- GOOD LUCK !!! ---" << endl << endl;
}

int main() {
	int secret,number,guessed;
	string name;
	char x;
	
	welcomeText();
	
	cout << "Please Enter your name : " << name;
	cin  >> name;
	cout <<  "Hello !! : " << name << endl << endl;

	do {
		
	srand(time(NULL));
	secret = rand() % 100 + 1; //1-100		
	guessed = 0;
	
	if(secret > 50)
	{
		cout << endl << "+++ Hint!!! Secret number > 50 +++" << endl;
	}
	
	else if (secret < 50)
	{
		cout << endl << "+++ Hint!!! Secret number < 50 +++" << endl;
	}
	
	
	do {
		
		guessed++;
		
		cout << endl << "Play round :" << guessed << endl;
		cout << "Enter Number 1-100 :";
		cin  >> number;
		
		if(number <= 0)
		{
			cout << "+++ ERROR 404 !!!+++ You are entering too few numbers, please enter a number between 1 and 100."<< endl;
			cout << "Enter Number 1-100 :";
			cin  >> number ;
		}
		else if(number > 100)
		{
			cout << "+++ ERROR 404 !!!+++ You are entering too many numbers, please enter a number between 1 and 100."<< endl;
			cout << "Enter Number 1-100 :";
			cin  >> number ;
		}
		
		
		if(secret == number)
		{
			cout << endl <<"Congratulations! The secret number is correct : " << secret << endl;
		}
		
		else
		{
			if(number < secret)
			{
				cout << "Wrong!!! Too few numbers" << endl;
			}
			else
			{
				cout << "Wrong!!! Too many numbers" << endl;
			}
			if(guessed == 5)
			{
				cout << endl <<"Sorry Your randomly went wrong 5 time,Answer is :"<< secret << endl;
			}
		}
		
	}
	while(number != secret && guessed < 5);
	
	do {
        cout << endl <<"Enter y to play again or enter n to exit ";
        cin>>x;
    }
    
    while(x != 'y' && x != 'n');
    	}while(x == 'y');
	cout << endl <<"BYE BYE !!"<< endl;
	
    return 0;
}

