//Progra to chack Given String is Palindrom or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
int main(void) {
	
	  char data[100];
	  scanf("%s",&data); 
	  bool flag = true;
	  int length = strlen(data);
	 
	 for(int i=0; i<length; i++)
	  {
	      if(data[length-i-1] != data[i])
	      {
	           flag = false;
	           break;
	      }
	  }
	  
	  if(flag)
	    printf("string = %s is palindrom", data);
	  else
	    printf("string = %s is not palindrom", data);
	   
	return 0;
}

