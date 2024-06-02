#include <stdio.h>
#include <string.h>

int dfa(char *binary_code) {
    int current_state = 0;
    int final_state = 4;

    printf("State\tSymbol\n");
    printf("%d\t--\n", current_state);

    for (int i = 0; binary_code[i] != '\0'; i++) {
        char symbol = binary_code[i];
        printf("%d\t%c\n", current_state, symbol);
        switch (current_state) {
            case 0:
                if (symbol == '1') {
                    current_state = 1;
                } else {
                    printf("Invalid transition.\n");
                    return 0;
                }
                break;
            case 1:
                if (symbol == '0') {
                    current_state = 2;
                } else {
                    printf("Invalid transition.\n");
                    return 0;
                }
                break;
            case 2:
                if (symbol == '1') {
                    current_state = 3;
                } else {
                    printf("Invalid transition.\n");
                    return 0;
                }
                break;
            case 3:
                if (symbol == '0') {
                    current_state = 4;
                } else {
                    printf("Invalid transition.\n");
                    return 0;
                }
                break;
            case 4:
                break;
            default:
                printf("Invalid state.\n");
                return 0;
        }
    }

    printf("%d\t--\n", current_state);
    return (current_state == final_state) ? 1 : 0;
}

int main() {
    char binary_code[] = "1010";
    
    if (dfa(binary_code)) {
        printf("Binary code is accepted by DFA.\n");
    } else {
        printf("Binary code is Not accepted by DFA.\n");
    }
    
    return 0;
}

