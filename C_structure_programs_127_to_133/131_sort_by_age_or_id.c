
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    int age;
    char name[50];
};

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for(int i=0;i<n;i++){
        printf("Enter id, name, age: ");
        scanf("%d %49s %d", &s[i].id, s[i].name, &s[i].age);
    }

    printf("Sort by: 1-Age  2-ID: ");
    scanf("%d", &choice);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int cond = (choice==1) ? (s[i].age > s[j].age) : (s[i].id > s[j].id);
            if(cond){
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted records:\n");
    for(int i=0;i<n;i++){
        printf("%d %s %d\n", s[i].id, s[i].name, s[i].age);
    }

    return 0;
}
