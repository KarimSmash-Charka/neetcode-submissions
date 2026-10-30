class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multiply=1;
        bool count=false;
        bool continous=false;
        int k=0;
        for(int i=0;i<nums.size();i++){
            // multiply*=nums[i];
            if(nums[i]!=0){
                multiply*=nums[i];
            }
            else{
                multiply*=1;
                k++;
                count=true;
            }
        }
        if(k>=2){
            continous=true;
        }
        vector<int>result;
        cout<<endl;
        cout<<"k:"<<k<<endl;
        cout<<nums.size()<<endl;
        cout<<multiply<<endl;
        if(continous==true){
            cout<<1;
        }
        else{
            cout<<0;
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            // int temp = 
            // result.push_back(temp);
            if(continous==true){
                result.push_back(0);
            }
            else{
                if(count==true){
                    if(nums[i]==0){
                        int temp = multiply;
                        result.push_back(temp);
                    } 
                    else{
                        result.push_back(0);
                    }
                }
                else{
                    int temp = multiply/nums[i];
                    result.push_back(temp);
                }
            }
            // else if(nums[i]==0){
            //     int temp = 
            // }
        }
        return result;
    }
};
