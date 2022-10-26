class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         
        k=k%nums.size(); // to chk that k should always be in the size
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};

