class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(),arr.begin()+1);
        reverse(arr.begin()+1,arr.end());
        
        
    }
};