//ASSIGNMENT 5
//user1>user2 , return 1,user1<user 2,return-1, else return 0 if user1==user2 
//5% and 10% increment should be there 
#include <iostream>
using namespace std;

class User {
private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;

public:
    User(string nm, int bir, int bd, int bm, double slry) {// parameterised constuctor
        name = nm;
        birth_year = bir;
        birth_day = bd;
        birth_month = bm;
        salary = slry;
    }

    double sal() {
        cout << "Salary of user is:" << salary << endl;
        return salary;
    }
      public:
    int comparison(const User& other) {
        if (birth_year > other.birth_year) {
            return 1;
        } else if (birth_year == other.birth_year) {
            return 0;
        } else {
            return -1;
        }
    }
    public:
    float increment(float increase){
    	int incr;
        incr= salary*(increase/100);
        salary+=incr;
    	return salary;
	}
	/*float average(float slry){
		float avg;
		avg=(48000+45000)/2;
		return avg;
		
	}*/
};

int main() {
    User user1obj("ANMOL", 2004, 8, 10, 48000),user2obj("AYUSH", 2003, 4, 9, 45000);

    int result = user1obj.comparison(user2obj);
    cout << "result is: " << result << endl;
    cout<<"SALARY OF USER 1 AFTER INCREMENT:"<<user1obj.increment(5)<<endl;
    cout<<"SALARY OF USER 2 AFTER INCREMENT:"<<user2obj.increment(10)<<endl;
    return 0;
}

