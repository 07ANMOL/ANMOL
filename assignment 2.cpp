//guess a number game using rand and srand functions 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class guessgame{
	private:
	    int guess;
	    int startnum;
	    public:
	    	int turns=0;
	    	void show(){
	    		srand(time(0));
	    		startnum=rand()%10;
	    		cout<<"o.o WELCOME TO THE GAME o.o"<<endl;
	    		do{
	    		cout<<"ENTER YOUR GUESS:"<<endl;
	    		cin>>guess;
	    		turns++;
	    		if(guess<startnum){
	    			cout<<"GUESSED NUMBER IS SMALLER THAN ACTUAL NUMBER:"<<endl;
				}
				else if(guess>startnum){
					cout<<"GUESSED NUMBER IS GREATER THAN ACTUAL NUMBER:"<<endl;
				}
				else if(guess==startnum){
					cout<<"YOU WON IN THESE TURNS:)"<<turns<<endl;
				}
				else{
					cout<<"YOU NEED TO TRY AGAIN:"<<endl;
				}
				}
				while(guess!=startnum);
				
			}
};
int main(){
	guessgame ob1;
	ob1.show();
	return 0;
}
