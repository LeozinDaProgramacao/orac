#include<unistd.h>

void resposta_deuses(void){
    char *argv[] ={"/bin/sh",NULL};
    char *envp[]={NULL};

    execve("/bin/sh",argv,envp);
}
