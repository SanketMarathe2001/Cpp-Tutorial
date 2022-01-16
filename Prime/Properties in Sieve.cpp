#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
const int M = 1e5+10;

vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);
vector<int> divisors[M];

int main() {
	// Sieve Algorithm tc=nlog(log(n))
	isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;++i){
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    
    //Highest and Lowest prime 
    // for(int i=2;i<100;i++){
    //     cout<<lp[i]<<" "<<hp[i]<<endl;
    // }
    
    //prime factorisation
    int num;
    cin>>num;
    map<int,int> p_fs;
    while(num>1){
        int p_f = hp[num];
        while(num%p_f == 0){
            num/=p_f;
            p_fs[p_f]++;
        }
    }
    for(auto factor : p_fs)
        cout<<factor.first<<" "<<factor.second<<endl;
    
    //Divisors varition of Sieve
    for(int i=2;i<M;i++){
        for(int j=i;j<M;j+=i){
            divisors[j].push_back(i);
        }
    }
    
    for(int i=1;i<10;i++){
        for(int div : divisors[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }
}

