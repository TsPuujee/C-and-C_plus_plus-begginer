#include<stdio.h>
int main(){

    int i,m,l,s=0;
    long int arr[50];
    arr[0]=1;
    arr[1]=1;

    for(i=2;i<=40;i++)
	   {
       arr[i] = arr[i-1] + arr[i-2];
       }
  printf("Bodolt:1\n40-r gushuun: %ld",arr[40]);
  printf("\nBodolt:2\nm="); scanf("%d",&m);
    for(i=2;;i++)
	   { 
	    arr[i] = arr[i-1] + arr[i-2];
	    if(m<arr[i]) break;
       }
    printf("%d toonoos ih baih anhnii fibanochiin too: %ld",m,arr[i]);
      for(i=0;;i++)
	   {
       s=s+arr[i];
       if(arr[i]>1000) break;
       }
    printf("\nBodolt:3\n1000-aas baga fibanochiin toony niilber: %d",s);  
    return 0;
}

