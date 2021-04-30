/*  Street Lights One of the streets in your city has a total of L street lights. Each light i covers the street from
Xi to Yi distance. Find the length of street covered with light.
Input Specification:
input1: L, denoting the number of street lights.
input2: An array of L* 2 elements. For each row i, (Xi, Yi) denote that the
street light i covers the distance from Xi to Yi.
Output Specification:
Your function should return the length of the street covered with light.
Example 1:
input1: 1,
input2: {{5,10 } }
Output: 5​ 


*/


#include<iostream>
using namespace std;
int find();
int main()
{
int c=find();
cout<<c;
return 0;
}
int find()
{
int n;
cin>>n;
int i,j,p,q;
int a[n][2],max,min;
cin>>a[0][0]>>a[0][1];
min=a[0][0];max=a[0][1];
for(i=1;i<n;i++)
{
cin>>a[i][0]>>a[i][1];
if(min>a[i][0])
min=a[i][0];
if(max<a[i][1])
max=a[i][1];
}
int b[max+1];
for(i=0;i<max+1;i++)b[i]=0;
for(i=0;i<n;i++)
{
p=a[i][0];
q=a[i][1];
while(p<q)
{
b[p]=1;
p++;
}
}
int k=0;
for(i=0;i<max+1;i++)
{
if(b[i]==1)
k++;
}
return k;
}

