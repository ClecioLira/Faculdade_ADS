#include<stdio.h>
#include<string.h>

int main() {
    printf("\n ARARA == ARARA? %d", strcmp("ARARA", "ARARA"));
    printf("\n ARARA == BANANA? %d", strcmp("ARARA", "BANANA"));
    printf("\n BANANA == ARARA? %d", strcmp("BANANA", "ARARA"));

    return 0;
}