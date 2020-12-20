#include "create_new_agents.h"

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    
    char *dst = mx_strnew(mx_strlen(str));

    if (dst == NULL)
        return NULL;
    mx_strcpy(dst, str);
    return dst;
}
