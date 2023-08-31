#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {

   struct addrinfo hints;

    int tcpSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (tcpSocket < 0){
        perror("http server (socket)");
        return EXIT_FAILURE;
    }

    
    return 0;
}