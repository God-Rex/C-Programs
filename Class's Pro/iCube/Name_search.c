#include <stdio.h>
#include <string.h>

int main() {
    char names[10][200]; 
    char name_find[200];
    int n = 10; 
    printf("Enter %d names:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove the newline character '\n' from the end of the input
        if (names[i][strlen(names[i]) - 1] == '\n') {
            names[i][strlen(names[i]) - 1] = '\0';
        }
    }

    printf("Enter name want to search:\n");
    fgets(name_find, sizeof(name_find), stdin);

    for (int i = 0; i < n; i++) {
        if(names[i]==name_find)
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
