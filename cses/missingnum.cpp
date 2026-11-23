#include <bits/stdc++.h>

void solve(){
   long long n;
   std::cin >> n;
   long long sum =n*(n+1)/2;
    std::vector<long long>arr(n);
   for(long long i = 0;i<n-1;i++){
       std::cin >> arr[i];
   }
   long long totalsum = 0;
   for(long long i =0;i<n-1;i++){
       totalsum+=arr[i];
   }
   long long missnum = sum - totalsum;
   std::cout << missnum << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
    return 0;
}
