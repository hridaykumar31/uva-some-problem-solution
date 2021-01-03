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
   res[0]=1;
   int size=1;
   for(int i=2;i<=n;i++)
   {
       size=multiply(res,i,size);
   }
   for(int i=size-1;i>=0;i--)
   {
     mp[res[i]]++;
   }

       cout<<n<<"!"<<" "<<"--"<<endl;
       cout<<"    "<<"("<<0<<")"<<"   "<<mp[0]<<"   "<<"("<<1<<")"<<"   "<<mp[1]<<"   "<<"("<<2<<")"<<"   "<<mp[2]<<"   "<<"("<<3<<")"<<"   "<<mp[3]<<"   "<<"("<<4<<")"<<"   "<<mp[4]<<endl;
       cout<<"    "<<"("<<5<<")"<<"   "<<mp[5]<<"   "<<"("<<6<<")"<<"   "<<mp[6]<<"   "<<"("<<7<<")"<<"   "<<mp[7]<<"   "<<"("<<8<<")"<<"   "<<mp[8]<<"   "<<"("<<9<<")"<<"   "<<mp[9]<<endl;


 }



  return 0;
}
