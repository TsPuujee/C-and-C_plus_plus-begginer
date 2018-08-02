#include<stdio.h>
#include<conio.h>
main( )
{
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int d,m,y,nd,nm,ny,ndays,s;
printf("Odroo oruul:"); scanf("%d",&d);
printf("Saraa oruul:"); scanf("%d",&m);
printf("jilee oruul:"); scanf("%d",&y);
printf("heden odriin daraa we: "); scanf("%d", &s);
ndays=month[m-1];
if(m==2)
   if(y%100==0)
     {
      if(y%400==0)
      ndays=29;
     }
   else
      if(y%4==0)
      {
      ndays=29;
      }
nd=d+s;
nm=m;
ny=y;
if(nd>ndays)
         {
          nd=(nd%ndays);
          nm=nm+(nd/ndays);
         }
if(nm>12)
{
nm=1;
ny++;
}
printf("Ogson ognoo: %d:%d:%d\n",y,m,d);
printf("Daraagiin odor: %d:%d:%d",ny,nm,nd);
getch( );
}

