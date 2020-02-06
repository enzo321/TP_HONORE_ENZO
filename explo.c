#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{
	/*int choix1 = 0;
	int choix2 = 0;*/
	
	char mordor[40];
	char comptee [40];
	
	printf("vous voulez alle ou ? mordor ou comptee\n");
	scanf("%s",comptee,mordor );
	//scanf("%s", mordor);
	
	if ( strcmp( mordor, "mordor" ) == 0 ) {
        printf( "vous etes arrive au mordor\n" );
	}
	
	if ( strcmp( comptee, "comptee" ) == 0 ) {
        printf( "vous etes arrive dans la comptee\n" );
	}


	/*if (choix == 1){
		printf("vous allez au mordor");
	}
	
	if (choix2 == 1){
		printf("vous allez a la comptee");
	}*/
	
	/*if (strcmp("pd")){
		
		printf("vous etes au mordor");
		
	}
	
	if (comptee == 1){
		
		printf("vous etes a la comptee");
		
	}*/
		
	
	return 0;
}
