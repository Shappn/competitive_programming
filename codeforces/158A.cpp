#include <bits/stdc++.h>

void solve(){
    int n,k;
    std::cin >> n >> k;
    std::vector<int>arr(n);
        for(int i =0;i<n;i++){
            std::cin >> arr[i];
        }
    int cnt = 0 ;
     
        
    for(int i =0;i<n;i++){
        if(arr[i]>=arr[k-1]&&arr[i]>0){
            cnt++;
        }
    }
    std::cout << cnt<< '\n';
}
int main(){
    solve();
    return 0;
}
