class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int y = 0;
        unsigned int z = x;
        
        while(x > 0){
            y = y * 10 + x % 10;
            x /= 10;
        }
        return (z == y);
    }
};
