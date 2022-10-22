class Solution {
public:
    
    double func(double base,long long num){
        
        if(num==0) return 1;
        else if(num%2==0) return func(base*base,num/2);
        else return base*func(base*base,num/2);
    }
    
    double myPow(double x, int n) {
        
        long long num=n;
        
        if(n<0){
            num= abs(num);
            x=1/x;
        }
        
        return func(x,num);
    }
};

// T.C ==> O(log n)
// S.C ==> O(1)
// Auxillary Space ==> O(n)
