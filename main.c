#include "header.h"


int main (int argc, char *argv[])
{
    if (argc < 2) {
        printf("Need argument:\n");
        printf("    without flag - string to hex\n");
        printf("    -h  - hex to string\n");
        printf("    -hr - hex to string, revers\n");
        return 1;
    }

    if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-hr") == 0) {
        hex_to_str(argv[1], argv[2]);
    } else {
        str_to_hex(argv[1]);
    }


    return 0;
}