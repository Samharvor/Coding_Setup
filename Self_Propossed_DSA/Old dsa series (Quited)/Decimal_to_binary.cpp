#include<iostream>
using namespace std;

int dec_to_binary(int x){
    int ans = 0; int power = 1;

    for(int i=x; i>0; i--){
        int n;
        n = x%2;
        x = x/2;
        ans += power*n;
        power = power*10;
    }

    return ans;
}

int main(){

    int InputNum; int BinaryCode;

    cout << "Enter Your Number: ";
    cin >> InputNum;

    BinaryCode = dec_to_binary(InputNum);

    cout << BinaryCode;

    return 0;
}