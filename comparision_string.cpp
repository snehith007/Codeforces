#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans =1,cnt=1;
        for(int i=1;i<n;i++){
            if(s[i] == s[i- 1]){
                cnt++;
                ans = max(ans,cnt);
            }
            else{
                cnt=1;
            }
        }
        cout<<ans+ 1<<"\n";
    }
    return 0;
}