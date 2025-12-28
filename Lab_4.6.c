#include <stdio.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

void SaveNode(struct studentNode *child, char n[], int a, char s, float g);
void GoNext2(struct studentNode ***walk);

int main() {
    struct studentNode node1, node2, node3, node4;
    struct studentNode *start, **now2;

    start = &node1;
    SaveNode(start, "one", 6, 'M', 3.11);

    start->next = &node2;
    SaveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = &node3;
    SaveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = &node4;
    SaveNode(start->next->next->next, "four", 12, 'F', 3.44);
    
    now2 = &start;

    GoNext2(&now2); 
    
    printf("%s ", (*now2)->name);

    return 0;
}

void SaveNode(struct studentNode *child, char n[], int a, char s, float g) {
    int i = 0;
    while (n[i] != '\0' && i < 19) {
        child->name[i] = n[i];
        i++;
    }
    child->name[i] = '\0';
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

void GoNext2(struct studentNode ***walk) {
    if (walk != NULL && *walk != NULL && (**walk) != NULL && (**walk)->next != NULL) {
        static struct studentNode *tempPtr;
        tempPtr = (**walk)->next;
        *walk = &tempPtr;
    }
}