#include <stdio.h>

int main() {
    char firstChar, lastChar;
    
    printf("Enter the first letter of the country: ");
    scanf(" %c", &firstChar);
    
    switch(firstChar) {
        case 'A':
        case 'a':
            printf("Enter the last letter: ");
            scanf(" %c", &lastChar);
            switch(lastChar) {
                case 'A':
                case 'a':
                    printf("\nAlaska\nAlbania\nAlgeria\n");
                    break;
                default:
                    printf("\nNo such country\n");
            }
            break;
        
        case 'B':
        case 'b':
            printf("Enter the last letter: ");
            scanf(" %c", &lastChar);
            switch(lastChar) {
                case 'A':
                case 'a':
                    printf("\nBulgaria\nBolivia\nBotswana\n");
                    break;
                default:
                    printf("\nNo such country\n");
            }
            break;
        
        default:
            printf("Please enter a valid starting letter\n");
    }
    
    return 0;
}
