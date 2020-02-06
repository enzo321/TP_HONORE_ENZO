#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{
	int choix = 0;
	int choix2 = 0;
	
	printf("voulez vous aller au mordor  1 ? ou dans la comptee 2 ?");
	scanf("%d",&choix);
	
	if (choix == 1){
		printf("vous allez au mordor");
	}
	
	if (choix2 == 1){
		printf("vous allez a la comptee");
	}
	
	/*if (strcmp("pd")){
		
		printf("vous etes au mordor");
		
	}
	
	if (comptee == 1){
		
		printf("vous etes a la comptee");
		
	}*/
		
	
	return 0;
}
