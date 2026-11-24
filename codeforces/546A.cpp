#include <bits/stdc++.h>

void solve(){
    long long w,n,k;
    std::cin >> k >> n >> w;
    long long cost = 0;
    for(long long i = 1;i<=w;i++){
        cost += i*k;
    }
    long long borrow = cost - n;
    if(borrow>=1){
    std::cout << borrow << '\n';
    }else{
        std::cout << 0 << '\n';
    }

            
}
int main(){
    solve();
    return 0;
}
