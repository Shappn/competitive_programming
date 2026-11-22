#include <bits/stdc++.h>

void solve(){
    int s,n;
    std::cin >> s>>n;
    std::vector<int>x(n);
    std::vector<int>y(n);
    for(int i =0;i<n;i++){
        std::cin >>x[i];
        std::cin >> y[i];

    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
                std::swap(x[i], x[j]);
                std::swap(y[i], y[j]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        if(s<=x[i]){
            std::cout << "NO\n";
            return ;
        }
        s+=y[i];
    }
    std::cout << "YES\n";


}
int main(){
    solve();
    return 0;
}
