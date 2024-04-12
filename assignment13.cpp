// restaurant billing program using inheritence
#include<iostream>
using namespace std;
class Beverages{
private:
int totalcoffee;
public:
Beverages(){
    totalcoffee=20;
}
int returnbeverages(){
    return totalcoffee;
}
};
class Desserts:public Beverages{
private:
int totalcakes;
public:
Desserts(){
    totalcakes=10;
}
int returndesserts(){
    return totalcakes;
}
};
class PrintBill : public Desserts{
    private:
    int priceofcoffee;
    int priceofcake;
    public:
    PrintBill(){
        priceofcoffee=15;
        priceofcake=500;
    }
    void bill(){
        cout<<"Your bill is ₹ "<<returnbeverages()*priceofcoffee + returndesserts()*priceofcake;
    }
};
int main(){
    PrintBill ob1;
    ob1.bill();
    return 0;
}