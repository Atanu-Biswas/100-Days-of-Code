class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int ans = INT_MAX;
    
    for(int i=0;(i+m)<n+1;i++){
        if(a[i+m-1]-a[i] < ans)
        {ans = a[i+m-1]-a[i];}
            
           
        
    }
        
    return ans;
    }   
};
