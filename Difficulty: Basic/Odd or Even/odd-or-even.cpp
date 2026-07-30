class Solution {
  public:
    bool isEven(int n) {
        if((n&1)==1) return 0;
        else return 1;
    }
};