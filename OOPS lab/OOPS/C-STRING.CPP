#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
class String
{
char str[100];
public:
String()
{
	int length;
	cout<<"Enter the String:"<<endl;
	cin>>str;
	length=strlen(str);
}
String (char strc[20])
{
	strcpy(str,strc);
}
String(String &s,String &s1)
{
	strcat(s.str,s1.str);
	cout<<"AFTER CONCATENATION:\n";
	cout<<s.str<<endl;
}

void occuarance()
{
int count=0,c=0,k,size,length;
char sub[10];
cout<<"Enter the Sub String:\n";
cin>>sub;
length=strlen(str);
size=strlen(sub);
for(int i=0;i<=length-size;i++)
{
	k=0;
	for(int j=0;j<size;j++)
	{
		if(str[i+j]!=sub[j])
		{
			k=1;
			break;
		}
	}
	if(k==0)
		count++;
}
if(count>0)
	cout<<"The Number of occurance of the String:"<< count<<endl;
else
	cout<<"count="<<count<<"\n The Sub string in the given string is not found...!!"<<endl;
}

void replace()
{
int count=0;
char chr,rchr;
cout<<"Enter the Character that is to be replaced:\n";
cin>>chr;
cout<<"Enter the Character for replacing.....\n";
cin>>rchr;
for(int i=0;i<strlen(str);i++)
{
	if(str[i]==chr)
	{
		str[i]=rchr;
		count=count+1;
	}
}
if(count>0)
	cout<<"Modified String is:"<<str<<endl;
else
	cout<<chr<<"is not present in the string"<<str<<endl;
}

};

void main()
{
clrscr();
String s1;
int ch;
char sub1[100];
while(1)
{
	cout<<"1.To Concatenate the string\t2.To find the Occurance\n3.To replace\t4.exit\n";
	cout<<"Enter the choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter the string to concatenate:\n";
			cin>>sub1;
			String s2(sub1);
			String s3(s1,s2);
			break;
		case 2:
			s1.occuarance();
			break;
		case 3:
			s1.replace();
			break;
		case 4:
			exit(0);
	}
}
getch();
}