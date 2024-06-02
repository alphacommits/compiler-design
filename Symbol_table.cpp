#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int value;
} SymbolEntry;

SymbolEntry symbolTable[100];
int symbolCount = 0;

void addToSymbolTable(char *name, int value) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            printf("Error: Symbol '%s' already exists in the table.\n", name);
            return;
        }
    }

    strcpy(symbolTable[symbolCount].name, name);
    symbolTable[symbolCount].value = value;
    symbolCount++;

    printf("Added symbol '%s' with value %d to the table.\n", name, value);
}

int searchSymbol(char *name) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return symbolTable[i].value;
        }
    }
    printf("Symbol '%s' not found in the table.\n", name);
    return -1;
}

int main() {
    addToSymbolTable("x", 10);
    addToSymbolTable("y", 20);
    addToSymbolTable("x", 20);

    printf("Value of symbol 'x': %d\n", searchSymbol("x"));
    printf("Value of symbol 'y': %d\n", searchSymbol("y"));
    printf("Value of symbol 'z': %d\n", searchSymbol("z"));

    return 0;
}

