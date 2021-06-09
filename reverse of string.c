#include <stdio.h>

int main(void) {
	// your code goes here
	//rev of string
	
	char temp;
    char name[] = {'1', '2', '3', '4', '5', '6'};
	int soa;
	int mid;
	int i;
	soa = sizeof(name);
//	printf("%d",soa);
	
	mid = soa/2;
//	printf("\n%d",mid);
	
	printf("\n\n----------------------------- \n");
	printf("%s\n",name);
	
	for(i=0; i<mid;i++){
	 temp=name[i];
	 name[i]=name[soa-1-i];
	 name[soa-1-i]=temp;
	}
    
    //for(i=0;i<soa;i++){
	    printf("%s",name);
//	}
	
	
	//end of code
	return 0;
}

