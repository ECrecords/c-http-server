#include "stdio.h"
#include "stdlib.h"

#include "inttypes.h"
#include "sys/socket.h"
#include "netinet/ip.h"
#include "netinet/in.h"

int main() {
    printf("Hello, World!\n");

    int tcpSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (tcpSocket < 0){
        perror("http server (socket)");
        return EXIT_FAILURE;
    }
    
    
    return 0;
}