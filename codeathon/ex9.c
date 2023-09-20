#include<stdio.h>
void main()
{
    char ch;
    int r,areaOfc,l,b,areaOfrect,side,areaOfsq,h,b,areaOftri;
    prinft("Enter any choice: '11','22','33','44'");
    scanf("%s",ch);
switch(ch){
    case '11':printf("\nEnter the radius:");
              scanf("%d",&r);
              areaOfc=3.14*r*r;
              printf("\nArea of circle=%d",areaOfc);
              break;
    case '22':printf("Enter the length and breadth");
              scanf("%d%d",&l,&b);
              areaOfrect=l*b;
              printf("\nThe area of rectangle is:%d",areaOfrect);
              break;
    case '33' :printf("Enter the length of side");      
             scanf("%d",&side);
             areaOfsq=side*side;
             prinft("\nThe area of square is=%d",areaOfsq);
             break;
    case '44' :printf("\nEnter the breadth and height");
               scanf("%d%d",&h,&b);
                areaOftri=1/2*b*h;
               printf("\nThe area of triangle is=%d",areaOftri);
    break;









}

}