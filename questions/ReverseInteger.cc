class Solution {
  public:
    int reverse(int x) {
      long long int sum = 0;
      int min = -2147483648;
      int max = 2147483647;
      while (x != 0) {
        sum = sum * 10 + x % 10;
        x = x / 10;
      }
      if (sum > min && sum < max) return sum;
      else return 0;
    }
};
