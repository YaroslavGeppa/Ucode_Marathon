#include "header.h"

void mx_printstr(const char *s){
 	write(1, s, mx_strlen(s));
 }
/*
int main(){
	char string[30]= "elephant";
	mx_printstr(string);
}
*/
