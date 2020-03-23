#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
template<class X>
class search
{
X a[20],item;
int i,j,n;
public:
void input()
{
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(i=1;i<=n;i++)
cin>>a[i];
cout<<"Enter the elements to be search"<<endl;
cin>>item;
}
void binary()
{
int low,high,mid;
low=0;
high=mid+1;
int su=0;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==item)
{
cout<<"elements found at:"<<mid<<endl;
return;
}
else
{
 su=1;
}
if(a[mid]==item)
high=mid-1;
else
low=mid+1;
}
if (su==1)
{
cout<<"the element is not found"<<endl;
}
}

void linear()
{
int su=0;
for(i=1;i<=n;i++)
{
if(a[i]==item)
{
cout<<"Element found at:"<<i<<endl;
return;
}
else
{
 su=1;
}
}
if(su==1)
{
cout<<"the element is not found"<<endl;
}
}
int compute()
{
if(check()==1)
{
linear();
}
else
{
binary();
}
}
int check()
{
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
{
if(a[j]>a[i])
continue;
else
return 1;
}
}
};

void main()
{
clrscr();
cout<<"Enter the integer value\n"<<endl;
search<int>s1;
s1.input();
s1.compute();
cout<<"Enter the float value"<<endl;
search<float>s2;
s2.input();
s2.compute();
cout<<"Enter the character value"<<endl;
search<char>s3;
s3.input();
s3.compute();
getch();
}