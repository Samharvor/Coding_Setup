#include<iostream>
using namespace std;

int main(){

    char ch;
    
    cout << "Enter Your letter: ";
    cin >> ch;

    if('a' <= ch && ch <= 'z' ){
        cout << "The letter is in Lowercase";
    }
    else{
        cout << "The letter is in Uppercase";
    }

    return 0;
}