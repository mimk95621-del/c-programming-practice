#include<stdio.h>
int main(){
    float w,l,area,perimeter;
    scanf("%f %f",&w,&l);
    area=w*l;
    perimeter=2*(w+l);
    printf("area=%.2f\n",area);
    printf("perimeter=%.2f\n",perimeter);
    return 0;
}
