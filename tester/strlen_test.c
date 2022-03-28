#include "libft.h"
#include <stdio.h>

int main()
{
    int length;
    length = 0;
    char string_to_check[] = "samadhi";
    length = ft_strlen(string_to_check);
    printf("string length is %d", length);
    return 0;
}

