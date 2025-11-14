#include<stdio.h>
#include<string.h>
int main()
{
 int i,j;
 char word[4][20] = {"Apple","Grapes","Kiwi","orange"};
 strcpy(word[1],"Biryani");
 
 for(i=0;i<4;i++)
 {
 	printf("%s",word[i]);
 	printf("%d",strlen(word[i]));
 	printf("\n");
 	{
 		for(j=0;j<strlen(word[i]);j++)
 		{
 			printf("\n%c",word[i][j]);
		 }
	 }

 	printf("\n");
 }
     return 0;	
}
