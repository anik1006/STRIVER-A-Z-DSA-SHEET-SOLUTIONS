class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        
        for(int i=1;i<nums.size();i++){
            if(nums[left]!=nums[i]) {
                nums[left+1]=nums[i];
                left++;
            }
        }
        return left+1;
    }
};

/*
    eg- 0,0,1,1,2 ==> out left will always be at startinging index and whichever next element is != left element the we will place it next to left and update left to left+1.
*/
