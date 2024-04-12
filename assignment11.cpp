//assignment 10
// 3x3 matrix and obj3=obj1+obj2
#include<iostream>
using namespace std;
class matadd{
private :
int a[3][3];
public:
void get(){
    cout<<"enter the elements for matrix :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
}
}
void displaymat(){
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<""<<endl;
}
}
matadd  operator +(matadd& obj){
    matadd obj3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             obj3.a[i][j]  = a[i][j] + obj.a[i][j];
        }
    }
    return obj3;
}
};

int main(){
    matadd obj1;
    matadd obj2;
    obj1.get();
    obj2.get();
    matadd obj3 = obj1 + obj2;
    obj1.displaymat();
    cout<<"The sum of matrices is :"<<endl;
    obj3.displaymat();
    return 0;
}