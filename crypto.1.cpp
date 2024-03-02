#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plain[10], cipher[10];
    int key, length;
    printf("Enter the plain text: ");
    scanf("%s", plain);
    printf("Enter the key value: ");
    scanf("%d", &key);

    printf("\nPLAIN TEXT: %s", plain);
    printf("\nENCRYPTED TEXT: ");
    for (int i = 0, length = strlen(plain); i < length; i++) {
        cipher[i] = plain[i] + key;

        if (isupper(plain[i]) && cipher[i] > 'Z')
            cipher[i] -= 26;
        if (islower(plain[i]) && cipher[i] > 'z')
            cipher[i] -= 26;

        printf("%c", cipher[i]);
    }
    printf("\nAFTER DECRYPTION: ");
    for (int i = 0, length = strlen(plain); i < length; i++) {
        plain[i] = cipher[i] - key;

        if (isupper(cipher[i]) && plain[i] < 'A')
            plain[i] += 26;
        if (islower(cipher[i]) && plain[i] < 'a')
            plain[i] += 26;

        printf("%c", plain[i]);
    }
 return 0;
}
