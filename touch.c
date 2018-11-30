#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv) {
	int to_close = openat(AT_FDCWD, argv[1], O_WRONLY|O_CREAT|O_NOCTTY|O_NONBLOCK, 0666);
	close(to_close);
	int time = utimensat(-100, argv[1], 0, 0);

	return 0;
}

