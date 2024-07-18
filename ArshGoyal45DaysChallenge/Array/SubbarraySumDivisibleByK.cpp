class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0,sum=0;
        mp[0]=1;

        for(auto &it:nums){
            sum+=it;
            int rem=sum%k;

            if(rem<0)
                rem+=k;
                
            if(mp.find(rem)!=mp.end())
                count+=mp[rem];

            if(mp.find(rem)==mp.end())
                mp[rem]=1;
            else
                mp[rem]++;
        }
        return count;
    }
};
