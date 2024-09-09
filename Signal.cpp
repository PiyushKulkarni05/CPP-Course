#include<iostream>
#include <csignal>
#include<unistd.h>
using namespace std;
void signal(int signum){
    cout<<"Interuptioh in signal \""<<signum<<"\" receive.\n"<<endl;
    exit(signum);
}
int main(){
    signal(SIGINT,signal);
    while (1)
    {
        cout<<"Going to sleep...."<<endl;
        sleep(1);
        
                /* code */
    }
    
    
    return 0;
}