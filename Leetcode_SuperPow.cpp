#include<bits/stdc++.h>
using namespace std;

//leetcode superpow answer

int binary_expo(int a,int b){
    int ans=1;
    while(b){
        if(b%2==1)
        {
            ans=(ans*a)%1337;
        }
        a=(a*a)%1337;
        b/=2;
    }
    return ans;
}

int superPow(int a, vector<int>& b) {
    int ans=1;
    a=a%1337;
    for(int i=b.size()-1;i>=0;i--){
        ans=(ans*binary_expo(a,b[i]))%1337;
        a=binary_expo(a,10);
    }
    return ans;
}