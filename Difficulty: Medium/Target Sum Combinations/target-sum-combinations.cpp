class Solution {
  public:
    vector<vector<int>> ans;
    void helper(vector<int> &arr, int target,int i, vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i==arr.size()|| target<0){
            return;
        }
        temp.push_back(arr[i]);
        helper(arr,target-arr[i],i,temp);
        temp.pop_back();
        helper(arr,target,i+1,temp);
        
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        vector<int> temp;
        helper(arr,target,0,temp);
        return ans;
        
    }
};