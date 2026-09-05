#include<iostream>
using namespace std;

class Pattern{
    public:
    void pattern5(int n){
        for(int i=0; i<=n; i++){
            for(int j=n; j>i; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    Pattern p;
    p.pattern5(5);

    return 0;
}