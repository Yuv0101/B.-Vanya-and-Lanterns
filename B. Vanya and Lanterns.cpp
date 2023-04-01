#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()
   

using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    
    int d=2*max(arr[0] , l-arr[n-1]);

    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i] > d)
          d=arr[i+1]-arr[i];
    }

    cout<<fixed<<setprecision(10)<<(double)d/2<<endl;
}