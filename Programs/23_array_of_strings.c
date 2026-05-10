#include <stdio.h>
#include <string.h>

int main() {
    
    char name[3][30] = {""};
    char phone [3][15] = {""};
    int size = 0;

    size = sizeof(name)/sizeof(name[0]);

    for (int i = 0; i < size; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0'; 
        printf("Enter phone number %d: ", i + 1);
        fgets(phone[i], sizeof(phone[i]), stdin);
        phone[i][strlen(phone[i]) - 1] = '\0';
    }

    printf("--- Contact Book ---\n");
    for (int i = 0; i < size; i ++) {
        printf("%d. %-15s  | %s\n", i + 1, name[i], phone[i]);
    }
}