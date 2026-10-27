class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>seen1;
        map<char,int>seen2;
        bool count=true;
        if (s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            seen1[s[i]]+=1;
            seen2[t[i]]+=1;
        }
        if(seen1.size()!=seen2.size()){
            return false;
        }
        // for(int i=0;i<s.size();i++){
        //     cout<<s[i]<<" "<<seen1[s[i]]<<endl;
        // }
        // cout<<endl;
        // for(int i=0;i<s.size();i++){
        //     cout<<t[i]<<" "<<seen2[t[i]]<<endl;
        // }
        for(int i=0;i<s.size();i++){
            if(seen1[s[i]]!=seen2[s[i]]){
                count=false;
            }
        }
        return count;
    }
};
