#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char s[100005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    size_t len = strlen(s);
    if (len && s[len-1]=='\n') s[--len]=0;

    size_t i=0; while (s[i]==' ') i++;

    for (size_t k=0;k<len;k++) s[k] = (char)tolower((unsigned char)s[k]);

    if (s[i]) s[i] = (char)toupper((unsigned char)s[i]);

    printf("%s", s);
    return 0;
}