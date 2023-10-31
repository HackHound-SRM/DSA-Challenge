/* C Program to convert temperature from Celsius to 
* Fahrenheit*/
#include <stdio.h> 

// function for conversion 
float celsius_to_fahrenheit(float N) 
{ 
	return ((N * 9.0 / 5.0) + 32.0); 
} 

// Driver code 
int main() 
{ 
	float N = 32.0; 

	// Function call 
	printf("Temperature in Fahrenheit : %0.2f", 
		celsius_to_fahrenheit(N)); 
	return 0; 
}
