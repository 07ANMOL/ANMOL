/*1.     Take input from a user with a positive integer. Write a function to compute the sum of series where n is input by the user in the main function. Find sum of series where i-th term is sum of first i natural numbers.

Input  : n = 5  

Output : 35

Explanation : (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) = 35*/
#include<iostream>
using namespace std;
class series{
	private:
		int n,i;
		public:
		void getdata(){
    cout << "Enter the number of terms in the series: ";
    cin >> n;
	}
     void logic(){

    int first = 0, second = 0;//initially 0
        for ( i = 1; i <=n; ++i) {
        first += i;
        second +=first ;
    }
    cout<<"THE SUM OF SERIES IS :"<<second;
	}             
}; 
int  main(){
	series obj;
	obj.getdata();
	obj.logic();
	return 0;
}
