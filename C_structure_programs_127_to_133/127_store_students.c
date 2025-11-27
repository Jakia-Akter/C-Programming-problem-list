
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%49s", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStored Information:\nName: %s\nAge: %d\nMarks: %.2f\n", s.name, s.age, s.marks);
    return 0;
}
