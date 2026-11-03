class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.insert(nums[i]);
        }
        int k_max=0;
        int prev=0;
        bool count=true;
        int k=0;
        // for(auto it:arr){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        for(auto it:arr){
            if(count){
                prev=it;
                // cout<<prev<<endl;
                count=false;
                continue;
            }
            if(it-prev>1){
                k=0;
                prev=it;
                // cout<<"k is 0"<<endl;
            }
            else if(it-prev==1){
                k++;
                if(k_max<k){
                    k_max=k;
                }
                // cout<<it<<endl;
                prev=it;
            }
        }
        if(nums.size()==0){
            return 0;
        }
        return k_max+1;
    }
};
