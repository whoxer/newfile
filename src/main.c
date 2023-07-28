#include "../include/newfile.h"

int main(int argc, char **argv) {
        newfile file;

        create_file(&file);

	if (file.fileptr != NULL) { 
		printf("file created with sucess(%d) at %p.\n", SUCESS_, file.fileptr);
	} else if (file.fileptr == NULL) {
		printf("failed(%d)", FAILED_);
	}

//	free_filemem(&file);	

        return SUCESS_;
}
