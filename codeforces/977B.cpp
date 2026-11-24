#include <bits/stdc++.h>

void solve(){
    std::unordered_map<std::string,int>mp;
    std::string s;
    int n;
    std::cin >> n >> s;
    for(int i =0;i<n-1;i++){
        std::string two = s.substr(i,2);
        mp[two]++;
    }
    std::string ans="";
    int mx = 0;
        for(auto&c:mp){
        if(c.second>mx){
            mx = c.second;
            ans=c.first;
        }
    }

       std::cout << ans << '\n';
}
int main(){

    solve();
    return 0;
}
