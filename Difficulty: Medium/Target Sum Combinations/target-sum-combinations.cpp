class Solution {
  public:
    vector<vector<int>> ans;
    void helper(vector<int> &arr, int target,int i, vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int j=i; j<arr.size();j++){
            
            temp.push_back(arr[j]);
            helper(arr,target-arr[j],j,temp);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        vector<int> temp;
        helper(arr,target,0,temp);
        return ans;
        
    }
};