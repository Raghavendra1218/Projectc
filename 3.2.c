#include <stdio.h>
void main()
{
int x;
printf("enter the year ");
scanf("%d",&x);
switch(x%100){
case 0: switch(x%400){
case 0: printf("%d is leap year",x);
break;
default:printf("%d is not leap year",x);
}break;
default:
    switch(x%4){
case 0:printf("%d is leap year",x);
break;
default:printf("%d is not leap year",x);



}

return 0;


}









}
