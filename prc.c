#include <stdio.h>

void rev_printStar(int lines){
    while (lines <= 0)
    {   
        for (int j = 1; j <= lines; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        lines--;
    }
    
    
}

void printStar(int lines){
    int i = 1;
    while (i <= lines)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        i++;
    }
    
}

int main(){
    int line;
    printf("Enter the number of line: ");
    scanf("%d", &line);
    printStar(line);
    rev_printStar(line);
    return 0;
}