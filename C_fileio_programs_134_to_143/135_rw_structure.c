
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Alice", 20}, s2;

    FILE *fp = fopen("student.bin","wb");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.bin","rb");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("Read: %s %d\n", s2.name, s2.age);
    return 0;
}
