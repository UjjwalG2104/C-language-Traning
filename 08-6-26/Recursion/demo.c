#include <stdio.h>

struct Person {
    int age;
    float height;
};

int main() {
    struct Person p1, p2;

    p1.age = 25;
    p1.height = 5.9;

    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}