#include <stdio.h>

// extern storage class
int extern_var = 10;   // global variable

void staticDemo() {
    static int s = 0;  // static variable → retains value between function calls
    s++;
    printf("Static variable value in staticDemo(): %d\n", s);
}

int main() {
    // auto storage class (default inside a function)
    auto int a = 5;

    // register storage class (request to store variable in CPU register)
    register int r = 20;

    printf("Auto variable a: %d\n", a);
    printf("Register variable r: %d\n", r);

    printf("Extern variable extern_var (before change): %d\n", extern_var);
    extern_var = 30;   // modifying extern variable
    printf("Extern variable extern_var (after change): %d\n", extern_var);

    // calling static demonstration function multiple times
    staticDemo();
    staticDemo();
    staticDemo();

    return 0;
}
