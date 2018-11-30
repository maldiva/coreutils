#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

int main() {
	char cwd[4096];
	getcwd(cwd, sizeof(cwd));
	DIR *fd = opendir(cwd);
	struct dirent *f = NULL;
	while ((f = readdir(fd)) != NULL) {
	write(1,f->d_name,strlen(f->d_name));
	write(1," ",1);
	}
	write(1,"\n",1);
	return 0;
}

