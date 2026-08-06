#include<iostream>
using namespace std;

int main(){
    int a;
    a = 4394579;

    bool b = true;

    for(int i=2;i<a;i++){
        if(a%i == 0){
            b = false;
            break;
        }
    }

    if(b == true){
        cout << "It's a prime";
    }

    else{
        cout << "It's not a prime";
    }

    return 0;

}