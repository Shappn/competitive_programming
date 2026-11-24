#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    int first =0,sec = 0,third =0,four = 0;
    int taxicnt = 0;
    while(n--){
        int x;
        std::cin >> x;
        if(x==1)first++;
        else if(x==2)sec++;
        else if (x==3)third++
        else four++;

        taxicnt=four;
        int threecnt = third+one;
        taxicnt+=threecnt%4;



}
int main(void){
    solve();
    return 0;
}
