#include<iostream.h>
#include<conio.h>
#include<string.h>

class STRING
{
char str[40];
public:
	STRING();
	STRING(char s[]);
	STRING(STRING &s);
	STRING operator +(STRING);
	friend ostream &operator<<(ostream &,STRING &);
};

STRING::STRING()
{
	str[0]='\0';
}

STRING::STRING(char s[])
{
	strcpy(str,s);
}

STRING::STRING(STRING &s)
{
	strcpy(str,s.str);
}

STRING STRING::operator +(STRING s1)
{
	return(strcat(str,s1.str));
}

ostream &operator<<(ostream &print,STRING &s1)
{
	print<<s1.str;
	return print;
}

void main()
{
clrscr();
char name1[20],name2[20];
cout<<"Enter two names:\n";
cin>>name1>>name2;
STRING s1(name1);
cout<<"NAME 1:"<<s1<<endl;
STRING s2(name2);
cout<<"NAME 2:"<<s2<<endl;
STRING s3=(s1+s2);
cout<<"NAME 3:"<<s3<<endl;
getch();
}
