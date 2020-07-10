#include <bits/stdc++.h>

using namespace std;

int BianrySrearch(int arr[], int low, int high, int x){
   
        int mid = (low+(high-low)/2);
        if(low>high){
            return -1;
        }
        else if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]> x){
         return BianrySrearch(arr, low, mid-1, x);
        }
        else{
         return BianrySrearch(arr, mid+1, high, x);
        }
    }

int main(){
    int arr[] = {2,3,12,13,15,17,23};
     int low = 0, high = 7;
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    int index = BianrySrearch(arr,low,high, x);
    if(index != -1){
        cout<<"The element is present ai index: "<< index;
    }
    else
    {
        cout<<"Element doesn't present in array.";
    }

}