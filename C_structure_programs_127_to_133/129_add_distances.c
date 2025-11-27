
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance d[n], total={0,0};
    for(int i=0;i<n;i++){
        printf("Enter feet and inch: ");
        scanf("%d %f", &d[i].feet, &d[i].inch);
        total.feet += d[i].feet;
        total.inch += d[i].inch;
    }

    total.feet += (int)(total.inch / 12);
    total.inch = (int)total.inch % 12;

    printf("Total distance = %d feet %.2f inch\n", total.feet, total.inch);
    return 0;
}
