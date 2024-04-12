// inches to feet conversion
#include<iostream>
using namespace std;
class inc{
    private:
float inches;
public:
inc(float i){
    inches=i;
}
float getInches(){
    return inches;
}
void show(){
    cout<<"Measurement ="<< inches<<" Inches"<<endl;
}

};
class ft{
    private:
    float feet;
    public:
    ft(float f){
        feet=f;
    }
    ft(inc ob1){
        float inches=ob1.getInches();
        feet= inches/12;
    }
    void show(){
        cout<<"Measurement ="<<feet<<" Feets"<<endl;
    }
};
int main(){
    inc ob1(125);
    ft ob2=ob1;
    ob1.show();
    ob2.show();
    return 0;
}