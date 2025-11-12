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

    
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "!@#$%^&*()_+-=[]{}|;:',.<>?/";

    int charCount = sizeof(characters) - 1;  
    char password[length + 1];  

    srand(time(0)); 

    for (int i = 0; i < length; i++) {
        int index = rand() % charCount;  
        password[i] = characters[index];
    }
    password[length] = '\0';  

    printf("Generated Password: %s\n", password);

    return 0;
}
