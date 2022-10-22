
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        
        int ans=-1;
         int s=0,h=n-1;
        
        while(s<=h){
            
            
             int mid= (s+(h-s))/2;
            
            if(v[mid]==x){
                ans=mid;
                break;
            }
            else if(v[mid]>x){
                h=mid-1;
            }
            else {
                ans=mid;
                s=mid+1;
            }
        }
        
        return ans;
    }
};


