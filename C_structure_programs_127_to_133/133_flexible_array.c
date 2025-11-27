
#include <stdio.h>
#include <stdlib.h>

struct Test {
    int count;
    int arr[]; // Flexible array
};

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    struct Test *t = malloc(sizeof(struct Test) + n * sizeof(int));
    t->count = n;

    printf("Enter values:\n");
    for(int i=0;i<n;i++) scanf("%d", &t->arr[i]);

    printf("Values:\n");
    for(int i=0;i<n;i++) printf("%d ", t->arr[i]);

    free(t);
    return 0;
}
