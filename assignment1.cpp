// MY ATM
#include<iostream>
using namespace std;
class atm{		
	public:
		int u[6];
		int p[4];
	int balance=0,withdraw,deposit,money_transfer,pin,u_name;
	public:
		void usernamepin(){
			cout<<"PLEASE ENTER YOUR USERNAME:)"<<endl;
			cin>>u_name;
			cout<<"PLEASE ENTER YOUR PIN:)"<<endl;  
			cin>>pin;
		}
		int verify(){
			u[0]=123456;
		    p[0]=4277;          
			if(u_name==u[0] && pin==p[0]){
				cout<<"LOGIN SUCCESSFUL:)"<<endl<<endl;
				return true;
			}
			else if(u_name!=u[0] || pin!=p[0]){
				cout<<"LOGIN UNSUCCESSFUL PLEASE TRY AGAIN:("<<endl<<endl;
				usernamepin();
			}
			
		}
		
			
		void showbalance(){
			cout<<"YOUR BALANCE IS:"<<balance<<endl;
		}
		void showwithdrawl(){
			cout<<"ENTER AMOUNT TO BE WITHDRAWN:"<<endl;
			cin>>withdraw;
			balance-=withdraw;
			cout<<"MONEY WITHDRAWN IS:"<<withdraw<<endl;
			cout<<"YOUR CURRENT BALANCE IS:"<<balance<<endl;
		}
		void showmoneytransfer(){
			cout<<"ENTER AMOUNT TO BE TRANSFERRED:"<<endl;
			cin>>money_transfer;
			balance-=money_transfer;
			cout<<"MONEY TRANSFERRED IS:"<<money_transfer<<endl;
			cout<<"YOUR CURRENT BALANCE IS:"<<balance<<endl;
		}
		void showdeposit(){
			cout<<"ENTER AMOUNT TO BE DEPOSITED:"<<endl;
			cin>>deposit;
			balance+=deposit;
			cout<<"MONEY DEPOSITED IS:"<<deposit<<endl;
			cout<<"YOUR CURRENT BALANCE IS:"<<balance<<endl;
		}
		void menu(){
			int num;
			bool f;
			f = verify();
			int q = 0;
			while(q == 0){
				if (f==true){
					cout<<"ENTER 1 TO DEPOSIT MONEY:   \nENTER 2 TO WITHDRAW CASH:		\nENTER 3 TO TRANSFER MONEY:		\nENTER 4 TO CHECK BALANCE: "<<endl;
					cout<<"Enter 5 to Quit:" <<endl;
					cout<<"ENTER YOUR CHOICE:"<<endl;
					cin>>num;
					switch(num){
						case 1:
							showdeposit();
							break;
						case 2:
							showwithdrawl();
							break;
						case 3:
						    showmoneytransfer();
							break;
						case 4:
					        showbalance();
							break;
						case 5:
							q = -1;
							break;
							
    				}
    			}
    		}
		}
		void start(){
			cout << "YOUR BANK WELCOMES YOU :)"<<endl<<endl;
			usernamepin();
			menu();
		}
	
};
int main()
{
	atm obj1;
	obj1.start();
	return 0;
}
