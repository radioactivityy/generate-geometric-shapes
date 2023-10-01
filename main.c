#include <stdio.h>

void draw(int shape, int a, int b) {
    switch(shape) {
        case 0: 
            for(int i = 0; i < b; ++i) {
                for(int j = 0; j < a; ++j)
                    printf("x");
                printf("\n");
            }
            break;
        case 1:
            for(int i = 0; i < b; ++i) {
                for(int j = 0; j < a; ++j)
                    if(i == 0 || i == b-1 || j == 0 || j == a-1)
                        printf("x");
                    else
                        printf(" ");
                printf("\n");
            }
            break;
        case 2:
            for(int i = 0; i < b; ++i) {
                for(int j = 0; j < a; ++j)
                    if(i == 0 || i == b-1 || j == 0 || j == a-1)
                        printf("x");
                    else
                        printf("%d", ((j-1)+(i-1)*(a-2))%10);
                printf("\n");
            }
            break;
        case 3:
            for(int i = 0; i < a; ++i) {
                for(int j = 0; j < a; ++j)
                    if (j == i)
                        printf("x");
                    else
                        printf(" ");
                printf("\n");
            }
            break;
        case 6:
            for(int i = 0; i < b; ++i) {
                for(int j = 0; j < a; ++j)
                    if(j == a/2 || i == 0)
                        printf("x");
                    else
                        printf(" ");
                printf("\n");
            }
            break;
        case 9:
            for(int i = 0; i < b; ++i) {
                for(int j = 0; j < a; ++j)
                    if(i == 0 || i == b-1 || j == 0 || j == a-1)
                        printf("x");
                    else
                        printf("%d", ((i-1)+(j-1)*(b-2))%10);
                printf("\n");
            }
            break;
        default:
            printf("Doesnt exist\n");
            break;
    }
}

int main() {
    int shape, a, b;
    scanf("%d%d%d", &shape, &a, &b);

    draw(shape, a, b);

    return 0;
}
