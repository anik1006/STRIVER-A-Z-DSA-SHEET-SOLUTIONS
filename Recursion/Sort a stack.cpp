
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void print(priority_queue<int>&ans){
    if(ans.empty()) return;
    cout<<ans.top()<<" ";
    ans.pop();
    return print(ans);
}

void func(priority_queue<int>&ans,stack<int>&s){
    if(s.empty()) return;
    int val=s.top();
    s.pop();
    ans.push(val);
    return func(ans,s);
}

void SortedStack :: sort()
{
   //Your code here
   
   priority_queue<int>ans;
   func(ans,s);
   print(ans);
   
}
