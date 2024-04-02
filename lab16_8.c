#include <stdio.h>
#include <string.h>

struct Students {
    char name[50];
    int marks;
    char g;
};

int main() {
    struct Students s[5];
    int i, sum = 0;

    for (i = 0; i < 5; i++) {
        printf("NAME\n");
        scanf(" %[^\n]s", s[i].name);
        printf("Marks GENDER\n");
        scanf("%d %c", &s[i].marks, &s[i].g);
        sum = sum + s[i].marks;
    }

    printf("Average marks: %d\n", sum / 5);

    return 0;
}
