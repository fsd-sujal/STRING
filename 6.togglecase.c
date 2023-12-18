#include<stdio.h>

int main (){
	
	char name[15];
	printf("Enter Name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0 ; i<=15 ; i++){
		if(name[i]>='a' && name[i]<='z'){
		
		name[i] -= 32;
		}
		else if(name[i]>='A' && name[i]<='Z'){
			
			name[i] += 32;
		}
	}
	printf("%s",name);
	
	return 0;
}
