#include "header.h"

void str_to_hex(char *string)
{
    size_t leng = strlen(string);


    int parts = (leng + 7) / 8;
    int remainder = leng - ((parts - 1) * 8);


    int i = 0;
    for (int j = 0; j < parts; ++j){
        printf("0x");
        char buf[8];
        for (int k = 0; k < 8 && i < leng; ++i, ++k) {
            buf[k] = string[i];
        }

        int p = 8;
        if (j+1 == parts) {
            p = remainder;
        }

        for (; p > 0; --p) {
            printf("%02x", (unsigned char)buf[p-1]);
        }
            printf("\n");
    }
}