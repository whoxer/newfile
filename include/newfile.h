#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SUCESS_ 1
#define FAILED_ 0

typedef int status_code;

typedef struct {
	FILE *fileptr;
	char *name[20];
	status_code *s;
} newfile;

status_code create_file(newfile *file);
status_code free_filemem(newfile *file);
