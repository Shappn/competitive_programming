#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
 int x =0;

    while(n--){
    std::string s;
    std::cin >> s;
       if(s[1]=='+'){
        x++;
    }else{
        x--;
    }
    
    }
    
    std::cout << x << '\n';

    
}
int main(){

    solve();
    return 0;
}
