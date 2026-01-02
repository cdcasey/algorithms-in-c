This syllabus is designed for someone who already understands logic (loops, conditionals, functions) but wants to bridge the gap between "web code" and "hardware reality."
Each week focuses on a core C concept paired with a data structure that makes that concept "click."

4-Week "C for Web Developers" Syllabus
Week 1: Memory Basics & The Stack
Goal: Understand how the computer actually stores variables and handles function calls without a Garbage Collector.
* Concepts:
    * Primitive types and their byte sizes (char, int, float).
    * The Stack: How local variables are allocated and "popped."
    * Pass-by-value vs. Pass-by-reference.
* The "Web Dev" Comparison: Understanding why primitives in JS are cheap vs. why objects can be heavy.
* Practical Lab: Implement a Stack data structure using a fixed-size array. Focus on manual bounds checking.
Week 2: Pointers & The Heap
Goal: Master the most feared concept in C—the pointer—and learn to manage memory manually.
* Concepts:
    * Memory addresses and the & and * operators.
    * Dynamic Memory Allocation: malloc(), calloc(), and the crucial free().
    * Memory Leaks: What happens when you lose a pointer to the heap.
* The "Web Dev" Comparison: This is what’s happening under the hood when you create a new object in high-level languages.
* Practical Lab: Implement a Singly Linked List. You must manually malloc every new node and free the entire list when finished.
Week 3: Buffer Management & Strings
Goal: Learn why "strings" aren't actually a type in C and how this relates to security and performance.
* Concepts:
    * Null-terminated strings (\0).
    * Pointer arithmetic (moving through memory by adding to addresses).
    * Buffer overflows: The danger of writing past allocated memory.
* The "Web Dev" Comparison: Understanding why array.join() or string concatenation is computationally expensive in some environments.
* Practical Lab: Write a program that reverses a string "in-place" using only pointers (no array indexing []).
Week 4: Structs & Custom Data Types
Goal: Learn how to group data together without the overhead of Objects or Classes.
* Concepts:
    * struct definition and memory padding.
    * Pointers to structs and the arrow operator (->).
    * Function pointers: The C version of a "callback."
* The "Web Dev" Comparison: Think of this as a TypeScript Interface, but with a fixed physical size in memory.
* Practical Lab: Build a basic Hash Table. Use a simple hash function to map strings to struct pointers. Handle collisions using the linked list skills from Week 2.

Getting Started Checklist
1. Compiler: If you’re on macOS, run xcode-select --install. On Windows, install wsl2 or MinGW.
2. The "Holy Grail" Text: Keep a PDF of The C Programming Language (K&R) nearby for reference.
3. The Secret Weapon: Use Valgrind (or the AddressSanitizer in Clang) to check for memory leaks. It will tell you exactly which line of code "leaked" memory.
