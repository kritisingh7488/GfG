class Solution {
  public:
    void merge(vector<int>& arr,int l, int mid,int r){
        vector<int> temp;
        int i =l;
        int j =mid+1;
        while(i<=mid && j<=r){
            if(arr[i]>arr[j]){
                temp.push_back(arr[j++]);
            }
            else{
                temp.push_back(arr[i++]);
            }
            
        }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=r){
            temp.push_back(arr[j++]);
        }
        for(int i =0; i<r-l+1;i++){
            arr[i+l]=temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r) return;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
        
    }
};