class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        vector<int> list;
        for(int i =n-1;i>=0;i--){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()){
                list.push_back(-1);
            }
            else{
                list.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(list.begin(), list.end());
        return list;
        
    }
}; 