class Solution {
  public:
    vector<string> ans;
    vector<bool> vis;
    void uniques(string &s,string psf){
        if(psf.size()==s.size()){
            ans.push_back(psf);
            return;
        }
        for(int i =0;i<s.size();i++){
            if(!vis[i]){
                if(i>0 && s[i]==s[i-1] && vis[i-1]==1) continue;
                vis[i]=1;
                uniques(s,psf+s[i]);
                vis[i]=0;
            }
        }
    }
        
    vector<string> findPermutation(string &s) {
        vis=vector<bool>(s.size(),false);
        sort(s.begin(),s.end());
        uniques(s,"");
        return ans;
    }
};
