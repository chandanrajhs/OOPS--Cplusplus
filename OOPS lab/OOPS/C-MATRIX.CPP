#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class matrix
{
private:int r,c,**m;
public:
 matrix()
 {
 c=0;
 r=0;
 }
 matrix(int x,int y);
 int operator==(matrix);
 matrix operator * (matrix);
 matrix operator * (int);
 friend ostream &operator<<(ostream &out,matrix &);
 friend istream &operator>>(istream &in,matrix &);
 };
 matrix::matrix(int x,int y)
 {
 r=x;
 c=y;
 m=new int*[r];
 for(int i=0;i<r;i++)
 m[i]=new int [c];
 }
 matrix matrix::operator *(int p)
 {
 matrix m4(r,c);
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  m4.m[i][j]=m[i][j]*p;
  }
  return m4;
  }
  int matrix::operator==(matrix m1)
  {
  if(m1.c==r)
  return 1;
  else
  return 0;
  }
  matrix matrix::operator *(matrix m1)
  {
  matrix temp(r,m1.c);
  int i,j,k;
  for(i=0;i<r;i++)
  {
  for(j=0;j<m1.c;j++)
  {
  temp.m[i][j]=0;
  for(k=0;k<c;k++)
  {
  temp.m[i][j]+=m[i][k]*m1.m[k][j];
  }
  }
  }
  return temp;
  }
   ostream &operator<<(ostream &out,matrix &m1)
   {
      int i,j;
	for(i=0;i<m1.r;i++)
	{
	for(j=0;j<m1.c;j++)
	{
	out<<m1.m[i][j]<<"\t";
	}
	out<<endl;
	}
	return(out);
	}

 istream   &operator>>(istream &in,matrix &m1)
 {
 int i,j;
  for(i=0;i<m1.r;i++)
  {
  for(j=0;j<m1.c;j++)
  in>>m1.m[i][j];
  }
  return(in);
  }
  void main()
  {
  int m,n,p,q,c;
  clrscr();
  cout<<"enter the order of first matrix\n"<<endl;
  cin>>m>>n;
  matrix m1(m,n);
  cout<<"enter the order of second matrix\n"<<endl;
  cin>>p>>q;
  matrix m2(p,q);
  if(!(m1==m2))
   {
   cout<<"matrix cannot be multiplied...\n"<<endl;
   exit(0);
   }
   else
   {
   cout<<"enter element of first matrix\n"<<endl;
   cin>>m1;
    cout<<"enter element of second  matrix\n"<<endl;
   cin>>m2;
   matrix m3(m,n);
   m3=m1*m2;
   cout<<"resultant matrix is/n"<<endl;
   cout<<m3;
   }
   cout<<"enter constant to multiply with second matrix"<<endl;
   cin>>c;
   matrix m4(p,q);
   m4=m2*c;
   cout<<m4;
   getch();
   }



