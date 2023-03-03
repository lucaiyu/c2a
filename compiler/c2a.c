#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc!=2){
		printf("ERROR: ILLEGAL PARAMS\n");
		return 0;
	}
	printf(*argv);
	return 0;
}


FILE *loadsrc(char *path){
	FILE *src = (FILE*)malloc(sizeof(FILE));
	return src;
}