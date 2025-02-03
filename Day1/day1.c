#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("Congrats! You've successfully bypassed the protection!\n");
}

int main() {
    char input[50];
    char correct_password[] = "rev3rs3m3"; 

    printf("Enter the password: ");
    scanf("%49s", input);

    if (strcmp(input, correct_password) == 0) {
        printf("Access granted!\n");
        secret_function();
    } else {
        printf("Access denied!\n");
    }
    
    return 0;
}
