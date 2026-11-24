#include <bits/stdc++.h>

void solve(){
    int n,k;
    std::cin >> n>>k;
    int rem =0;

    for(int i = 0;i<k;i++){
            rem = n%10;
            if(rem!=0){
                n--;
            }
            else{
                n/=10;
            }
    }
    std::cout << n << '\n';

}
int main(void){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
    return 0;
}
