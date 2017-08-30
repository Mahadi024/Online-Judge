#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc,n,b,c=0;
    scanf("%d",&tc);
    while(tc--)
    {
        int a=0;
       scanf("%d",&n);
       while(n--)
       {
           scanf("%d",&b);
           a=max(a,b);
       }
       cout<<"Case "<<++c<<": "<<a<<endl;
   }

    return 0;
}
