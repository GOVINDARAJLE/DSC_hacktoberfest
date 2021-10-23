#include <bits/stdc++.h>
//23/10/2021
using namespace std;

int gcd(int a,int b)
{if(b==0)return a;
return gcd(b,a%b);
}
int main() {
      int t;
      cin>>t;
      while(t--)
      {
            int n,g=0;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            cin>>a[i];
            g=gcd(a[0],a[1]);
            for(int i=2;i<n;i++)
            g=gcd(g,a[i]);
            for(int i=0;i<n;i++)
            cout<<a[i]/g<<" ";
            cout<<endl;
      }
	return 0;
}
