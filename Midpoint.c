#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void Bcircle(int r);
void main()
{
  int gd=DETECT,gm;            /* request auto detection */
  int r,i;
  initgraph(&gd,&gm,"C:\\TC\\BGI");     /* initialize graphic mode */
  for(i=0;i<2;i++)
  {
     printf("Enter the radius of circle:");
     scanf("%d",&r);
     Bcircle(r);
   }
    getch();
}
void Bcircle(int r)
{
  int x,y,xc=200,yc=200,p;        /*Predefined center of circle*/
  x=0;
  y=r;

  p=3-(2*r);
  for(x=0;x<=y;x++)
  {
    putpixel(xc+x,yc-y,1);

    if(p<0)
    {
      y=y;
      p=(p+(4*x)+1);
    }
    else
    { y=y-1;
      p=(p+(4*(x-y)+1));
    }
  /*plot points on all eight octants circle centered*/


    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
  }
}
