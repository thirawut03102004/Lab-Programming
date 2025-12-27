#include <stdio.h>

struct student {
    char name[50];
    int age;
};

struct student (*GetStudent(int *room))[10] {
    static struct student child[20][10]; 
    
    scanf("%d", room);

    for (int i = 0; i < *room; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%s %d", child[i][j].name, &child[i][j].age);
        }
    }

    return child;
}

int main() {
    struct student (*children)[10];
    int group;

    children = GetStudent(&group);

    for (int i = 0; i < group; i++) {
        printf("Room %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d. %s, %d\n", j + 1, children[i][j].name, children[i][j].age);
        }
    }

    return 0;
}