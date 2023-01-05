class Solution {
public:

vector<int> t;
vector<vector<int>> d;

int temp=0;
int count=0;

    void dfs(int i,int temp,int count,int n,int k){
       t.push_back(i+1);
       temp+=(i+1);
       count++;
       if(count>k || temp>n){
           t.pop_back();
       }
       else if(count==k && temp==n){
           d.push_back(t);
           t.pop_back();
       }
       else{
           for(int j=i+1;j<9;j++){
                dfs(j,temp,count,n,k);
            }
            t.pop_back();
       }
       return;

    }
         

    vector<vector<int>> combinationSum3(int k, int n) {       

        for(int i=0;i<9;i++){
            temp=0,count=0;
            t.clear();
            dfs(i,temp,count,n,k);            
        }        
        return d;
    }
};