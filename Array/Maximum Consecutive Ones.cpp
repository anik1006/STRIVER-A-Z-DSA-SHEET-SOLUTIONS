class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxi=0;
        
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]==1){
                maxi++;
                count=max(maxi,count);
            }
            
            else maxi=0;
        }
        return count;
    }
};

// T.C= O(n), S.C= O(1)
