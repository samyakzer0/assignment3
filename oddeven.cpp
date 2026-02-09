#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int sumOdd = 0;
    int sumEven = 0;
    
    for (int i = 1; n != 0; i++) {
        int digit = n % 10;
        
        if (i % 2 == 1) {
            sumOdd = sumOdd + digit;
        }
        else {
            sumEven = sumEven + digit;
        }
        
        n = n / 10;
    }
    
    cout << sumOdd << endl;
    cout << sumEven << endl;
    
    return 0;
}