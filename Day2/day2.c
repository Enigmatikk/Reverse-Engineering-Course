#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("Congrats! You found the secret function!\n");
}

int main() {
    char password[20];

    printf("Enter Password: ");
    scanf("%19s", password);

    if (strcmp(password, "secr3t123") == 0) {
        printf("Access Granted!\n");
        secret_function();
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}
