class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> a;
        int n = arr.size();
        for(int i =0; i<n;i=i+2){
            a.push_back(arr[i]);
        }
        return a;
    }
};