#include<stdio.h>
void fooi(int x) {
    printf("Integer: %d\n", x);
}
void food(double x) {
    printf("Double: %f\n", x);
}
#define foo(x) _Generic(x, \
    int: fooi(x), \
    double: food(x) \
)
int main(){
    foo(10);
    foo(10.5);
    return 0;
}
