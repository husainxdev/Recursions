#include<stdio.h>
struct name
{
    int age;
    float height;
};

int main()
{
   struct name name1, name2;

   // প্রথম ডাটা
   name1.age = 30;
   name1.height = 5.4;

   printf("Enter your data -1 \n");
   printf("Age = %d\n", name1.age);
   printf("Height = %.2f\n", name1.height);

   // দ্বিতীয় ডাটা
   name2.age = 50;
   name2.height = 5.0;

   printf("Enter your data -2 \n");
   printf("Age = %d\n", name2.age);
   printf("Height = %.2f\n", name2.height);

   return 0;
}


