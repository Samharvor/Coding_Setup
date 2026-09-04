#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list<int> l1;
    list<int> l2;

    for(int i=0;i<5;i++){
        l1.push_back(i);
        l2.push_back(i+5);
    }

    cout<<"List 1: ";
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"List 2: ";
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    l1.merge(l2);

    cout<<"Merged List: ";
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;   
}

