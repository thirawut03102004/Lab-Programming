#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade(struct student child) {
    if (child.sex == 'M') child.gpa *= 1.10;
    if (child.sex == 'F') child.gpa *= 1.20;
    return child;
}

int main() {
    struct student aboy = {"", 0, 'M', 3.00};
    
    aboy = upgrade(aboy);
    
    printf("%.2f", aboy.gpa);
    return 0;
}