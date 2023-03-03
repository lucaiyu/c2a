#include <stdio.h>
#include <stdlib.h>

FILE *src;

void loadsrc(){
	src = fopen("test.c", "r");
	char c = fgetc(src);
	printf("first char: %c", c);
}

int main(int argc, char *argv[]){
	if(argc!=2){
		printf("ERROR: ILLEGAL PARAMS\n");
		return 0;
	}
	loadsrc();
	return 0;
}

