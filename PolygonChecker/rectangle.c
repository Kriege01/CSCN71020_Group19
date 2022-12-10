#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "rectangle.h"

void rectangle() {
	
	//Length variable
	int length = 1;

	//Width variable
	int width = 1;

	//Continue program boolean
	bool continueProgram = true;

	while (continueProgram)//While continueProgram = true then..
	{ 
		//Call printWelcomeMenu() function
		printWelcomeMenu(); 

		//Call printOptions() function
		printOptions();

		//Menu input variable
		int menuInput;

		//menuInput = user input
		menuInput = getInput("Enter option number:");

		//Switch case based off assigned value of menuInput
		switch (menuInput)
		{
		case 1: //If user input is 1... Get Rectangle Length & Width
		{
			//Print that the rectangle has a length of 'length' and a width of 'width'
			printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
			break;
		}
		case 2: //If user input is 2... Change Rectangle Length
		{
			//input = user input from getIntInput()
			int input = getInput("Please enter the length of the rectangle:");

			//Length is set based off input and length values
			setLength(input, &length);
			break;
		}
		case 3: //If user input is 3... Change Rectangle Width
		{
			//input = user input from getIntInput()
			int input = getInput("Please enter the width of the rectangle:");

			//Width is set based off input and length values
			setWidth(input, &width);
			break;
		}
		case 4: //If user input is 4... Get Rectangle Perimeter
		{
			//Print rectangles perimeter value
			printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
			break;
		}
		case 5://If user input is 5... Get Rectangle Area
		{
			//Print rectangles area value
			printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
			break;
		}
		case 6://If user input is 6... Exit
		{
			//Stop rectangle program
			continueProgram = false;
			break;
		}
		default://Default path if user input is invalid
		{
			//Print that user entered an invalid value 
			printf("\nInvalid value entered.\n\n");
			break;
		}
		}
	}
}

//Print rectangle welcome menu
void printWelcomeMenu()
{
	printf(" **********************\n");
	printf("**     Rectangle     **\n");
	printf("**      Solver       **\n");
	printf(" **********************\n");
}

//Print rectangle options menu
void printOptions()
{
	printf("1. Get Rectangle Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}

//Get user input function.
int getInput(char message[]) 
{
	//Input variable
	int input;

	//Scanned values variable
	int scanned;

	//Do...
	do {
		//Print 'message'
		printf("\n%s\n", message);

		//Scanned = stored scan of input
		scanned = scanf_s("%i", &input);

		//Buffer
		int buf;

		//While loop to have 'buf' gather and store lines that are not null/new line and that the gathering stops at the end of the file
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scanned != 1);
	return input;
}

//Set length function
void setLength(int input, int* length) 
{
	//If input is >=0 and <100 then set length as the value of input
	if (input >= 0 && input < 100) {
		*length = input;
	}
}

//Set width function
void setWidth(int input, int* width) 
{
	////If input is >0 and <=100 then set width as the value of input
	if (input > 0 && input <= 100) {
		*width = input;
	}
}

//Get perimeter function
int getPerimeter(int* length, int* width) 
{
	//Perimeter is = to side lengths of the rectangle added up
	int perimeter = *length + *length + *width;

	//Return perimeter value
	return perimeter;
}

//Get area function
int getArea(int* length, int* width)
{
	//Area is = the length * width
	int area = *length * *width;

	//Return area value
	return area;
}

