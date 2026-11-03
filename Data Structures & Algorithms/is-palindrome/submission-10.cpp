class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        bool count=false;
        for(int i=s.size()-1;i>=0;i--){
            if(!isalpha(s[i]) and !isdigit(s[i])){

                s.erase(i,1);
                count=true;
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
        n=s.size();
        for(int i=0;i<s.size();i++){
            // char s1=tolower(s[i]);
            // char s2=tolower(s[n-i-1]);
            cout<<s[i]<<" "<<s[n-i-1]<<endl;
            if(s[i]!=s[n-i-1] ){
                return false;
            }
        }
        return true;
    }
};
