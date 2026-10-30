class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_strs;
        for(int i=0;i<strs.size();i++){
            encoded_strs+=strs[i];
            encoded_strs+="`";
        }
        return encoded_strs;
    }

    vector<string> decode(string s) {
        vector<string>decoded_strs;
        string coren="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='`'){
                decoded_strs.push_back(coren);
                coren="";
            }
            else{
                coren+=s[i];
            }
        }
        return decoded_strs;
    }
};
