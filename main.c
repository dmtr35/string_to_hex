#include "header.h"


int main (int argc, char *argv[])
{
    if (strstr(argv[1], "-h")) {
        hex_to_str(argv[2]);
    } else {
        str_to_hex(argv[1]);
    }


    return 0;
}