class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>vec=strs;
        for(int i=0;i<strs.size();i++){
            sort(vec[i].begin(),vec[i].end());
        }
        unordered_map<string,vector<string>>dict;
        for(int i=0;i<strs.size();i++){
            dict[vec[i]].push_back(strs[i]);
        }
        vector<vector<string>>new_vec;
        for(auto it:dict){
            vector<string>temp;
            for(auto word: it.second){
                temp.push_back(word);
            }
            new_vec.push_back(temp);
        }
        return new_vec;
        // cout<<dict.size()<<endl;
        // for(auto it: dict){
        //     for(auto first_w: it.first){
        //         cout<<first_w;
        //     }
        //     cout<<":";
        //         for(auto word: it.second){
        //             cout<<word<<" ";
        //         }

        //     cout<<endl;
        // }

        // for(int i=0;i<strs.size();i++){
        //     dict[vec[i]].push_back(strs[i]);
        // }
        // cout<<dict[vec[0]][1];
        // return {};
    }

};
