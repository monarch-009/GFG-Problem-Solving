#include<bits/stdc++.h>
using namespace std;

// Here is the solution written

class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        
        return (static_cast<long long> (n) * (n+1))/2;

        // This code has time complexity Problem 
        // long long sum = 0;  
        // for(int i =0;i<=n;i++){
        //     sum +=i;
        // }
        // return sum;
    }
};


int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}