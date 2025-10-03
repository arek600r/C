#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 80

int get_line(char line[], int max_line_len);

int main(){
	int len;
	char line[MAXLINE];

	 while (( len = get_line(line, MAXLINE)) > 0 ){
        if (len >= LIMIT) {
            printf("Longest: %s %d", longest, max);
        }
    return 0;
}



int get_line(char s[], int lim) {
    int c, i;
    for ( i = 0 ; i < lim-1 && (c=getchar())!=EOF && c!='\n' ; ++i )
    {
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}