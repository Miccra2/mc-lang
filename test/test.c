#include <stdio.h>
#include <stddef.h>
#include "../list.c"

int main(int argc, char *argv[]) {
    size_t array[] = {
        69,
        420,
        1003,
    };

    // setup list
    PLIST list = lCreate();
    lPrepend(list, sizeof(array[0]), &array[0]);
    lAppend(list, sizeof(array[1]), &array[1]);
    lInsert(list, 2, sizeof(array[2]), &array[2]);

    // test list data
    printf("list[0]: %i\n", *(size_t *)lIndex(list, 0)->data);
    printf("list[1]: %i\n", *(size_t *)lIndex(list, 1)->data);
    printf("list[2]: %i\n", *(size_t *)lIndex(list, 2)->data);

    return 0;
}
