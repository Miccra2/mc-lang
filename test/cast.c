#include <stdio.h>

int main(void) {
    long data = 420;
    long *ptr = &data;
    printf("%i", *(4 *)ptr);
    return 0;
}
