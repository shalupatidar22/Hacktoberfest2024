#include<iostream>
#include<vector>
using namespace std;
long long maxSubarraySum(vector<int> &arr) {
        
       long long sum=0;
       long long maxsum=0;
       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           if(sum>maxsum){
               maxsum=sum;
           }
           if(sum<0){
               sum=0;
           }
       }
       return maxsum;
    }

int main(){
    int N;
    cin>>N;
    vector<int> ar(N);
    for(int i=0;i<N;i++){
        cin>>ar[i];
    }

    cout<<maxSubarraySum(ar);
}
