#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    fd=open("Demo.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable to open the file\n");
    }
    else
    {
        printf("file is succesfully open with fd:%d\n",fd);
    }

}