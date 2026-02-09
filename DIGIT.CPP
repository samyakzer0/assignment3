#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int target;
    cin >> target;
    int occurence = 0;
    while (n!=0){
        int digit = n%10;
        if (digit == target){
            occurence++;
        }
        n = n / 10;
    }
     cout << occurence << endl;

    return 0;
}