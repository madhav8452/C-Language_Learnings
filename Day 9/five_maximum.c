#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter value of A, B, C, D & E: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);


    if(a == b && a == c && a == d && a == e && b == c && b == d && b == e && c == d && c == e && d == e)
    {
        printf("All Value are Same...");
    }

    else
    {
        if(a > b)
        {
            if(a > c)
            {
                if(a > d)
                {
                    if(a > e)
                    {
                        printf("A is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
                else
                {
                    if(d > e)
                    {
                        printf("D is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
            }
            else
            {
                if(c > d)
                {
                    if(c > e)
                    {
                        printf("C is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
                else
                {
                    if(d > e)
                    {
                        printf("D is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
            }
        }

        else
        {
            if(b > c)
            {
                if(b > d)
                {
                    if(b > e)
                    {
                        printf("B is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
                else
                {
                    if(d > e)
                    {
                        printf("D is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
            }
            else
            {
                if(c > d)
                {
                    if(c > e)
                    {
                        printf("C is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
                else
                {
                    if(d > e)
                    {
                        printf("D is Maximum...");
                    }
                    else
                    {
                        printf("E is Maximum...");
                    }
                }
            }
        }
    }
}