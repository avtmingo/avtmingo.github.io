#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);

    int i, j, counter = 0;
    int height = 5;
    for (i = 0; i < height; i++)
    {
        print_str("*");
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                print_str("*");
            else if (j == counter)
                print_str("*");
            else
                print_str(" ");
        }
        counter++;
        print_str("\n");
    }
    print_str("\n");

    height = 5;
    for (i = 0; i < height; i++)
    {
        if (i != 0 && i != height - 1)
            print_str("*");
        else
            print_str(" ");
        for (j = 0; j < height; j++)
        {
            if (((i == height - 1) && j >= 0 && j < height - 1))
                print_str("*");
            else if (j == height - 1 && i != 0 && i != height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
    print_str("\n");

    height = 5;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2 || i == height - 1))
                print_str("*");
            else if (i < height / 2 && j == 0)
                print_str("*");
            else if (i > height / 2 && j == height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
    print_str("\n");

    height = 5;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0)
                print_str("*");
            else if (j == height / 2)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
    print_str("\n");
}

//

/*

    
    height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0)
                print_str("*");
            else if (j == height / 2)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
     print_str("\n");
}
*/