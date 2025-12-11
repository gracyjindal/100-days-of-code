#include <stdio.h>
#include <string.h>

int main(void){
    char s[100005], t[100005];
    if (scanf("%100000s%100000s", s, t)!=2) return 0;
    if (strlen(s) != strlen(t)) { puts("Not Anagram"); return 0; }
    int cnt[26]={0};
    for (int i=0;s[i];i++) cnt[s[i]-'a']++;
    for (int i=0;t[i];i++) cnt[t[i]-'a']--;
    for (int i=0;i<26;i++) if (cnt[i]) { puts("Not Anagram"); return 0; }
    puts("Anagram");
    return 0;
}