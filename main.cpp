#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char* argv[]){
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    const int width = w.ws_col/2;
    int a;
    while(std::cin >> a){
        for(a+=width;a>0;a--)
            std::cout << "#";
        std::cout << std::endl;
    }
}
