#include <stdio.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = -1;

int is_empty(void) {
    return top == -1;
}

int is_full(void) {
    // your turn: when is the stack full?
    return top == 10;
}

void push(int value) {
    if (is_full()) {
        printf("Error: stack overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = value;
}

int pop(void) {
    // your turn: check if empty, print error and return -1 if so
    if (is_empty()) {
    	printf("Error: stack empty\n");
     	return -1;
    }
    // otherwise, grab the value at stack[top], decrement top, return the value
    int topValue = stack[top];
    top -= 1;
    return topValue;
}

int peek(void) {
    // your turn: like pop, but don't decrement top
    if (is_empty()) {
    	return -1;
    }
    return stack[top];
}

int main(void) {
    // test it out
    push(5);
    push(10);
    printf("peek: %d\n", peek());  // should print 10
    printf("pop: %d\n", pop());    // should print 10
    printf("pop: %d\n", pop());    // should print 5
    printf("pop: %d\n", pop());    // should print error, then -1

    return 0;
}
