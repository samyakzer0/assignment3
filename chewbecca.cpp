#include <iostream>
using namespace std;

int main() {
    long long  n;
    cin >> n;
    
    int digits = 0;
    long long i = n;
    while (i > 0) {
        digits++;
        i = i/10;
    }
    
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
    int final = 0;
    while (modified != 0) {
        int digit = modified % 10;
        original = original * 10 + digit;
        modified = modified / 10;
        final++;

    }
    
    cout << original;
   
    while (final < digits) {
        cout << 0;
        final++;
    }
    
    cout << endl;
    
    return 0;
}