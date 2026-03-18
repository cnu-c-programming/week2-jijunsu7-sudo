#include <stdio.h>

int main()
{
    int a;
    int re = 1;
    scanf("%d", &a);
    if(a > 1){
        for(int i = 2; i < a; i++){
        if(a % i == 0){
            re = 0;
            break;
        }
        }
    }else{
        re = 0;
    }
    if(re)
        printf("true");
    else
        printf("false");
        
    return 0;
}

