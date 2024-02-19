#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;cin >> c;
    if(a >=b && a>=c){
        cout<<"a is Greatest no :"<<a;
    }else if(b>=a && b>=c){
        cout<<"b is gretes no:"<<b;
    }
    else{
        cout<<"c is Greatest no :"<<c;
    }
}