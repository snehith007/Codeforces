#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+ 1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans = __gcd(abs(arr[i]-i),ans);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
