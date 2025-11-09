#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Enter the desired password length: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Password length must be greater than 0.\n");
        return 1;
    }

    // Possible characters for the password
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "!@#$%^&*()_+-=[]{}|;:',.<>?/";

    int charCount = sizeof(characters) - 1;  // exclude null terminator
    char password[length + 1];  // +1 for null terminator

    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < length; i++) {
        int index = rand() % charCount;  // pick a random index
        password[i] = characters[index];
    }
    password[length] = '\0';  // terminate the string

    printf("Generated Password: %s\n", password);

    return 0;
}
