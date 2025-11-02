#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the values of cordintates :");
    scanf("%d %d",&x,&y);
    if (x>0 &&y>0){
        printf("They lie in the first quadrant");
    }
    if (x>0 &&y<0){
        printf("They lie in the 4th quadrant");
    }
     if (x<0 &&y<0){
        printf("They lie in the 3rd quadrant");
    }
    if (x<0&&y>0){
        printf("They lie in the 2nd quadrant");
      }
        return 0;
}