//#include <stdio.h>
int mx_gcd(int a, int b) {
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    if (b == 0)
        return a;
    return mx_gcd(b, a % b);
}

/*
int main() {
    printf ("%d",mx_gcd(3,12));
}*/
