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
int t;
cin>>t;
vector<int> vec;
for(auto i=0;i<t;i++)
{
int k;
cin>>k;
vec.push_back(k);
}
int start=0;
int end=vec.size()-1;
while(start<=end)
{
    swap(vec[start],vec[end]);
    start++;
    end--;
    
}
for(auto i=0;i<vec.size();i++)
{
    cout<<vec[i]<<" ";
}
return 0;
}
