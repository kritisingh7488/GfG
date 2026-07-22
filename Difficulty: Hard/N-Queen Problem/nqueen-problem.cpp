class Solution {
  public:
    vector<vector<int>> ans;
    
    void helper(int n,vector<bool>& col,vector<bool>& ld, vector<bool>& rd,vector<int>& psf,int i){
        if(i==n){
            ans.push_back(psf);
            return;
        }
        for(int j =0; j<n;j++){
            if(col[j]==0 && ld[i+j]==0 && rd[i-j+n-1]==0){
                col[j]=1;
                ld[i+j]=1;
                rd[i-j+n-1]=1;
                psf.push_back(j+1);
                helper(n,col,ld,rd,psf,i+1);
                psf.pop_back();
                col[j]=0;
                ld[i+j]=0;
                rd[i-j+n-1]=0;
                
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<bool> col(n,0);
        vector<bool> ld(2*n-1,0);
        vector<bool>rd(2*n-1,0);
        vector<int> psf;
        helper(n,col,ld,rd,psf,0);
        return ans;
    }
};