#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_LENGTH 1024
char inout_buffer[BUFFER_LENGTH];
int main(int argc,char **argv)
{
	int file,size;
	char *ch;

	if(argc>1)
	{
		for(int i = 1;i<argc;++i)
		{
			int fd =  open(argv[i],O_RDONLY);
			if(-1 != fd)
			{
			ssize_t bytes_read;
			while((bytes_read = read(fd,inout_buffer,BUFFER_LENGTH)) > 0)
				{
					write(1,inout_buffer,bytes_read);
				}
			}
			close(fd);
		}
	}
	return 0;
}

