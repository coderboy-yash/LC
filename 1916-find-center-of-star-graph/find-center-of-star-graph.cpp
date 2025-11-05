class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<int>degree(n+1);
        for(auto it:edges){
            degree[it[0]]++;
            degree[it[1]]++;
            if(degree[it[0]]>1)return it[0];
            if(degree[it[1]]>1)return it[1];
            
        }
        return 0;

    }
};