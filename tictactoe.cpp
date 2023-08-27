#include<bits/stdc++.h>
using namespace std;
const int M=3;
const int N=3;
int game(char a[M][N],int cnt){
    int m,n;
    cout<<"MAKE A MOVE: ";
    cin>>m>>n;
    m--,n--;
    if(a[m][n]=='X'||a[m][n]=='0'){
        cout<<"This move has already been performed "<<'\n';
        game(a,cnt);
    }
    else if(cnt%2!=0)a[m][n]='0';
    else a[m][n]='X';
    cnt++;
    
    if(cnt>=5&&cnt<9){
        if(((a[0][0]=='X'&&a[1][1]=='X')&&(a[2][2]=='X'))||((a[0][2]=='X'&&a[1][1]=='X')&&(a[2][0]=='X'))||((a[0][0]=='X'&&a[0][1]=='X')&&(a[0][2]=='X'))||((a[1][0]=='X'&&a[1][1]=='X')&&(a[1][2]=='X'))||((a[2][0]=='X'&&a[2][1]=='X')&&(a[2][2]=='X'))||((a[0][0]=='X'&&a[1][0]=='X')&&(a[2][0]=='X'))||((a[0][1]=='X'&&a[1][1]=='X')&&(a[2][1]=='X'))||((a[0][2]=='X'&&a[1][2]=='X')&&(a[2][2]=='X'))){
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            }
            cout<<"Player 1 wins!"<<'\n';
            cout<<"1.Replay     2.Exit  "<<'\n';
            int k;
            cin>>k;
            if(k==1){
                cnt=0;
                for(int i=0;i<M;i++){
                   for(int j=0;j<N;j++){
                     a[i][j]='_';
                 }
              }
              game(a,cnt);
            }
        }
        else if(((a[0][0]=='0'&&a[1][1]=='0')&&(a[2][2]=='0'))||((a[0][2]=='0'&&a[1][1]=='0')&&(a[2][0]=='0'))||((a[0][0]=='0'&&a[0][1]=='0')&&(a[0][2]=='0'))||((a[1][0]=='0'&&a[1][1]=='0')&&(a[1][2]=='0'))||((a[2][0]=='0'&&a[2][1]=='0')&&(a[2][2]=='0'))||((a[0][0]=='0'&&a[1][0]=='0')&&(a[2][0]=='0'))||((a[0][1]=='0'&&a[1][1]=='0')&&(a[2][1]=='0'))||((a[0][2]=='0'&&a[1][2]=='0')&&(a[2][2]=='0'))){
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            }
            cout<<"Player 2 wins!"<<'\n';
            cout<<"1.Replay     2.Exit  "<<'\n';
            int k;
            cin>>k;
            if(k==1){
                cnt=0;
                for(int i=0;i<M;i++){
                   for(int j=0;j<N;j++){
                     a[i][j]='_';
                 }
              }
              game(a,cnt);
            }
        }
        else{
           for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            } 
            game(a,cnt);
        }
    }
    else if(cnt==9){
        if(((a[0][0]=='X'&&a[1][1]=='X')&&(a[2][2]=='X'))||((a[0][2]=='X'&&a[1][1]=='X')&&(a[2][0]=='X'))||((a[0][0]=='X'&&a[0][1]=='X')&&(a[0][2]=='X'))||((a[1][0]=='X'&&a[1][1]=='X')&&(a[1][2]=='X'))||((a[2][0]=='X'&&a[2][1]=='X')&&(a[2][2]=='X'))||((a[0][0]=='X'&&a[1][0]=='X')&&(a[2][0]=='X'))||((a[0][1]=='X'&&a[1][1]=='X')&&(a[2][1]=='X'))||((a[0][2]=='X'&&a[1][2]=='X')&&(a[2][2]=='X'))){
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            }
            cout<<"Player 1 wins!"<<'\n';
            cout<<"1.Replay     2.Exit  "<<'\n';
            int k;
            cin>>k;
            if(k==1){
                cnt=0;
                for(int i=0;i<M;i++){
                   for(int j=0;j<N;j++){
                     a[i][j]='_';
                 }
              }
              game(a,cnt);
            }
        }
        else if(((a[0][0]=='0'&&a[1][1]=='0')&&(a[2][2]=='0'))||((a[0][2]=='0'&&a[1][1]=='0')&&(a[2][0]=='0'))||((a[0][0]=='0'&&a[0][1]=='0')&&(a[0][2]=='0'))||((a[1][0]=='0'&&a[1][1]=='0')&&(a[1][2]=='0'))||((a[2][0]=='0'&&a[2][1]=='0')&&(a[2][2]=='0'))||((a[0][0]=='0'&&a[1][0]=='0')&&(a[2][0]=='0'))||((a[0][1]=='0'&&a[1][1]=='0')&&(a[2][1]=='0'))||((a[0][2]=='0'&&a[1][2]=='0')&&(a[2][2]=='0'))){
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            }
            cout<<"Player 2 wins!"<<'\n';
            cout<<"1.Replay     2.Exit  "<<'\n';
            int k;
            cin>>k;
            if(k==1){
                cnt=0;
                for(int i=0;i<M;i++){
                   for(int j=0;j<N;j++){
                     a[i][j]='_';
                 }
              }
              game(a,cnt);
            }
        }
        else{
           for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            } 
            cout<<"Draw"<<'\n';
            cout<<"1.Replay     2.Exit  "<<'\n';
            int k;
            cin>>k;
            if(k==1){
                cnt=0;
                for(int i=0;i<M;i++){
                   for(int j=0;j<N;j++){
                     a[i][j]='_';
                 }
              }
              game(a,cnt);
            }
        }
    }
    else{
         for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<a[i][j];
                }
                cout<<'\n';
            } 
        game(a,cnt);
    }
      return 0;
}
int main(){
    char a[M][N];
    int cnt=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            a[i][j]='_';
        }
    }
    game(a,cnt);
}
    
