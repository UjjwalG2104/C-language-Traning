#include <stdio.h>

struct Point {
    int x, y, z;
};

int main() {
    struct Point p1 = {.y = 0, .z = 2, .x = 1};
    struct Point p2 = {.y = 20};

    printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
    printf("x = %d\n", p2.x);

    return 0;
}