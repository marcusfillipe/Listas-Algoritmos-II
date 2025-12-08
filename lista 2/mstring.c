#include "mstring.h"

int mstrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

void mstrcat(char dest[], char orig[]) {
    int i = mstrlen(dest);
    int j = 0;
    while (orig[j] != '\0') {
        dest[i+j] = orig[j];
        j++;
    }
    dest[i+j] = '\0';
}

int mstrcmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) i++;
    return a[i] - b[i];
}

void mstrupper(char s[]) {
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
}

void mstrlower(char s[]) {
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}

int mcount_vogais(char s[]) {
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            c++;
    }
    return c;
}

int meh_palindromo(char s[]) {
    int i = 0, j = mstrlen(s) - 1;

    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

void mremove_espacos(char s[]) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        if (s[i] != ' ')
            s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
}
