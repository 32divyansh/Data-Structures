include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
        
        int sum=0;
        int ans=INT_MIN;
        int i=0,j=0;
        while(j<N)
        {
            sum+=Arr[j];
              if(j-i+1<  K)
            {
               
                j++;
                continue;
            }
            
             if(j-i+1==K)
            {
                ans=max(sum,ans);
                sum-=Arr[i];
                i++;
                j++;
             }
            
            
        }
        
        return ans;
        
        
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,ARR,N)<<endl;
    }
    return 0;