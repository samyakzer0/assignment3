#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 5 << endl;
        return 0;
    }

    int modified = 0;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 0) {
            digit = 5;
        }
        modified = modified * 10 + digit;
        n = n / 10;
    }

    int original = 0;
    while (modified != 0) {
        int digit = modified % 10;
        original = original * 10 + digit;
        modified = modified / 10;
    }

    cout << original << endl;
    return 0;
} 