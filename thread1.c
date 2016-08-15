#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void *thread_function(void *arg);

char message[]="Hello world";

int main(){
    int res;
    pthread_t a_thread;
    void *thread_result;
    res=pthread_create(&a_thread,NULL,thread_function,(void *)message);
    if(res!=0)
    {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("Input some text.en")
    
}