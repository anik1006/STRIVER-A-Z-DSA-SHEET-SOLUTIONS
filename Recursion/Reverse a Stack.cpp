
class Solution{
public:

    stack<int>func(stack<int>&St,stack<int>&result){
        if(St.empty()) return result;
        int val=St.top();
        result.push(val);
        St.pop();
        return func(St,result);
    }
    
    stack<int> Reverse(stack<int> St){
        
        stack<int>result;
        return func(St,result);
    }
};
