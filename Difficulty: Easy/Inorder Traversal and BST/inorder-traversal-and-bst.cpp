class Solution {
  public:
    bool doesRepresentBST(vector<int> &arr) {
        // code here
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        return arr==temp;
    }
};