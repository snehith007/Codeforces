#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int last = 0;
		int ans = INT_MIN;
		for (int i = 0; i < n; i++) {
			ans = max(ans, arr[i] - last);
			last = arr[i];
		}
		ans = max(ans, 2 * (m - last));
		cout << ans<<"\n";
		
	}



}