class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0) {
            return 0;
        }
        
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i-1] != nums[i]) {
                k++;
            }
        }
        
        k++;
        
        //there are k unique numbers
        
        int index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i-1] != nums[i] && i <= (nums.size() - 2)) {
                nums[index] = nums[i-1];
                index++;
            } else if (nums[i-1] != nums[i] && i == (nums.size() - 1)) {
                //cout << "here" <<index<<i <<endl;
                nums[index] = nums[i-1];
                index++;
                nums[index] = nums[i]; 
                break;
            } else if (nums[i-1] == nums[i] && i == (nums.size() - 1)) {
                nums[index] = nums[i];
                break;
            }
        }
        
        return k;
    }
};
