class Solution {
  public:
    int org;
    void dfs(vector<vector<int>>& image, int m,int n, int i, int j, int newColor){
        if(i<0 || j<0 ||i>=m || j>=n || image[i][j]==newColor|| image[i][j]!=org){
            return;
        }
        image[i][j]=newColor;
        dfs(image,m,n,i+1,j,newColor);
        dfs(image,m,n,i-1,j,newColor);
        dfs(image,m,n,i,j+1,newColor);
        dfs(image,m,n,i,j-1,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        org = image[sr][sc];
        int m = image.size();
        int n = image[0].size();
        dfs(image,m,n,sr,sc,newColor);
        return image;
        
    }
};