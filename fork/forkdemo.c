#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(int argc ,char const *argv[])
    {
        pid_t  id;

        printf("Before Fork\n");
        id = fork();
        if (0 == id)
        {
        printf("In Child: PID= %d\t PPID= %d\n",getpid(), getppid());
        }
        else
        {
            printf("In Parent: PID= %d\t PPID= %d\n",getpid(), getppid());
            
        return 0;
        }
    }