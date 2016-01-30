#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>
#include <string.h>
#include <sys/select.h>


int main(){

		int fd = open("./servidor", O_RDONLY | O_NONBLOCK);
		char buf[11];
		int ret, sret;

		fd_set readfds;
		struct timeval timeout;


		while(1){

			FD_ZERO(&readfds);
			FD_SET(fd , &readfds);

			timeout.tv_sec=10;
			timeout.tv_usec=0;

			sret= select(fd + 1, &readfds, NULL , NULL, &timeout);

			if(sret=0){

				printf("sret = %d\n", sret);
				printf("    tiemout\n");
			}
			else if(FD_ISSET(fd, &readfds)){

				printf("sret= %d\n", sret);
				memset((void *) buf, 0, 11);
				ret = read(fd, (void *) buf, 10);
				printf("ret = %d\n", ret);

				if(ret != -1){

					printf("buf = %s\n", buf);
				}
			}

		}
		return 0;


}
