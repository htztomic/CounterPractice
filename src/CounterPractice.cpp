//============================================================================
// Name        : CounterPractice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Counter{
private:
	int maxValue,dollars;
public:
	Counter(){
		maxValue =9999;
		dollars =0;
	}
	Counter(int max){
		maxValue=max;
		dollars =0;
	}
	void addDollar(int c){
		dollars += c;
	}
	int checkOverflow(){
		if(maxValue >= dollars){
			return 0;
		}
		else{
			return 1;
		}
	}



};
int main() {
	int a;
	int max;
	int amount;
	Counter ab;
	char decision;
	cout<<"Enter 1 for default maxValue 9999 or 0 for own maxValue: ";
	cin>>a;
	if(a == 0){
		cout<<"Input maxValue: ";
		cin>>max;
		Counter cd(max);
		ab = cd ;
	}
	else if(a ==1){
		Counter cd;
		ab = cd;
	}
	do{
	cout<<"Enter a key, either a,s,d,f, followed by 1-9 or o for overflow or q for quit"<<endl;
	cin >> decision;
	if(decision != 'o' && decision !='q'){
	cin>> amount;
	}
	if(amount <= 9){
		switch(decision){
		case 'a':
			cout<<"cents"<<endl;
			break;
		case 's':
			cout<<"dimes"<<endl;
			break;
		case 'd':
			ab.addDollar(amount);
			break;
		case 'o':
			int check;
			check = ab.checkOverflow();
			if(check == 0){
				cout<<"no overflow"<<endl;
			}
			else if(check == 1){
				cout<<"You have gone over"<<endl;
			}
			break;
		case'q':

		default:
			cout<<"entered wrong value";

		}
	}



	}while(decision != 'q');


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
