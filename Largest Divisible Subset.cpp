class Solution {
public:
 vector<int> result;
 vector<int> v;

    void dfs(int i,vector<int> nums,int x){

       v.push_back(nums[i]);
       if(v.size()>result.size()){
           result.clear();
           result.assign(v.begin(),v.end());           
       }
       for(int j=0;j<x;j++){
            if((nums[j]%nums[i])==0 && (i!=j)){
                dfs(j,nums,x);
            }
       }
           v.pop_back();       
       return;
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int x=nums.size();
        for(int i=0;i<x;i++){
            v.clear();
            dfs(i,nums,x);
        }
        return result;
    }
};
