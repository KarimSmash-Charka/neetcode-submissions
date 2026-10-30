class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>dict;
        for(int i=0;i<nums.size();i++){
            dict[nums[i]]+=1;
        }
        
        vector<pair<int,int>>vec;
        for(auto &[key,value]:dict){
            vec.emplace_back(key,value);
        }

        sort(vec.begin(),vec.end(),[](const auto &a, const auto&b){
            return a.second>b.second;
        });
        // unordered_map<int,int>temp;
        vector<int>result;
        for(int i=0;i<vec.size();i++){
            if(k==0){
                break;
            }
            k--;
            result.push_back(vec[i].first);
            // temp[vec[i].first]=vec[i].second;
            // cout<<vec[i].first<<":"<<vec[i].second<<endl;
        }

        

        // cout<<endl;

        // for(auto &[key,value]:temp){
        //     cout<<key<<":"<<value<<endl;
        // }

        // vector<int>result;
        // for(auto &[key,value]:temp){
        //     if(k==0){
        //         break;
        //     }
        //     result.push_back(key);
        //     k--;
        // }
        if(result.empty()){
            return nums;
        }
        return result;
    }
};