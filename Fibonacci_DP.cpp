// Fiboncci Series using Dynamic Programming

#include <iostream>

using namespace std;

// Top Down Approach
int fib_TD(int n, int dp[]){
    
    if(n == 0 || n==1){
        return n;
    }

    if(dp[n] != 0){
        return dp[n];
    }

    int ans;
    ans = fib_TD(n - 1, dp) + fib_TD(n - 2, dp);
    return dp[n] = ans;
}

// Bottom Up Approach
int fib_BU(int n){
    int dp[1000] = {0};
    dp[1] = 1;
    for(int i = 2; i < n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    int dp[1000] = {0};

    cout << fib_BU(n) << endl;
    cout << fib_TD(n, dp) << endl;
    
    return 0;
}