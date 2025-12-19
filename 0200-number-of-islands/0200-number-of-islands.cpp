class Solution {
public:
  int par[1000005], si[1000005];

void make(int v){
   
   par[v]=v;
   si[v]=1;
}
int find(int v){
  
   if(v==par[v]) return v;

   return par[v]=find(par[v]);


}
void Union(int a,int b){
    a=find(a);
    b=find(b);

    if(a!=b){
       if(si[a]<si[b])
          swap(a,b);
       par[b]=a;
       si[a]+=si[b];
    }
}

  
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n*m;i++) make(i);
      
        int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
      
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                int id1 = i * m + j;
                for (int k = 0; k < 4; k++) {
                    int ni = i + dx[k], nj = j + dy[k];
                    if (ni >= 0 && nj >= 0 && ni < n && nj < m && grid[ni][nj] == '1') {
                        int id2 = ni * m + nj;
                        Union(id1, id2);
                    }
                }
            }
        }
      }

      unordered_set<int> comp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                comp.insert(find(i * m + j));
            }
        }
    }
    return comp.size();
       


    }
};