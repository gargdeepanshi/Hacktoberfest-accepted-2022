class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<nums.size()-2;i++)
        {
            // if(i>0 && nums[i]==nums[i-1])
            // {
            //     continue;
            // }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};
