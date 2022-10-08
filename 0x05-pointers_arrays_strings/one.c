#include <stdio.h>
int main()
{
	char arr[]="He loves programming";
	char *ptr;
	ptr = arr;
	int i,j,len;
	printf("Vaue of i before anything = %d",i);
	printf("string :%s\n",arr);
	printf("first character = %c\n", *ptr);
	for(i = 0; arr[i] != '\0'; i++)
		printf("value of i = %d:\n",i);
	printf("Length is %d",i);
	len = i;
	for(j=len-1 ;j>=0;j--)
	{
		printf("Elements %c \n",arr[j]);
	}
		
	return (0);
}
