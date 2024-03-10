#include <iostream>
using namespace std;

class sample {
public:
    int (sample::*Compute)(int);
    sample() {
        Compute = &sample::findFactorial; 
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char* argv[]) {
    sample obj;
    int result = (obj.*obj.Compute)(5);
    cout << "Factorial of 5: " << result << endl;

    return 0;
}
