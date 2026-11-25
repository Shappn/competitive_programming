#include <bits/stdc++.h>

void solve(){
    std::string s;
    std::cin >> s;
    long long cnta = 0,cntc = 0,cntg = 0,cntt =0;
    for(long long i =0;i<s.size();i++){
        if(s[i]=='A')cnta++;
        else if(s[i]=='C')cntc++;
        else if(s[i]=='G')cntg++;
        else cntt++;
    }

    long long mx = std::max({1LL*cnta,1LL*cntc,1LL*cntg,1LL*cntt});
    std::cout << mx;
}
int main(){
    solve();
    return 0;
}
