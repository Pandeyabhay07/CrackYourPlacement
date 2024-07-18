class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        long long ans;
        sort(a.begin(),a.end());
        
        long long i=0,j=0;
        
        while(j<n){
            
            if(j-i+1==m){
                ans=min(ans,a[j]-a[i]);
                
                i++;
            }
            j++;
        }
        return ans;
    
    }   
};

