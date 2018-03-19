#include<stdarg.h>
#include"Showme.h"
#include<stdio.h>

int main(){
	printf("%d", 11);	
	char c='c';

	Showme("ABCAA**%c**%c",128, c);
	Showme("ABCAA**%d**%d**%d",128, 69,c);
	Showme("aaabbb%s %s","hello!","123123"); 
	Showme("qpqp %x %x",256,9999);

return 0;
}
