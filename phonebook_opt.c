#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "phonebook_opt.h"

/* TODO: FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */

    while (pHead != NULL) {
        if (strcasecmp(lastName, pHead->lastName) == 0) {
            printf(" %12s  is found!\n", lastName);
            return pHead;
        }
        pHead = pHead->pNext;
    }
    printf(" %12s  is not found!\n", lastName);
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    /* TODO: implement */

    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    strcpy(e->lastName, lastName);
    e->pNext = NULL;

    return e;
}
