#include<iostream>
#include<string>
using namespace std;
#define MAX 20

main() {
	string name[MAX],subject[MAX][MAX],nameSearch,subSearch;
	int m,i,j,numSt,num[MAX];
	
	cout << "Enter Number of Student : ";
	cin >> numSt;
	for(i=0;i<numSt;i++) {
		cout << "Enter Name of Student : ";
		cin >> name[i];
			
		cout << "Enter Number of Subject ( " << name[i] << " ): ";
		cin >> num[i];
		
		for(j=0;j<num[i];j++) {
			cout << "Enter Subject " << j+1 << " : ";
			cin >> subject[i][j];
		}
	}
	
	cout << endl << "----------------------------------------- End of Input -----------------------------------------" << endl << endl;
	cout << "***********************************" << endl;
	cout << "*      1. Student Detail          *" << endl;
	cout << "*      2. Subject Detail          *" << endl;
	cout << "*      3. Exit                    *" << endl;
	cout << "***********************************" << endl;
	
	do {
		cout << "Enter Menu : ";
		cin >> m;
		
		if(m==1) {
			cout << "Enter name to search : ";
			cin >> nameSearch;
			
			for(i=0;i<numSt;i++) {
				if(name[i]==nameSearch) {
					cout << "Student name : " << name[i] << endl;
					for(j=0;j<num[i];j++) {
						cout << "Subject " << j+1 << " : " << subject[i][j] << endl;	
					}
				}
			}
			cout << endl;
		} else if(m==2) {
			cout << "Enter subject to search : ";
			cin >> subSearch;
			
			for(i=0;i<numSt;i++) {
				for(j=0;j<num[i];j++) {
					if(subject[i][j]==subSearch) {
						cout << "Student name : " << name[i] << endl;
					}
				}
			}
			cout << endl;		
		} else {
			cout << "!!!! Worge !!!!" << endl;
		}
	} while(m!=3);
}
