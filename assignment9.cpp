//using friend function 
#include<iostream>
using namespace std;
class add{
	private:
		float number;
		public:
			add(){}
			add(float n){number = n;}
			void display(){
				cout<<"YOUR NUMBER IS  :"<<number<<endl;
				}
				float friend operator + (add obj1, add obj2){  //OVERLOADING USING A FRIEND FUNCTION
					return obj1.number + obj2.number; 
			}
};
int main(){
			add obj1(110.6f);
			add obj2(90.7f);
		    add obj3(330.8f);
			float addition= obj1 + obj2 + obj3;
			cout<<"sum of numbers is:"<<addition<<endl;
			return 0;
		  }
