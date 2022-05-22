#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(x*x-x-1);
}


int main()
{
    int i;
    float a, b, m, e=0.0001;
    printf("enter the values of a and b");
    scanf("%f%f",&a, &b);
    if(f(a)*f(b)>0)
        printf("invalid interval");
    else
    {
        m=(a*f(b)-b*f(a))/(f(b)-f(a));
        i=1;
        while(fabs(f(m))>e)
        {
            printf("\n%d\t%f\t%f\t%f\t%f\t%f",i,a,b,m,f(m),f(a)*f(m) );
            if(f(a)*f(m)>0)
                a=m;
            else
                b=m;
          m=(a*f(b)-b*f(a))/(f(b)-f(a)); 
            i=i+1;
        }
        printf("\n%d\t%f\t%f\t%f\t%f\t%f");
        printf("root=%f",m);
        return 0;
    }
 }