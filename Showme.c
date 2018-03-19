#include<stdarg.h>
#include"Showme.h"
#include<stdio.h>
#define MAX 4096

/*
int Show_length(char* input){
	
	char arr[MAX]; 
	//arr=input;	
	int cnt=0, i=0;

	while(input[i]!='\0'){
		cnt++;
		i++;
	}
	
return cnt;

}

int Show_atoi(char input[]){
	int i=0;
	int num=1, leng1=0, leng2=0, add=0, what=0;

	leng1=Show_length(input);
	leng2=leng1;

	leng1--;
	while(leng1--){
		num*=10;
	}
	while(leng2--){
		if(input[i]>'0'&&input[i]<'9'){	
			add+=num*(input[i]-'0');
			num/=10;
			i++;
		}
		
	}
	return add;

	if(input[i]<'0'||input[i]>'9')
		return input[i];
		
}
int Show_atoi_int(int input){
        int i=0;
        int num=0;
        char tmp[15];

	while(input){ 
                tmp[i]=input%10+'0';
		input/=10;
		i++;
        }	

return num;
}

*/

void Showme(const char* input,...){

	va_list list;
	int cnt=0,leng=0;
	int i=0,j=0;
	char arr[MAX];
	char word;

	va_start(list,input);

	for(i=0;input[i]!='\0';i++){
		
		if(input[i]=='%'){
			leng=0;
			cnt=0;
			i++;	
			if(input[i]>'0'&&input[i]<'9'){
				while(input[i]>'0'&&input[i]<'9'){
					i++;
					leng++;	
				}
				 for(j=0;j<leng+5;j++){
                                	arr[j]=0;
                       		 }
				printf("2-2-2-2-");
				cnt=Show_atoi(arr);
			}
			char chr;
        		switch(input[i]){ 
              			case 'c':
					if(cnt!=0){
                	       			while(cnt--){    
               		       		 		print((char)(va_arg(list,char)));
							printf("101010");
						}
					}
					else{
						if(input[i]=='c'){
							print((char)va_arg(list,char));
							printf("292929");
						}
						if(input[i]=='C'){
							
							chr=(char)va_arg(list,char);
							chr
                                                        printf("292929");

						}
					}	
					break;
                                               
 		                int arr1;
   		 	        char input2[13];
				int i=0;
	
                		case 'd':
						
					printf("!!!!!");
					arr1=(int)va_arg(list,int);

					while(arr1){	
						input2[i]=(arr1%10)+'0';
						arr1/=10;
						i++;
					}
					i--;
					while(i>=0){
						print(input2[i]);
						i--;
					}
					break;

				char* arrr; 

                		case 's': 
					arrr=(char *)va_arg(list,char*);	
					while(*arrr!='\0'){ 
                                        	print(*arrr);
						arrr++;
                                        }

                                        break;

                		case 'u':
				       printf("!!!!!");
                                        arr1=(int)va_arg(list,int);

                                        while(arr1){
                                                input2[i]=(arr1%10)+'0';
                                                arr1/=10;
                                                i++;
                                        }
                                        i--;
                                        while(i>=0){
                                                print(input2[i]);
                                                i--;
                                        }
                                        break;


	
					break;
				
				int x_var;
				char array[10]; 
				int rest;
				int z;
                		case 'x': case 'X':	
					z=0;
					printf("===xxxxx===");
                                        x_var=(int)va_arg(list,int);
					
					while(1){
						rest=x_var%16;
						
						if(rest<10){
							array[z]='0'+rest;		
						}
						else{
							array[z]='A'+(rest-10);
						}
						x_var/=16;
						z++;
						if(x_var==0)
							break;
                                       	}
                                        z--;
					
					if(input[i]=='x'){
                                        	print('0');
						print('x');
					}
					if(input[i]=='X'){
						print('0');
                                                print('X');
                                        }

					while(i>=0){
                                                print(array[i]);
                                                i--;
                                        }					
                                        break;

			}
		}
		else{
			print(input[i]);				
		}
	}
}	
