/* We will be having 5 options which needs to be placed at even indexes and 4 options for all indexes.
           We need to find the even no of indexes and odd no of indexes.
           For example n=4,
           5 4 5 4   ==> Basically we will get 5*4*5*4 numbers by such arrangements. 
         */

class Solution {
public:
    
    long long count(long long base,long long power){
        if(power==0) return 1;
        else if(power%2==0) return count((base*base)%1000000007,power/2);
        else return (base*count((base*base)%1000000007,power/2))%1000000007;
    }
    
    int countGoodNumbers(long long n) {
        
        long long odd_index=n/2;
        long long even_index=(n/2)+(n%2);
        
        return (count(5,even_index)*count(4,odd_index))%1000000007;
    }
};
