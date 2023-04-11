#include <stdio.h>

int main()
{

    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
        letra = 65;
        break;
    
    case 'b':
        letra = 66;
        break;
    
    case 'c':
        letra = 67;
        break;
    
    case 'd':
        letra = 68;
        break;
    
    case 'e':
        letra = 69;
        break;
    
    case 'f':
        letra = 70;
        break;
    
    case 'g':
        letra = 71;
        break;
    
    case 'h':
        letra = 72;
        break;
    
    case 'i':
        letra = 73;
        break;
    
    case 'j':
        letra = 74;
        break;
    
    case 'k':
        letra = 75;
        break;
    
    case 'l':
        letra = 76;
        break;
    
    case 'm':
        letra = 77;
        break;
    
    case 'n':
        letra = 78;
        break;
    
    case 'o':
        letra = 79;
        break;
    
    case 'p':
        letra = 80;
        break;
    
    case 'q':
        letra = 81;
        break;
    
    case 'r':
        letra = 82;
        break;
    
    case 's':
        letra = 83;
        break;
    
    case 't':
        letra = 84;
        break;
    
    case 'u':
        letra = 85;
        break;
    
    case 'v':
        letra = 86;
        break;
    
    case 'w':
        letra = 87;
        break;
    
    case 'x':
        letra = 88;
        break;
    
    case 'y':
        letra = 89;
        break;
    
    case 'z':
        letra = 90;
        break;
    
    default:
        letra = 0;
        break;
    }

    printf("\nA letra digita foi: %c\n\n", letra);

    return 0;
}