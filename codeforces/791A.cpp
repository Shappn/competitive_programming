#include <bits/stdc++.h>
void solve(){
    int a,b;
    std::cin >> a >> b;
    int cnt =0 ;
    while(a<b){
        a =a*3;
        b = b*2;
        cnt++;
    }
    std::cout << cnt << '\n';

}
int main(void){
    solve();
    return 0;
}
