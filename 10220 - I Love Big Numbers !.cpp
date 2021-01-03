#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
 int res[MAX];
int multiply(int res[],int x,int size)
{
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int product=res[i]*x+carry;
        res[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
      res[size]=carry%10;
      carry/=10;
      size++;

    }
return size;
}
int main()
{

 int n;
 while(cin>>n&&n!=0)
 {
     map<int,int>mp;
     long long sum=0;
   res[0]=1;
   int size=1;
   for(int i=2;i<=n;i++)
   {
       size=multiply(res,i,size);
   }
   for(int i=size-1;i>=0;i--)
   {
    sum+=res[i];
   }
   cout<<sum<<endl;




 }



  return 0;
}
