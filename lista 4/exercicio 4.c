#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* alocaString(int n) {
    return (char*) malloc(n * sizeof(char));
}

int main() {
    int n;
    scanf("%d", &n);

    char *s = alocaString(n);
    scanf(" %[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
            printf("%c", s[i]);
    }

    free(s);
    return 0;
}
