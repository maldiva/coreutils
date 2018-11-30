#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_LENGTH 1024
char inout_buffer[BUFFER_LENGTH];

int main(int argc, char** argv) {

	int source = openat(AT_FDCWD, argv[1], O_RDONLY);
	int destination = openat(AT_FDCWD, argv[2], O_WRONLY|O_CREAT|O_EXCL, 0664);
	ssize_t bytes_read;

	while ( (bytes_read = read(source,inout_buffer,BUFFER_LENGTH)) > 0) {
		write(destination,inout_buffer,bytes_read);
	}

	close(source);
	close(destination);

	return 0;

}

