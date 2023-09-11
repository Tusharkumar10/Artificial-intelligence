#include<stdio.h>
#include<conio.h>
void main()
{

int jug1=0,jug2=0,ch=0;
clrscr();
printf("Initially : Jug1 = %d , Jug2 = %d\n",jug1,jug2);
printf("1.Empty both the Jugs \n\n2.Fill the jug2 with 3liter\n\n");
printf("3.Pour the water of Jug2 in the Jug1\n\n4.Again fill the Jug2\n\n");
printf("5.Fill jug1 completely\n\n6.now empty the jug1\n\n7.now pour the water of jug2 into jug1\n\n");
printf("8.Exit\n\n");
while(ch!=8)
{
printf("Enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1:{
if(jug1>0)
{
   jug1=0;
}

if(jug2>0)
{
jug2=0;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
break; }
case 2: {
if(jug2==0)
{
  jug2=3;
  printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
}  break;}

case 3:{
 if(jug1==0 && jug2==3)
{
  jug1=3;
  jug2=0;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
 break;  }
case 4: {
 if(jug1==3 && jug2==0)
{
  jug1=3;
  jug2=3;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
 break;   }
case 5:{
if(jug1==3 && jug2==3)
{
  jug1=4;
  jug2=2;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
break;  }
case 6:{
if(jug1==4 && jug2==2)
{
  jug1=0;
  jug2=2;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
break;  }
case 7:{
if(jug1==0 && jug2==2)
{
  jug1=2;
  jug2=0;
}
printf("Jug1 = %d , Jug2 = %d\n",jug1,jug2);
break;   }
case 8:exit(0);break;
}
}
getch();

}