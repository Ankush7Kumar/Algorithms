class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        
        if(target < nums[0]) {
            return 0;
        }
        
        for(int i = 1; i < nums.size(); i++) {
            if(target < nums[i]) {
                return i;
            }
        }
        
        
            
        return (nums.size()); 
    }
};