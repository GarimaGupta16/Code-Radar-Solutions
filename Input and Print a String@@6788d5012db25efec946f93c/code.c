#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int name;
    scanf("%s",&name);
    printf("You entered: %s", name);
    return 0;
}