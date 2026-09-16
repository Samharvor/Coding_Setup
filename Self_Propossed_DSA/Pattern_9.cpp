#include<iostream>
using namespace std;

class Pattern{ 
    public:
        void Pattern9(int n){
            
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i-1; j++) cout << " ";
                for(int j=0; j<2*i+1; j++) cout << "*";
                cout << endl;
            }
            
            for(int i=n-2; i>=0; i--){
                for(int j=0; j<n-i-1; j++) cout << " ";
                for(int j=0; j<2*i+1; j++) cout << "*";
                cout << endl;
            }
        }
};

int main(){
    Pattern p;
    p.Pattern9(3);
    return 0;
}