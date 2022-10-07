#include<stdio.h>
int main(){
    int a[3][3],i,j,k,s[2],min,max;
    printf("enter the matrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }}
    for(i=0;i<3;i++){
        min = a[i][0];
     for(j=0;j<3;j++){
         if(min>=a[i][j]){
         min=a[i][j];
         s[0]=i;
         s[1]=j;
     } } 
      max=a[0][s[1]];
     for(k=0;k<3;k++){
      if(max<=a[k][s[1]]){
          max=a[k][s[1]];
      }
      }
      if(min==max){
          printf("%d is the value of saddle point which is at %d,%d\n",min,s[0],s[1]); }
      else
      printf("no saddle point at row %d\n",i);
    }
    return 0;
}
