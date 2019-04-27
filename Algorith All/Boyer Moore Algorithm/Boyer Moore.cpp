//#include<conio.h>
#include<stdio.h>
#include<string.h>
int max(int a,int b){
   return a>b?a:b;
}
int main()
{
   char patt[100];
   char text[100];
   int i,j=0,m,n,found=-1;
   int count=0;
   int idx[200]={0};
//   clrscr();
   printf("Enter Text: ");
   gets(text);
   printf("Enter Pattern: ");
   gets(patt);
   n=strlen(text);
   m=strlen(patt);
   for(i=97;i<=122;i++){
       idx[i]=m;
   }
   for(j=0;j<m;j++)
       idx[patt[j]]=m-j-1;
   i=m-1;
   while(i<n){
       j=m-1;
       while(j>=0 && text[i]==patt[j]){
	   i=i-1;
	   j=j-1;
	   count++;
       }
       if(j==-1){
	   found=i+1;
	   break;
       }
       i=i+max(idx[text[i]],m-j);
       count++;
   }
   if(found==-1)
      printf("Pattern not found.");
   else
      printf("%s found at %d position",patt,found+1);
   printf("\nTotal Comparisons: %d",count);
   //getch();
return 0;
}
