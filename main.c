#include <stdio.h>
#include <stdlib.h>

// A simple Stack structure using a fixed-size array
#define MAX 5

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Push an item onto the stack
void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        s->top++;
        s->items[s->top] = value;
        printf("Pushed: %d\n", value);
    }
}

int main() {
    // 1. Allocated on the STACK (automatic memory)
    Stack myStack;
    initStack(&myStack);

    printf("--- Simple Stack Demo ---\n");
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    // 2. Allocated on the HEAP (manual memory)
    // We use malloc to request memory for one integer
    int *heapPtr = malloc(sizeof(int));

    if (heapPtr == NULL) return 1; // Always check if allocation failed

    *heapPtr = 42;
    printf("\nValue on the Heap: %d\n", *heapPtr);

    // CRITICAL: In C, you must manually free heap memory
    free(heapPtr);

    return 0;
}
