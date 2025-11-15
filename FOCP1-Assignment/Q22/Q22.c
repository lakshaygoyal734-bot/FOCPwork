 
#include <stdio.h>
int main(){
    char word[20];
    scanf("%s",word);
    int z=0,o=0;
    for(int i=0;i<20;i++){
        if(word[i]=='z'){
            z++;
        }
        else if(word[i]=='o'){
            o++;
        }
}
if(z*2==o){
    printf("Yes");
}
else{
    printf("No");
}
    return 0;
}
