#include <stdio.h>

void function_b(int z) {
	int local_b = 99;
	printf("function_b: &z = %p, &local_b = %p\n", (void*)&z, (void*)&local_b);
}

void function_a(int y) {
    int local_a = 42;
    printf("function_a: &y = %p, &local_a = %p\n", (void*)&y, (void*)&local_a);
    function_b(y + 1);
}

int main() {
    int x = 10;
    printf("main:       &x = %p\n", (void*)&x);
    function_a(x);
    function_a(x);
    return 0;
}
