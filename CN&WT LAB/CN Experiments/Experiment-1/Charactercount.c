#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char c[10][10];
	int h[10];
	printf("Enter no of frames:");
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		printf("Frame %d:",i+1);
		scanf("%s",c[i]);
	}
	for (int i=0;i<n;i++) {
		h[i] = strlen(c[i]);
	}
    printf("\nAT THE SENDER\n");
	printf("Data as frames:\n");
	for (int i=0;i<n;i++) {
		printf("Frame %d:%ld %s",i+1,strlen(c[i]),c[i]);
		printf("\n");
	}printf("\nAT THE RECEIEVER\n");
	printf("Data received\n");
	for (int i=0;i<n;i++) {
		printf("Frame %d:%s\n",i+1,c[i]);
	}
	return 0;
}
