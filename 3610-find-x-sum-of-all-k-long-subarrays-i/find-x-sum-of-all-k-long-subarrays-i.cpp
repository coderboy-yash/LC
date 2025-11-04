class Solution {
public:
    int solve(vector<int>&nums,int i,int j,int x){
        unordered_map<int,int>m;
        int s=0;
        for(int a=i;a<=j;a++){
            m[nums[a]]++;
            s+=nums[a];

                }
        if(m.size()<x){
            return s;
        }

        priority_queue<pair<int,int>>pq;
        for(auto it:m){
            pq.push({it.second,it.first});
        }
        int sum=0;
        while(x--){
            int value=pq.top().second*pq.top().first;
            sum+=value;
            pq.pop();
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        int sub=n-k+1;
        vector<int>ans(sub);
        for(int i=0;i<sub;i++){
             int result=solve(nums,i,i+k-1,x);
            ans[i]=result;
             
        }
        return ans;
    }
};