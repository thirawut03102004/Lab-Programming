#include <stdio.h>

struct student {
    char name[50];
    int age;
};

void GetStudent(struct student child[][10], int *room) {
    scanf("%d", room);

    for (int i = 0; i < *room; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%s %d", child[i][j].name, &child[i][j].age);
        }
    }
}

int main() {
    struct student children[20][10];
    int group;

    GetStudent(children, &group);

    for (int i = 0; i < group; i++) {
        printf("Room %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d. %s, %d\n", j + 1, children[i][j].name, children[i][j].age);
        }
    }

    return 0;
}