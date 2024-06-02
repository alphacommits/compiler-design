#include <stdio.h>
#include <string.h>

char op[2], arg1[5], arg2[5], result[5];

int main() {
    printf("Enter expressions in the format 'op arg1 arg2 result'. Type 'exit' to quit.\n");

    while (1) {
        printf("Expression: ");
        scanf("%s", op);
        
        if (strcmp(op, "exit") == 0) {
            printf("Exiting the program.\n");
            break;
        }

        scanf("%s %s %s", arg1, arg2, result);

        if (strcmp(op, "+") == 0) {
            printf("MOV R0, %s\n", arg1);
            printf("ADD R0, %s\n", arg2);
            printf("MOV %s, R0\n", result);
        }
        else if (strcmp(op, "*") == 0) {
            printf("MOV R0, %s\n", arg1);
            printf("MUL R0, %s\n", arg2);
            printf("MOV %s, R0\n", result);
        }
        else if (strcmp(op, "-") == 0) {
            printf("MOV R0, %s\n", arg1);
            printf("SUB R0, %s\n", arg2);
            printf("MOV %s, R0\n", result);
        }
        else if (strcmp(op, "/") == 0) {
            printf("MOV R0, %s\n", arg1);
            printf("DIV R0, %s\n", arg2);
            printf("MOV %s, R0\n", result);
        }
        else if (strcmp(op, "=") == 0) {
            printf("MOV R0, %s\n", arg1);
            printf("MOV %s, R0\n", result);
        }
        else {
            printf("Invalid operator: %s\n", op);
        }
    }

    return 0;
}

