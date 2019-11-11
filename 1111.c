#include<stdio.h>

int main(void)
{
    int score;
    printf("Enter score:\n");
    scanf("%d",&score);

    if(score < 60){
        printf("E:\n");
    }else if(score < 70) & (score >= 60){
        printf("D:\n");
    }else if(score < 80) & (score >= 70){
        printf("C:\n");
    }else if(score < 90) & (score >= 80){
        printf("B:\n");
    }else if(score < 100) & (score >= 90){
        printf("A:\n");
    }

        return 0
}