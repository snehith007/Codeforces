#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if((b>d) || (a-b) < (c-d) ){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<d-b+a+d-b-c<<"\n";
        }
    }
    return 0;
}