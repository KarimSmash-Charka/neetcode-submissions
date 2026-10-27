class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        bool count=false;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i])!=seen.end()){
                count=true;
            }
            seen.insert(nums[i]);
        }
        return count;
    }
};