#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0,n,j=0;
 char data[80];
 char temp[80];
 printf("Enter Frames: ");
 scanf("%s",data);
 printf("AT SENDER \n");
 printf("Before Character Stuffing:%s\n",data);
 printf("AT RECEIVER\n");
printf("After Character Stuffing:");
 printf("DLESTX");
 for(i=0; i<strlen(data); i++)
 {
    if(data[i] == 'D' && data[i+1]== 'L' && data[i+2] == 'E'){
              printf("DLE");
                j=j+3;
    }
    printf("%c",data[i]);
    temp[j]=data[i];
    j++;
 }
printf("DLEETX\n");
printf("After Destuffing:");
for(i = 0; i < j; i++)
 {
    if(temp[i] == 'D' && temp[i] == 'L' && temp[i] == 'E'){
            i=i+3;
    }

    printf("%c",temp[i]);

 }
printf("\n");
 return 0;
}
