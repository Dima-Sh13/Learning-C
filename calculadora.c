#include <stdio.h>
#include <stdbool.h>

double suma(double a, double b){
    return a + b;
}

double resta(double a, double b){
    return a- b;
}

double multiplicacion(double a, double b){
    return a * b;
}

double division(double a, double b){
    
    return a / b;
}

int main(void){
    
    while (true) {
        double a;
        printf("Primer numero: ");
        scanf("%lf", &a);
        
        double b;
        printf("Segundo numero: ");
        scanf("%lf", &b);

        char op;
        printf("Elige: + - * /");
        scanf(" %c", &op);

        switch (op){
            case '+':
                printf("Resultado: %.2f\n", suma(a, b));
                break;
            case '-':
                printf("Resultado: %.2f\n", resta(a, b));
                break;
            case '*':
                printf("Resultado: %.2f\n", multiplicacion(a, b));
                break;    
            case '/':
                if (b){
                    printf("Resultado: %.2f\n", division(a, b));
                    break;
                } 
                printf("no se puede dividir por 0\n");
                break;
            default:
                printf("operador no valido\n");
                break;    


        }
        char otra;
        printf("Otra operacion?: (s/n)");
        scanf(" %c", &otra);

        if (otra == 'n'){
            break;
        }

    }


    return 0;
    
}