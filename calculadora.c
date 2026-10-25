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
    if (b) = 0 {
        printf("No se puede dividir por 0")
        return void
        
    }

    return a / b;
}

int main(void){
    bool on = True;
    while (on) {
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
                printf(suma(&a, &b));
                break;
            case '-':
                printf(resta(&a, &b));
                break;
            case '*':
                printf(multiplicacion(&a, &b));
                break;    
            case '-':
                printf(division(&a, &b));
                break;
            default:
                printf("operador no valido");
                return 1;    


        }

    }


    return 0;
    
}