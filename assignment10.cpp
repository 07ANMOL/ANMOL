#include <iostream>
using namespace std;
class library {
private:
    double b_number[5];
    string b_name[5];
public:
	void a(){
		cout<<"CAMBRIDGE *_* LIBRARY"<<endl;
	}
	public:
	void get(){
		b_number[0]=1111111111111;
		b_name[0]="LET US C";
		b_number[1]=2222222222222;
		b_name[1]="BASICS OF MATHEMATICS";
		b_number[2]=3333333333333;
		b_name[2]="ATOMIC HABBITS";
		b_number[3]=4444444444444;
		b_name[3]="GHOSTS OF THE SILENT HILLS";
		b_number[4]=5555555555555;
		b_name[4]="ROMEO JULIET";
		}
		void verify(){
			double num;
			cout<<"ENTER ISBN:"<<endl;
			cin>>num;
			if(num==b_number[0]){
				cout<<"DETAILS OF BOOK:"<<b_name[0];
			} 
			else if(num==b_number[1]){
				cout<<"DETAILS OF BOOK:"<<b_name[1];
		}
		else if(num==b_number[2]){
				cout<<"DETAILS OF BOOK:"<<b_name[2];
			}
			else if(num==b_number[3]){
			cout<<"DETAILS OF BOOK:"<<b_name[3];
			}
			else if(num==b_number[4]){
				cout<<"DETAILS OF BOOK:"<<b_name[4];
			}
			else {
				cout<<"BOOK NOT FOUND:"<<endl;
			}
		}
				
};
int main(){
	library obj;
	obj.a();
	obj.get();
	obj.verify();
	return 0;
}
    
