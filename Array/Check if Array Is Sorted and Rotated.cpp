class Solution {
public:
    bool check(vector<int>& nums) {
        
        int cnt=0;
        bool ans=true;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) cnt++;
        }
        
        if(cnt>1) ans=false;
        if(cnt==1 && nums[0]<nums[nums.size()-1]) ans=false;
        
        return ans;
    }
};

/*
  We need to keep in mind that there can be 1 or more no that is smaller to previous one while iterating and if this thing happens so that array can never be sorted.
  For cnt=1, we will check wheter that last element is smaller than 1st element in array bcoz then only it can be in increasing order , if last elemnt is greater so it is not considered as sorted array.
  T.C==> O(n)
*/
