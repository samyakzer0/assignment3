#include <iostream>
using namespace std;


//  n = number of cars

int main() {
    int n;
    cin>>n;

    for (int i = 1 ; i <= n ; i++){
        int carNumber;
        cin >> carNumber;
        
        int sumEven = 0;
        int sumOdd = 0;

        while (carNumber!=0){
            int digit = carNumber%10;

            if(digit%2==0){
                sumEven = sumEven + digit;
            }
            else{
                sumOdd = sumOdd + digit;
            }
            carNumber = carNumber /  10;
        }
        
        if (sumEven%4==0 || sumOdd%3==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}