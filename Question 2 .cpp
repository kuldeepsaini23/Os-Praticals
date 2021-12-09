#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkdemo() 
{ 
    // child process because return value zero 
    if (fork() == 0) 
        printf("Child executed!\n"); 
    // parent process because return value non-zero. 
    else
        printf("Parent executed!\n"); 
} 
int main() 
{ 
    forkdemo(); 
    return 0; 
}