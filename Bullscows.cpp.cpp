class Solution {
public:
    string getHint(string secret, string guess) {
        int a[10]={0};
        int s1=0,s2=0;

        for(int i=0;i<secret.length();i++){
            a[secret[i]-'0']++;
            if(guess[i]==secret[i])
                s1++;
        }
        for(int i=0;i<secret.length();i++){
            if(a[guess[i]-'0']!=0){
                s2++;
                a[guess[i]-'0']--;
            }
        }
        string s=to_string(s1)+"A"+to_string(s2-s1)+"B";
        return s;
    }
};