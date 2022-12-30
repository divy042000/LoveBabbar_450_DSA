//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
     int count_0=0;
     int count_1=0;
     int count_2=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]==0){count_0++;}
         else if(a[i]==1){count_1++;}
         else if(a[i]==2){count_2++;}
     }
     int i=0;
     while(count_0--)
     {
         a[i]=0;i++;
     }
     while(count_1--)
     {
         a[i]=1;i++;
     }
     while(count_2--)
     {
         a[i]=2;i++;
     }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
