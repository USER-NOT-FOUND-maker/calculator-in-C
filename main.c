#include <stdio.h>
#include <stdbool.h>

bool isin(int a, int b[4]){
    for (int i = 0; i < 4; i++){
        if (a == b[i]){
            return true;
        }
    }
    return false;
}

float divide(float a, float b){
    return a/b;
}

float multiply(float a, float b){
    return a*b;
}

float add(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a - b;
}

int main(){
    int possibilities[4] = {1,2,3,4};
    int choice;
    float x;
    float y;
    while (true){
        printf("do you want to \n1. add 2 numbers\n2. subtract 2 numbers\n3. multiply 2 numbers\n4. divide 2 numbers\n");
        scanf("%d",&choice);
        if (isin(choice,possibilities)){
            printf("enter your first number: ");
            scanf("%f",&x);
            printf("\nenter your second number: ");
            scanf("%f",&y);
            if (choice == 1){
                printf("%f\n",add(x,y));
            }
            else if (choice == 2){
                printf("%f\n",subtract(x,y));
            }
            else if (choice == 3){
                printf("%f\n",multiply(x,y));
            }
            else{
                printf("%f\n",divide(x,y));
            }
        }
        else{
            printf("invalid option. pick again\n");
        }
    }
}