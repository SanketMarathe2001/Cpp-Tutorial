#include<bits/stdc++.h>
using namespace std;
const int N = 2510;

int dp[300][10010];

// int func(int amount, vector<int> &coins){
// 	if(amount == 0) return 1;
// 	if(dp[index][amount] != -1) return dp[index][amount];
// 	int ways = 0;
// 	for(int coin : coins){
// 		if(amount-coin>=0)
// 		ways += func(amount - coin,coins);
// 	}
// 	return dp[index][amount] = ans;
// }

int func1(int index,int amount, vector<int> &coins){
	if(amount == 0) return 1;
	if(index<0) return 0;
	if(dp[index][amount] != -1) return dp[index][amount];
	int ways = 0;
	for( int coin_amount = 0;coin_amount<=amount; coin_amount += coins[index]){
		ways += func1(index-1,amount - coin_amount,coins);
	}
	return dp[index][amount] = ways;
}


int coinChange(vector<int>& coins, int amount) {
    memset(dp,-1,sizeof(dp));
    int ans = func1(coins.size()-1, amount,coins);
    return ans == INT_MAX ? -1 : ans;    
}

int main(){
	vector<int> coins = {2};
	cout<<coinChange(coins,3);
	return 0;
}