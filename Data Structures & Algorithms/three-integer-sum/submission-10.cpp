class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<int>vec=nums;
        sort(nums.begin(),nums.end());
        // vector<int>seen=nums;
        // multimap<int,int>dict;
        // for(int i=0;i<vec.size();i++){
        //     dict[vec[i]]=i;
        // }
        for(auto it:nums){
            cout<<it<<" ";
        }
        cout<<endl;
        vector<vector<int>>results;
        for(int i=0;i<nums.size();i++){
            int need = 0 - nums[i];
            int left = i+1;
            int right = nums.size()-1;
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            while(left<right){
                    if(nums[left]+nums[right]==need){
                        cout<<need<<endl;
                        results.push_back({nums[left],nums[i],nums[right]});
                        while(left<right and nums[left]==nums[left+1]){
                            left+=1;
                        }
                        while(left<right and nums[right]==nums[right-1]){
                            right-=1;
                        }
                        left++;
                        right--;
                    }
                    else if(nums[left]+nums[right]>need){
                        right-=1;
                    }
                    else if(nums[left]+nums[right]<need){
                        left+=1;
                    }
            }
        }
        return results;
    }
};
