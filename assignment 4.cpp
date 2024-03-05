#include<iostream>
using namespace std;
class sumof{
	public:
		int compute (int a , int b){
		return a+b;
	}
		float compute(int a, float b){
			return a+b;
		}
		double compute(int a, double b){
			return a+b;
		}
		int compute(char a,char b)	{
			return int (a+b);
		}
		int compute(char d, int c){
			return int(d)+c;
		} 
};
int main(){
	sumof ob1;
	int output1= ob1.compute(100,90);
	cout<<"Sum of numbers: "<<output1<<endl;
	float output2= ob1.compute(2,101.98);
	cout<<"Sum of numbers: "<<output2<<endl;
	double output3= ob1.compute(55,120);
	cout<<"Sum of numbers: "<<output3<<endl;
	int output4= ob1.compute(5,9);
	cout<<"Sum of numbers: "<<output4<<endl;
	int output5= ob1.compute(1,58);
	cout<<"sum of numbers: "<<output5<<endl;
	return 0;
}
