
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"John", 21}, s2;
    FILE *fp = fopen("student.dat","wb");
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    fp = fopen("student.dat","rb");
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Read from file: %s %d\n", s2.name, s2.age);
    return 0;
}
