#include<iostream>
using namespace std;

class Pattern{
    public:
        void Pattern8(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<i; j++){
                    cout << " ";
                }
                for(int k=0; k<(2*n)-(2*i)-1; k++){
                    cout << "*";
                }
                for(int j=0; j<i; j++){
                    cout << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    Pattern p;
    p.Pattern8(6);

    return 0;
}