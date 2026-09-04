#include<iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter the number of rows and columns you want to put in square: ";
    cin >> x;

    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cout << "* ";
        }
        cout << endl;
    }
}