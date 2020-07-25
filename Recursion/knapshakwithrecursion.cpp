/*

*-----------------------------------------------------------*
|                                                           |
|                                                           |
|               AUTHOR: Pawan Solanki                       |
|                                                           |
|                                                           |
|                                                           |
*-----------------------------------------------------------*

*/

#include<bits/stdc++.h>
#define moduli 9460700327
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define um unordered_map
#define endl "\n"
#define fo(i,a,b) for (size_t i = a; i < b; ++i)
typedef long long ll;
typedef  __intptr_t llint;
const long double eps = (long double)1e-9;

using namespace std;

int knapsack(int wt[], int val[], int capacity, int n){
    //Base condition
    int value =0;
    if(n == 0 || capacity == 0){
        return 0;
    }
    else if(wt[n-1]<=capacity) {
        return max(val[n-1]+knapsack(wt,val,(capacity-wt[n-1]),n-1), knapsack(wt, val,capacity,n-1));
    
    }
    else if(wt[n-1]>capacity){
        return knapsack(wt, val, capacity, n-1);
    }
}

int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n;
        cin>> n;
        int wt[n];
        int val[n];
        int capacity;
        fo(i,0,n){
            cin>>wt[i];
        }
        fo(i,0,n){
            cin>>val[i];
        }
        cin>> capacity;
        int maxProfit = knapsack(wt, val, capacity, n);
        cout<<maxProfit<<endl;
        
    }
}