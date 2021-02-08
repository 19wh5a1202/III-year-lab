#include<stdio.h>
int main() {
int f_size,sent=0,ack,i;
printf("enter number of frames:");
scanf(" %d",&f_size);
while(1)
{
for(i=0;i<f_size;i++)
{
printf("frame %d has been transmitted.\n",sent);
sent++;
if(sent==f_size)
break;
}
printf("\nplease enter the last acknowledgement received.\n");
scanf("%d",&ack);
if(ack>=f_size)
break;
else
sent=ack;
}
return 0;
}
