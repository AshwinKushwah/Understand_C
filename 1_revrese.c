#include <stdio.h>
#include<string.h>
int main(void) {
	
	char  data [] = "Ashwin Kushwah";
	int l = strlen(data);
	char  reverse[l];
	
	int i = 0;
	for(i=0; i<=l; i++)
	{
	    reverse[l-i] = data[i];
	}
	
	for(i=0; i<=l; i++)
	{
	  printf("%c", reverse[i]);
	}
	
	return 0;
}

