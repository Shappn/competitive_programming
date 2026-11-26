#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;
    int a,b,c;
    int cnt = 0;
    int sum = 0;
    while(n--)
    {
        std::cin >> a >> b >> c;
        
        sum = a+b+c;
        if(sum>=2)cnt++;

        
        
    }
    std::cout << cnt << '\n';
}
int main(void)
{
    solve();
    return 0;
}