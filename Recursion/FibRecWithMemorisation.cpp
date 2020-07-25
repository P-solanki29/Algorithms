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
#define fo(i,a,b) for (size_t i = a; i <= b; ++i)
typedef long long ll;
typedef  __intptr_t llint;
const long double eps = (long double)1e-9;

using namespace std;


int arr[100];
int Fib(int n){
    if(arr[n] != -1){
        return arr[n];
    }
    else
    {
        arr[n] = Fib(n-1)+ Fib(n-2);
        return arr[n];
    }
    

}
int32_t main(){
    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t = 1; //cin >> t;
    while (t--){
        cout<<"Enter a number: "<<endl;
        for (size_t i = 0; i < 100; i++)
        {
            arr[i] = -1;
        }
        arr[0] =0, arr[1] =1;
        int n;
        cin>>n;
        int ans =  Fib(n);
        cout<<ans<<endl;
        
    }
}