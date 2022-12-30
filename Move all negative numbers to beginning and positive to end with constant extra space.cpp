//Link : 
/* Notes :

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
#define int long long int
#define loop(a,b) for(int i=a;i<b;i++)
#define loop1(a,b) for(int i=a;i>=b;i--)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
ios_base::sync_with_stdio(false); cin.tie(NULL);
int t,n;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> vec;
for(auto i=0;i<n;i++)
{
    int k;
    cin>>k;
    vec.push_back(k);
}
sort(vec.begin(),vec.end());
for(int i=0;i<n;i++)
{
    cout<<vec[i]<<" "<<;
}
}
return 0;
}
