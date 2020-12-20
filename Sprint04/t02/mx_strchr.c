//#include <stdio.h>
char *mx_strchr(const char *s, int c) {
    if ((c > 255) ||  (c < 0)
        return 0;   
    for (; *s != '\0'; s++) {
        if (*s == c)
            return (char *)s;
    } 
    return 0;
}

/*
int main() {
    char *string = "1234567";
   
    printf("%s \n", mx_strchr(string, '4'));
}*/
