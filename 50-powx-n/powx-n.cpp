class Solution {
public:
    double myPow(double base, long long exp) {
        
       if(exp==0)return 1;
       if(exp<0){
        base=1/base;
        exp=-exp;
       }

       double half=myPow(base,exp/2);

       if(exp%2==0){
        return (half*half);
       }
       else{
        return (base*half *half );
       }
    }
    
};