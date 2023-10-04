class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp=0,ii=0;
        for(ii=nums.size()-2;ii>=0;ii--)
        {
            if(nums[ii]<nums[ii+1])
            {
                temp=1;
                break;
            }
        }
        if(temp)
        {
         for(int i=nums.size()-1;i>=0;i--)
         {
              if(nums[i]>nums[ii])
              {   int d=nums[ii];
                  nums[ii]=nums[i];
                  nums[i]=d;
                  break;
              }
        }
        }
        if(temp)
        reverse(nums.begin()+ii+1,nums.end());
        else
        reverse(nums.begin(),nums.end());
        return ;
    }
};
