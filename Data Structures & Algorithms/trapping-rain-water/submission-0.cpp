class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>max_left;
        vector<int>max_right;
        int max_l=0;
        int max_r=0;
        for(int i=0;i<height.size();i++){
            max_left.push_back(max_l);
            if(height[i]>max_l){
                max_l=height[i];
            }
        }
        for(int i=height.size()-1;i>=0;i--){
            max_right.push_back(max_r);
            if(height[i]>max_r){
                max_r=height[i];
            }
        }
        reverse(max_right.begin(),max_right.end());
        // cout<<"Max_Left: "<<endl;
        // for(auto it:max_left){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // cout<<"Max_Right: "<<endl;
        // for(auto it:max_right){
        //     cout<<it<<" ";
        // }
        int temp=0;
        int sum=0;
        for(int i=0;i<height.size();i++){
            temp = min(max_left[i],max_right[i])-height[i];
            if(temp<0){
                continue;
            }
            else{
                sum+=temp;
            }
        }
        return sum;
    }
};
