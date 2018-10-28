#include<iostream.h>
#include<conio.h>
class stud
{ public:
char a[3][3];
};
void main()
{   clrscr(); stud obj;
cout<<"the minesweeper \n";
cout<<"\n dont step on the mine\n you have two lives\n";
int i,x,y,c=0,d=0;

for(i=1;i<4;i++)
{
for (int j=1;j<4;j++)
{
obj.a[i][j]='#';
}
}
for(i=1;i<4;i++)
{
for (int j=1;j<4;j++)
{
cout<<obj.a[i][j]<<"\t";
}
cout<<"\n";
}

for (int b=0;b<9 ;b++)
{
cout<<"\n enter the position(first x and then y)=\n ";
cin>>x>>y;

if ((x==1)&&(y==2))
{cout<<"you loose a life\n";c++; obj.a[1][2]='*';
for(i=1;i<4;i++)
{
for (int j=1;j<4;j++)
{
cout<<obj.a[i][j]<<"\t";
}
cout<<"\n";
}
}
if ((x==2)&&(y==2))
{cout<<"you loose a life\n";c++; obj.a[2][2]='*';
for(i=1;i<4;i++)
{
for (int j=1;j<4;j++)
{
cout<<obj.a[i][j]<<"\t";
}
cout<<"\n";
}
}
if(c==2)
{cout<<"you loose \n";break;}
if(d==6)
{cout<<"you win\n ";break;}
 else if ((x>3)||(y>3))
 {
 cout<<"invalid entry\n";  break;
 }

 else if(((x!=1)&&(y!=2))||((x!=2)&&(y!=2)))
 { obj.a[x][y]='\0';
 for(i=1;i<4;i++)
{
for (int j=1;j<4;j++)
{
cout<<obj.a[i][j]<<"\t";
}
cout<<"\n";
}

 d++;
 }

  }

 getch();
 }