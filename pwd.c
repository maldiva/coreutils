#include <stdio.h>
#include <unistd.h>

#define BUFFER_LENGTH 4096
char BUFFER[BUFFER_LENGTH];

int main(void) {
if (getcwd(BUFFER, BUFFER_LENGTH) != NULL) {
	write(1, BUFFER, strnlen(BUFFER, BUFFER_LENGTH));
	write(1, "\n", 1);
}
return 0;
}

