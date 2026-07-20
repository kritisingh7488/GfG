class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
       priority_queue<int, vector<int>, greater<int>> h;
       int n = arr.size();
       for(int i =0; i<k+1;i++){
           h.push(arr[i]);
       }
       int j =0;
       for(int i =k+1;i<n;i++){
           arr[j++]=h.top();
           h.pop();
           h.push(arr[i]);
       }
       while(h.size()){
           arr[j++]=h.top();
           h.pop();
       }
    }
};