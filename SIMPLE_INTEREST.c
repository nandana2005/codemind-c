# include <stdio.h>
# include <stdlib.h>
int main(){
    int principal, rate, time, interest;
    scanf("%d", &principal);
    scanf("%d", &rate);
    scanf("%d", &time);
    interest = principal * rate * time / 100;
    printf("%d", interest);
    return 0;

}
