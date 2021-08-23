class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
vector<int> toret;

    for(int i = 0; i < nums.size(); i++) {
    for(int j = i+1; j < nums.size(); j++) {
        if(nums[i] + nums[j] == target) {
            toret.push_back(i);
            toret.push_back(j);
            return toret;
        }
    }
}



toret.push_back(0);
toret.push_back(1);
return toret;
}
};
