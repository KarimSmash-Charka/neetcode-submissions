class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.insert(nums[i]);
        }
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
        int k=0;
        int k_max=0;
        for(auto it:arr){
            int current_num=it;
            k=0;
            if(arr.find(current_num-1)==arr.end()){
                while(arr.find(current_num+1)!=arr.end()){
                k++;
                current_num++;
            }
            }
            if(k_max<k){
                k_max=k;
            }
        }
        if(nums.size()==0){
            return 0;
        }
        return k_max+1;
    }
};
