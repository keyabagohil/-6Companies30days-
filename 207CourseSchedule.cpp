class Solution {
public:
int n;
int result=1;

    void dfs(int i,int *a,int n,vector<int> v){
        if(v[i]==1){
            result=0;
            return;
        }
        v[i]=1;
        for(int j=0;j<n;j++){
            if(*((a+i*n) + j)==1){          
                dfs(j,(int *)a,n,v);
            }
        }
        return;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     if(prerequisites.size()==0)
      return true;
     int a[numCourses][numCourses]; 
     int n=numCourses;

     for(int i=0;i<prerequisites.size();i++){
         a[prerequisites[i][0]][prerequisites[i][1]]=1;
     }
     for(int i=0;i<n;i++){
         vector<int> v(n);
         dfs(i,(int *)a,n,v);
         if(result==0)
         break;
     }
        return result;
    }
};
