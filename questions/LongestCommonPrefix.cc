class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    string max = *max_element(strs.begin(), strs.end()); 
    string min = *min_element(strs.begin(), strs.end());
    for(int i = 0; i < min.size(); i++){
        if(min[i] == max[i]){ continue;}
        min.resize(i); 
        return min;
    }
    return min;
}
};
