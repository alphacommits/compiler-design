#include <stdio.h>

int dfa(char *input_string) {
    int current_state = 0;
    
    for (int i = 0; input_string[i] != '\0'; i++) {
        char symbol = input_string[i];
        
        switch (current_state) {
            case 0:
                if (symbol == 'a')
                    current_state = 1;
                else if (symbol == 'b')
                    current_state = 2;
                else
                    return 0;
                break;
            case 1:
                if (symbol == 'a')
                    current_state = 1;
                else if (symbol == 'b')
                    current_state = 2;
                else
                    return 0;
                break;
            case 2:
                if (symbol == 'b')
                    current_state = 2;
                else
                    return 0;
                break;
        }
    }
    
    return (current_state == 1 || current_state == 2) ? 1 : 0;
}

int main() {
    char input_string[100];
    
    printf("\tEnter a string: ");
    scanf("%s", input_string);
    
    if (dfa(input_string)) {
        printf("\tString Accepted.\n");
    } else {
        printf("\tString Rejected.\n");
    }
    
    return 0;
}

