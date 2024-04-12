// to calculate sum of two private members of different classes
#include<iostream>
using namespace std;
class b;
class a{
    private:
    int num1;
    public:
    a(int n1){
        num1 = n1;
    }
    int friend operator +(a& obj, b& obbj1);
    
};
class b{
    private:
    int num2;
    public:
    b(int n2){
        num2 = n2;
    }
    int friend operator +(a& obj,b& obj1);
};
int operator +(a& obj, b& obj1){
    return obj.num1 + obj1.num2;
}
int main(){
    a ob1(30);
    b ob2(70);
    int result = ob1 + ob2;
    cout<<"The sum of numbers is:"<<result<<endl;
    return 0;
}
