#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin  >> n;
    std::vector<int>arr(n);
    int sum = 0;

    for(int i = 0;i<n;i++){
        std::cin >> arr[i];
        sum+=arr[i];
    }
    std::sort(arr.rbegin(),arr.rend());
    int mytotal =0;
    int cnt =0;
    for(int i =0;i<n;i++){
        mytotal+=arr[i];
        cnt++;
        if(mytotal>sum-mytotal){
            break;
        }
    }
    std::cout << cnt << '\n';

    
}
int main(){
    solve();
    return 0;
}
