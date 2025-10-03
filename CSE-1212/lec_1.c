#include <stdio.h>

// 1. Print something
int main1() {
    printf("Hello Hussain\n"); // Just print
    return 0;
}

// 2. User input
int main2() {
    int x;
    scanf("%d",&x);          // Take input
    printf("%d\n",x);        // Show same number
    return 0;
}

// 3. Summation of two numbers
int main3() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);      // Add two numbers
    return 0;
}

// 4. Calculator
int main4() {
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+') printf("%d\n",a+b);
    if(op=='-') printf("%d\n",a-b);
    if(op=='*') printf("%d\n",a*b);
    if(op=='/') printf("%d\n",a/b);
    return 0;
}

// 5. Name and ID using \t
int main5() {
    printf("Name\t: Student\nID\t: 101\n"); // \t = tab space
    return 0;
}

// 6. Even or Odd
int main6() {
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("Even\n");  // %2==0 → even
    else printf("Odd\n");
    return 0;
}

// 7. Positive or Negative
int main7() {
    int n;
    scanf("%d",&n);
    if(n>0) printf("Positive\n");
    else if(n<0) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}

// 8. Grade calculation
int main8() {
    int m;
    scanf("%d",&m);
    if(m>=80) printf("A+\n");
    else if(m>=70) printf("A\n");
    else if(m>=60) printf("B\n");
    else if(m>=50) printf("C\n");
    else if(m>=40) printf("D\n");
    else printf("F\n");
    return 0;
}

// 9. Maximum number among three
int main9() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c) printf("%d\n",a);
    else if(b>=a && b>=c) printf("%d\n",b);
    else printf("%d\n",c);
    return 0;
}

// 10. Alphabet or Number or Special
int main10() {
    char ch;
    scanf(" %c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) printf("Alphabet\n");
    else if(ch>='0'&&ch<='9') printf("Number\n");
    else printf("Special\n");
    return 0;
}

// 11. Upper case or Lower case
int main11() {
    char ch;
    scanf(" %c",&ch);
    if(ch>='A'&&ch<='Z') printf("Uppercase\n");
    else if(ch>='a'&&ch<='z') printf("Lowercase\n");
    else printf("Not a letter\n");
    return 0;
}

// 12. Vowel or Consonant
int main12() {
    char ch;
    scanf(" %c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else printf("Consonant\n");
    return 0;
}

// 13. Alphabet / Number / Special + Vowel or Consonant
int main13() {
    char ch;
    scanf(" %c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("Vowel\n");
        else printf("Consonant\n");
    }
    else if(ch>='0'&&ch<='9') printf("Number\n");
    else printf("Special\n");
    return 0;
}

// 14. Leap year (basic rule)
int main14() {
    int y;
    scanf("%d",&y);
    if(y%4==0) printf("Leap Year\n");
    else printf("Not Leap Year\n");
    return 0;
}

// 15. Proper leap year (real rule)
int main15() {
    int y;
    scanf("%d",&y);
    if((y%400==0) || (y%4==0 && y%100!=0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    return 0;
}