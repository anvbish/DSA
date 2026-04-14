class Solution {
public:
    long long pow(long long base,long long exp){
        if(exp==0)return 1;
        long long mod=1e9+7;

        long long half=pow(base,exp/2);

        if(exp%2==0){
            return (half*half)%mod;
        }
        else{
            return (base*half%mod * half%mod)%mod;
        }
    }




    int countGoodNumbers(long long n) {
        long long mod=1e9+7;
        long long even=(n+1)/2;
        long long odd=n/2;

        long long ans=(pow(5,even) * pow(4,odd))%mod;
        return ans;
    }
};