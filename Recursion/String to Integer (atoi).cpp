class Solution {
public:
    
    long long func(int len, string s, int i, int sign, long long ans, bool signPresent, bool numPresent){
        
        if(ans*sign>INT_MAX) return INT_MAX;
        if(ans*sign<INT_MIN) return INT_MIN;
        
        if(i==len) return sign*ans;
        
        if(s[i]==' ' && !numPresent) return func(len,s,i+1,sign,ans,signPresent,numPresent);
        else if(s[i]=='-' && !signPresent) return func(len,s,i+1,-1*sign,ans,true,true);
        else if(s[i]=='+' && !signPresent) return func(len,s,i+1,sign,ans,true,true);
        else if(s[i]>='0' && s[i]<='9') return func(len,s,i+1,sign,(ans*10+(s[i]-'0')),true,true);
        else return ans*sign;
    }
    int myAtoi(string s) {
        int len=s.length();
        return (int)func(len,s,0,1,0,false,false);
    }
};

/* We need to handle every possible test cases like +42, +-42, +-42_45, ____56_89, __45ab.
   So we need to take a check whether a sign or space is occured before or not , if occured then make it "true", so that if it occurs again we will return back.
*/
