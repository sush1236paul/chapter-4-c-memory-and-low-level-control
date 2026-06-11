#include <stdio.h>

struct Connection
{
    char ip[20];
    int port;
    char protocol[10];
};

int main()
{
    struct Connection conn =
    {
        "192.168.1.1",
        80,
        "HTTP"
    };

    printf("IP: %s\n", conn.ip);
    printf("Port: %d\n", conn.port);
    printf("Protocol: %s\n", conn.protocol);

    return 0;
}
