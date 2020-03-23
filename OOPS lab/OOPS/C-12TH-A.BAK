#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class shape
{
public:
	virtual float getarea()=0;
};

class rectangle:public shape
{
private:
	float width,height;
public:
rectangle()
{
}
float getarea()
{
float area1;
cout<<"area of rectangle:\n";
cout<<"enter the width and height"<<endl;
cin>>width>>height;
area1=width*height;
cout<<"width="<<width<<"\t"<<"height="<<height<<"\t"<<endl;
return(area1);
}
};

class ellipse:public shape
{
private:float major,minor;
public:
ellipse()
{
}
float getarea()
{
float area2;
cout<<"area of ellipse:\n";
cout<<"enter  the major and minor"<<endl;
cin>>major>>minor;
area2 = major*minor*3.14;
cout<<"major="<<major<<"\t"<<"minor="<<minor<<"\t"<<endl;
return(area2);
}
};

class canvas
{
float f;
public:
void display(shape &sh)
{
f=sh.getarea();
cout<<"area="<<f<<endl;
}
};

void main()
{
clrscr();
rectangle r;
ellipse e;
canvas c;
c.display(r);
c.display(e);
getch();
}