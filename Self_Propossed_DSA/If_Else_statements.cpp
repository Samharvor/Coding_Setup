#include<iostream>
using namespace std;
int main(){
    
    // Standard Age verification using If-Else statements

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age<18 && age>0){
        cout << "You are a minor!!";
    }
    else if(age >=18){
        cout << "You are an adult!!";
    }
    else{
        cout << "Invalid age entered!!";
    }


    // Nested If Else problem (Triangle type classifier)

    int a, b, c;

    cout << "\nEnter the first side of triangle: ";
    cin >> a;

    cout << "Enter the second side of triangle: ";
    cin >> b;

    cout << "Enter the third side of triangle: ";
    cin >> c;

    if(a+b > c && b+c > a){
        if(a == b && a == c){
            cout << "It's a Equiletral triangle!";
        }
        else if(a == b || a == c){
            cout << "It's a Isoscales triangle!";
        }
        else{
            cout << "It's a Scalene triangle!";
        }
        
    }

    else{
        cout << "It's not the sides of a valid triangle";
    }

    return 0;
}
