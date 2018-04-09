#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>


void  main(void)
{
    pid_t  pid=fork();

    if(pid>0)
        printf("parant\n");
    else if(pid==0)
        printf("child\n");
    else
        printf("nothing\n");
}
