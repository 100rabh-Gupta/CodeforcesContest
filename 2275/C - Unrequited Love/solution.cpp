#include<iostream>
#include<vector>
#include<map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
         vector<long long> a(n);
        for (int i=0;i<n;i++) cin >> a[i];
        map<long long, long long> cnt;
      long long ans = 0;
 
      
 
    
       for (int i = 0; i + 4 < n; i++) {
            long long val = a[i] + a[i + 2] - a[i + 4];
 
            ans += cnt[val];
 
            if (i >= 2) {
                long long x = a[i - 2] + a[i] - a[i + 2];
                if (x == val)
                    ans--;
            }
 
            if (i >= 4) {
                long long x = a[i - 4] + a[i - 2] - a[i];
                if (x == val)
                    ans--;
            }
 
            cnt[val]++;
        }
 
        cout << ans << '
';
    }
}