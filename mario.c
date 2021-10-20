#include <stdio.h>
#include <cs50.h>
//Prototype
int height(void);
void print(char c, int n);


int main(void)
{
    int n = height();
    for (int i = 0; i < n; i++)
  {
     print(' ', n - 1 - i);
     print('#', 1 + i);
     print(' ', 2);
     print('#', 1 + i);

      printf("\n");
  }

}

//Get input from user
int height(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while(x < 1 ||x > 8);
    return x;
}

//Function to print a character a certain number of times
void print(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}