#include<bits/stdc++.h>
using namespace std;
int guess(int a){
    int b;
    cout<<"Make a guess ";
    cin>>b;
    if(b>a){
        cout<<"Sorry! Your guess is much high "<<'\n';
        guess(a);
    }
    else if(b<a){
        cout<<"Sorry! Your guess is much low "<<'\n';
        guess(a);
    }
    else {
        cout<<"Yay! You guess it right "<<a<<'\n';
        return 0;
    }
}
int main(){
    int a=rand();
    guess(a);
    
}