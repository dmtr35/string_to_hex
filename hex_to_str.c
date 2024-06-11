#include "header.h"

#include <stdlib.h>


int hex_to_str (char *flag, char *string)
{
    size_t leng = strlen(string);
    char *result_str = malloc(leng / 2 + 1);
    char buf[3];
    buf[2] = '\0';
    int j = 0;

    if (leng % 2 != 0) {
        fprintf(stderr, "Invalid hex string length.\n");
        return EXIT_FAILURE;
    }

    if (strstr(flag, "-hr") != NULL) {
        for (int i = 0; i < leng; i += 2) {
            buf[0] = string[i];
            buf[1] = string[i + 1];

            char ch = (char)strtol(buf, NULL, 16);
            result_str[j] = ch;
            j++;
        }
    } else {
        for (int i = leng - 1; i > 0; i -= 2) {
            buf[1] = string[i];
            buf[0] = string[i - 1];

            char ch = (char)strtol(buf, NULL, 16);
            result_str[j] = ch;
            j++;
        }
    }

    result_str[j] = '\0';
    printf("%s\n", result_str);
    free(result_str);

    return 0;
}