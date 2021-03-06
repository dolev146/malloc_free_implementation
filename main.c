#include <stdio.h>
#include "memory.h"
#include "mystack.h"
#include <string.h>

int main()
{
    int *p, *q, *r, *s;

    p = malloc(sizeof(*p) * 1000);
    for (int i = 0; i < 1000; ++i)
    {
        p[i] = i;
    }
    for (int i = 0; i < 1000; ++i)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    printf("memory location p = %p\n", p);
    free(p);
    p = NULL;

    q = malloc(sizeof(*q) * 4);
    printf("memory location q = %p\n", q);

    r = malloc(sizeof(*r) * 4);
    printf("memory location r = %p\n", r);

    s = malloc(sizeof(*s) * 4);
    printf("memory location s = %p\n", s);

    free(q);
    q = NULL;
    free(s);
    s = NULL;
    free(r);
    r = NULL;



     char* msg = "dolev and yakov";
    
    for (size_t i = 0; i < 50; i++)
    {
        push(msg);
        usleep(5000);
    }
    for (size_t i = 0; i < 50; i++)
    {
        pop();
        usleep(5000);
    }

    return 0;
}