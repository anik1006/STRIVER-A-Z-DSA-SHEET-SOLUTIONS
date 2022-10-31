/* SOLUTION 1:
  We will use 2 pointer approach in this solution. We need to cover 3 cases for this problem .
  First we will check whether 1st element is "0" or not if it is "0" then check next element of i pointer which is j pointer whether j pointer element is "0" or non 0 if it is non zero we will swap elements and increment both pointer by 1. 
  Second case is if i pointer element is non zero then also we will increment both pointer by 1.
  Thrid is if both the above cases are not valid then we are having our i pointer on correct place (that is after non zero element) and we will move our j pointer by 1.
  
  T.C= O(n), S.C= O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0,j=1;
        
        for(int k=0;k<nums.size()-1;k++){
            
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]!=0){
                i++;
                j++;
            }
            else j++;
        }
    }
};

/* Solution 2:
   We will count no of non zero elements and place them in front and we will perform it in given array only without any extra space.
   T.C= O(n), S.C= O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        
        for(int i=j;i<nums.size();i++) nums[i]=0;
        
    }
};
