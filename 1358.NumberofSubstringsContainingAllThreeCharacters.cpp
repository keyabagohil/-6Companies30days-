class Solution {
public:

    int numberOfSubstrings(string s){

    int count=0;
    int min=0;
    int a[]={0,0,0};
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
        int t1=a[0];
        int t2=a[1];
        int t3=a[2];
        min=0;
        while(a[0] && a[1] && a[2] && min<i){
            count++;
            a[s[min]-'a']--; 
            min++;         
        }
        a[0]=t1;
        a[1]=t2;
        a[2]=t3;
    }
    return count;
    }
};
