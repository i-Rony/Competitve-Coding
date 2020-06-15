/*
    Minimum Steps To One

    n ----> 1

    n => n/3    iff n % 3 == 0
    n => n/2    iff n % 2 == 0
    n => n - 1

*/

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// Top Down Approach
int minSteps(int n, int dp[]){

    if(n == 1){
        return 0;
    }

    // If n is already computed
    if(dp[n]!=0){
        return dp[n];
    }

    // if n is not known
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if(n % 3 == 0){
        op1 = minSteps(n/3, dp);
    }
    if(n % 2 == 0){
        op2 = minSteps(n/2, dp);
    }
    op3 = minSteps(n-1, dp);

    int ans = min(min(op1, op2), op3) + 1;

    return dp[n] = ans;

}

int main(){

    int n;
    cin >> n;
    int dp[100] = {0};
    
    cout << minSteps(n, dp);

    return 0;
}