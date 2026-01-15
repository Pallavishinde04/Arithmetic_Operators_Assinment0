#include<stdio.h>
void main(){
	//Q1
	// Addition of two integers 
	int a = 10, b = 20;
	int res = a + b;
	printf("Addition of two int value's is = %d",res);
	
	//Q2
	// Area of circle
	int r = 4;
	float pi = 3.14;
	float area = pi * r * r;
	printf("\n Area of circle is = %f",area);
	
	//Q3
	// Convert temperature from Celsius to Fahrenheit
	int c = 42;
	float f = (c*9.0/5)+32;
	printf("\n Temperature is = %.2f", f);
	
	//Q4
	//Swap two numbers using a temporary third variable.
	int x = 2, y = 5;
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	
	printf("\n x = %d", x);
	printf("\n y = %d", y);
	
	//Q5
	//Take input five numbers & find their Average.
	int n=10, n1=20, n2=30, n3=40, n4=50;
	int avg = (n+n1+n2+n3+n4)/5;
	printf("\n Average is = %d",avg); 
	
	//Q6
	//Find square and cube of a given number.
	int sc = 5;
	int square = sc * sc;
	int cube = sc * sc * sc;
	printf("\n Square is = %d",square);
	printf("\n Cube is = %d", cube);
	
	//Q7
	//Convert given minutes into hours and remaining minutes.
	int total_minutes=150;
	int hours,minutes;
	
    hours=total_minutes/60;
    minutes=total_minutes%60;
    
    printf("\n Houres = %d", hours);
    printf("\n Minutes = %d", minutes);
    
    //Q8
    //Take the length & width of a rectangle & find it's perimeter.
    int l = 8, w = 4;
	int perimeter = 2*(l+w);
	
	printf("\n Perimeter of rectangle = %d",perimeter); 
	
	//Q9
	// take input the base & height of the triangle & calculate it's area.
	
	int base = 4, height = 10;
    float tri_area = 0.5*base*height;
	printf("\n Area of Rectangle is = %f",tri_area);
	
	//Q10
	//take five marks of subjects, find the total marks & percentage.
	int s1=75, s2=66, s3=50,s4=90, s5=95;
	int total = s1+s2+s3+s4+s5;
	float percentage = (376.0/500)*100;
	printf("\n percentage is = %.2f",percentage);
	
	}
