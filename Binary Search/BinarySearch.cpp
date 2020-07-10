#include <bits/stdc++.h>

using namespace std;

int BianrySrearch(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]> x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,3,12,13,15,17,23};
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    int index = BianrySrearch(arr, 7, x);
    if(index != -1){
        cout<<"The element is present ai index: "<< index;
    }
    else
    {
        cout<<"Element doesn't present in array.";
    }

}