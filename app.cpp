#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dnfSort(vector<int>&nums,int size){
    int low=0;
    int mid=0;
    int high=size-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
                mid++;
            }
        else if(nums[mid]==2){

                swap(nums[mid],nums[high]);
                high--;

            }
        
    }

}


int main(){
    int n;
    cin>>n;
    vector<int>ara(n,0);
    for(int i=0;i<ara.size();i++){
        int temp;
        cin>>temp;
        ara[i]=temp;
    }

    dnfSort(ara,n);

    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }

}
