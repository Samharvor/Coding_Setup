#include<iostream>
using namespace std;

int main(){
    
    int sum = 0; int n;

    cout << "Enter Your Number: ";
    cin >> n;

    for(int i=0;i<=n;i++){
        sum += i;
    }

    cout << "The Sum of numbers from 0 to " << n << " is: " << sum;

    return 0;
}