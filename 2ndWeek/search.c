//
// Created by brian on 2022-01-19.
//

#include <stdio.h>




int main(void)
{
    int i;
    int x[7] = {0};
    int y[7] = {0};
    int cnt=0;
    int sum=0;
    int min=101;

    for (i = 0; i < 7; i++) {

        scanf("%d", &x[i]);//배열의 각 항 입력받음
        if(x[i]%2!=0){
            y[i]=x[i];

            cnt++;
        }

    }

    if(cnt==0){
        printf("%d",-1);
    }else{
        for(int j=0;j<7;j++){
            sum=sum+y[j];
        }
        printf("%d\n",sum);
        for(int j=0;j<7;j++){
            if(<y[j]){
                max=y[j];
            }
        }
        printf("%d\n",max);
    }




    return 0;
}