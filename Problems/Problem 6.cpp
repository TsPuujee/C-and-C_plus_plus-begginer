//Ogogdson zawsart baigaa anhnii toog oruul.
#include<stdio.h>
int Ankh(int num); //Ankh gedeg ded funct zarlaj baina.
int main() 
{
   int n1,n2,i,flag;
   printf("Dood hyzgaaraa oruul:"); scanf("%d",&n1);
   printf("Deed hyzgaaraa oruul:"); scanf("%d",&n2);
   printf("Tany oruulsan hyzgaart baigaa anhny too:\n");
   for(i=n1+1;i<n2;++i)
   {
      flag=Ankh(i); //Ankh funct-iig duudaj bna.
      if(flag==0)
         printf("%d\t",i);
   }
   return 0;
}
int Ankh(int num) //ankh gegeg funct ehelj baina.
{
   int j,flag=0; // j-huwsagch zarlasan bogood ter ni dawtaltyn utgiig ilerhiilne.
   for(j=2;j<=num/2;++j) //oruulsan toog hagasd ni hurtel negeer nemegduulj baina.
   {
        if(num%j==0) // num-iig j huwaahad uldegdel ni 0 bain uu esehiig shalgaj bna.
		{
            flag=1; //herwee huwaagch oldwol flag 1 gesen utga olgood duusgana. 
            break;
        }
   }
   return flag; // flag-iin utgiig butsaana.
}
