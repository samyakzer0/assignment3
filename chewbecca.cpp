#include <iostream>
using namespace std;

int main() {
    long long  n;
    cin >> n;
    long long modified = 0;
    while (n != 0) {
        int digit = n % 10;
       
        if ((9 - digit < digit) && !((n / 10 == 0) && (digit == 9))) {
            digit = 9 - digit;
        } 
        modified = modified * 10 + digit;

        n = n / 10;
    }

    long long original = 0;
    while (modified != 0) {
        int digit = modified % 10;
        original = original * 10 + digit;
        modified = modified / 10;
    }
    cout << original << endl;
    return 0;
}