#include "../include/newfile.h"

status_code create_file(newfile *file) {
	printf("allocating memory..\n");
	{
		file = (newfile *) malloc(sizeof(newfile));
    	}

        if (file == NULL) {
                printf("failed to allocate memory.\n");
                exit(FAILED_);
	}

	printf("creating file..\n");
       	*file->name = "file/file.txt";
        file->fileptr = fopen(*file->name, "w+");

        if (file->fileptr == NULL) {
		printf("failed to create file.\n");
                return FAILED_;
	} else {
                return SUCESS_;
	}
}
status_code free_filemem(newfile *file) {
	free(file);
	return SUCESS_;
}
