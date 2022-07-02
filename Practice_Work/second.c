// ************************C Practice Programs*************************** 

// 1))

#include<stdio.h>

int main()
{
    printf("Welcome to C language");
}

// 2))

#include<stdio.h> 
#include<conio.h>

int main()  
{     
    int l =5, b=10, area, perimeter;  
    printf("Length & Breadth of the rectangle is: %d & %d",l, b);

    area = l * b; // calculate area of rectangle.

    perimeter = 2 * (l + b); // calculate perimeter of rectangle.

    printf("\n Area of Rectangle is: %d", area);

    printf("\n Perimeter of Rectangle is: %d", perimeter);    
}   


// 3))

#include<stdio.h> 

int main()  
{     
    int l, b, area, perimeter;

    printf("Enter the length of the rectangle");  
    scanf("%d", l);        // take input from the user  

    printf("Enter the breadth of the rectangle");  
    scanf("%d", b);   

    area = l * b;                     // calculate the area of rectangle.
      
    perimeter = 2 * (l + b);         // calculate the perimeter of rectangle.

    printf("\n Area of Rectangle is: %d", area);

    printf("\n Perimeter of Rectangle is: %d", perimeter);    
}  


// 4))

#include<stdio.h>

int main(){
    printf("Hello World\n");
    printf("I am Chiti");
    return 0;
}


// 5))

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter first Number: ");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);

    int result = a + b;

    printf("The result is: %d",result);

}


// 6))

#include<stdio.h>

int main()
{
    int name[20],age,salary,height;

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your Height: ");
    scanf("%f",&height);

    printf("Enter your Salary: ");
    scanf("%d",&salary);
    
    printf("your Name: %s \n",name);
    printf("your age: %d \n",age);
    printf("your height: %f \n",height);
    printf("your salary: %d \n",salary);

}