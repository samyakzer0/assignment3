#include <iostream>
using namespace std;

int main() {
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;

    int count = 0;
    for (int i = 1; count < N1; i++) {
        int term = 3 * i + 2;
        if (term % N2 != 0) {
            cout << term << endl;
            count++;
        }
    }
    return 0;
}