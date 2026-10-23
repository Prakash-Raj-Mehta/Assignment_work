// 1. Check whether a Number is Even or Odd

#include <stdio.h>
int main(){
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    if (a /2 == 0) printf("even number");





































    
    else printf("odd number");
    return 0;
}

// 2. Check whether a Number is Positive, Negative, or Zero
#include <stdio.h>
int main(){
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    if (a > 0) printf(" positive number");
    else if (a <0 ) printf("negative number");
    else printf("zero");
    return 0;
}
// 3. Find the Largest of Two Numbers
#include <stdio.h>
int main() {
    int a,b;
    printf("enter a number \n");
    scanf("%d%d",&a,&b);
    if (a > b) printf(a,"%d is greter ");
    else printf(b, "%d is greater");
    return 0;
}
// 4. Find the Largest of Three Numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a number \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b && a > c) printf(a, " %d%d%d is greter then ",b,c);
    else if (b > a && b > a) printf(b, " %d%d%d is greter then ",a,c);
    else if( c > a && c > b) printf(c , " %d%d%d is greter than ", b,a);
    else printf( a,b,c,"%d%d%d all are equal");
    return 0;
}
// 5. Check whether a Number is Prime or Not
#include <stdio.h>
int main(){
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    for (int i = 2 ; i*i <= a;i++){
        if (a % i == 0) {
            printf("%d it is not a prime number \n",a); 
            break;}
        else{ 
            printf("%d it is a prime number \n",a); 
            break ;}
    }
    return 0;
}
// 6. Find the Factorial of a Number
#include <stdio.h>
int main() {
    int a,b=1;
    printf("enter a number ");
    scanf("%d",&a);
    for (int i = 1; i<=a;i++){
       b = b*i;
        
    }
    printf("%d is the factorial \n",b);

    return 0;
}
// 7. Generate the Fibonacci Series
#include <stdio.h>

int main() {
    int a, b = 0, c = 1, next;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        printf("%d\n", b);

        next = b + c;
        b = c;
        c = next;
    }

    return 0;
}
// 8. Find the Sum of Natural Numbers from 1 to N
#include <stdio.h>
int main(){
    int a, b = 0;
    printf("enter a number: ");
    scanf("%d",&a);
    for (int i = 1; i <= a;i++){
        b = b+i;
        
    }
    printf("%d\n",b);
    return 0;
}
// 9. Check whether a Number is a Palindrome
#include <stdio.h>
int main(){
    int a,original, reverse = 0,remainder;
    printf("enter a number: ");
    scanf("%d",&a);
    original = a;
    while (a> 0){
        remainder = a% 10;
        reverse = reverse * 10 + remainder;
        a = a/ 10;
    }
    if (original == reverse) printf("%d is a Palindrom Number\n",original);
    else printf("%d is Not a Palindrom Number \n " ,original);
    
    
    return 0;
}


#include <stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    switch(a){
        case 1:

            printf("one");
            break;
        case 2:
            printf("tow");
            break;
        case 3:
            printf("three");
            break;
        default:
            printf("bhag bsdk");


    }

    return 0;
}

#include <stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++){
        if (i == 2) {
            printf("two \n");
            continue;
        }
        else if (i % 2 ==0) {
            printf("(.)   (.)\n");
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}



#include <stdio.h>
int main(){
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
start:
    printf("%d\n",a);
    a++;

    if (a <= 5){
        printf("it is a invalid number ");
        goto start;
    }
    return 0;

}