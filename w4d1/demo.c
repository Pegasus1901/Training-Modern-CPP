#include<stdlib.h>
#include<unistd.h>

int main(){

    int id  = fork(); //creates or starts a process

    if(id==0){
        printf("Hii");
        //getpid(), getppid()
    }else{
        printf("Hello");
    }

    return 0;
}