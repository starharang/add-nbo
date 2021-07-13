#include <stdio.h>
#include <stdint.h>
#include<netinet/in.h>
int main(int argc, char* argv[])
{
    FILE *f1, *f2 = NULL;
    uint32_t a, b = 0;
    f1 = fopen(argv[1], "r");
    fread(&a, sizeof(uint32_t), 1, f1);
    fclose(f1);
    f2 = fopen(argv[2], "r");
    fread(&b, sizeof(uint32_t), 1, f2);
    fclose(f2);
    //printf("a = %x\n", ntohl(a));
    //printf("b = %x\n", ntohl(b));
    printf("%d(%#x) + %d(%#x) = %d(%#x) ", ntohl(a), ntohl(a), ntohl(b), ntohl(b), ntohl(a)+ntohl(b), ntohl(a)+ntohl(b));
    return 0;
}
