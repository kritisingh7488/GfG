class Solution {
  public:
    int setKthBit(int n, int k) {
        int x=1;
        x=x<<k;
        return n|x;
        
    }
};
