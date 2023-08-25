#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"This is Your Calculator"<<'\n';
    int a,b;
    char c;
    cout<<"Enter First Operand: "<<'\n';
    cin>>a;
    cout<<"Enter Second Operand:  "<<'\n';
    cin>>b;
    cout<<"Enter the operator "<<'\n';
    cin>>c;
    if(c=='+'){
        cout<<"Answer: "<<a+b<<'\n';
    }
    else if(c=='-'){
        cout<<"Answer: "<<a-b<<'\n';

    }
    else if(c=='*'){
        cout<<"Answer: "<<a*b<<'\n';
    }
    else if(c=='/'){
        if(b==0)cout<<"invalid operand"<<'\n';
        else cout<<"Answer: "<<a/b<<'\n';
    }
    else cout<<"Invalid Operation"<<'\n';
}