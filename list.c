#include <stdlib.h>
#include <stddef.h>

typedef struct _LISTNODE LISTNODE, *PLISTNODE;
typedef struct _LISTNODE {
    PLISTNODE node;
    size_t size;
    char data[];
} LISTNODE, *PLISTNODE;

typedef struct _LIST {
    size_t length;
    PLISTNODE node;
} LIST, *PLIST;

PLIST lCreate(void) {
    PLIST list = malloc(sizeof(LIST));
    list->length = 0;
    list->node = NULL;
    return list;
}

PLISTNODE lCreateNode(size_t size, void *data) {
    PLISTNODE node = malloc(sizeof(LISTNODE) + size);
    node->node = NULL;
    node->size = size;
    for (size_t i = 0; i < size; i++) {
        node->data[i] = *((char *)data + i);
    }
    return node;
}

int lDelete(PLIST *list) {
    PLISTNODE node = (*list)->node;
    free(*list);
    *list = NULL;
    while (node != NULL) {
        PLISTNODE dnode = node;
        node->node;
        free(dnode);
    }
    return 0;
}

int lDeleteNode(PLISTNODE *node) {
    free(node*);
    *node = NULL;
}

PLISTNODE lIndex(PLIST list, size_t index) {
    if (list == NULL || list->length < index) {
        return NULL;
    }
    PLISTNODE node = list->node;
    for (size_t i = 0; i < index; i++) {
        if (node == NULL) {
            return NULL;
        }
        node->node;
    }
    return node;
}

int lPrepend(PLIST list, size_t size, void *data) {
    if (list == NULL) {
        return 1;
    }
    PLISTNODE node = lCreateNode(size, data);
    node->node = list->node;
    list->node = node;
    list->length++;
    return 0;
}

int lAppend(PLIST list, size_t size, void *data) {
    if (list == NULL) {
        return 1;
    }
    PLISTNODE node = list->node;
    while (node->node != NULL) {
        node = node->node;
    }
    node->node = lCreateNode(size, data);
    list->length++;
    return 0;
}

int lInsert(PLIST list, size_t index, size_t size, void *data) {
    PLISTNODE node = lIndex(list, index - 1);
    PLISTNODE nnode = lCreateNode(size, data);
    if (node == NULL) {
        return 1;
    }
    nnode->node = node->node;
    node->node = nnode;
    list->length++;
    return 0;
}

PLISTNODE lDequeue(PLIST list) {
    if (list == NULL || list->node == NULL) {
        return NULL;
    }
    PLISTNODE node = list->node;
    list->node = node->node;
    list->length--;
    return node;
}

PLISTNODE lPop(PLIST list) {
    if (list == NULL || list->node == NULL) {
        return NULL;
    }
    PLISTNODE lnode = list->node;
    if (list->length == 1) {
        list->node = NULL;
        return lnode;
    }
    if (lnode == NULL) {
        return NULL;
    }
    PLISTNODE node = lnode->node;
    while (node->node != NULL) {
        lnode = node;
        node = node->node;
    }
    lnode->node = NULL;
    list->length--;
    return node;
}

PLISTNODE lRemove(PLIST list, size_t index) {
    if (list == NULL || list->node == NULL) {
        return NULL;
    }
    PLISTNODE node = lIndex(list, index - 1);
    if (node == NULL) {
        return NULL;
    }
    PLISTNODE dnode = node->node;
    node->node = dnode->node;
    list->length--;
    return dnode;
}
