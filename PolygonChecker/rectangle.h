#pragma once

//Rectangle feature function
void rectangle(); 

//Set length function
void setLength(int input, int* length);

//Set width function
void setWidth(int input, int* width);

//Calculate perimeter function
int getPerimeter(int* length, int* width);

//Calculate area function
int getArea(int* length, int* width);

//Print rectangle welcome menu
void printWelcomeMenu();

//Print rectangle options
void printOptions();

//Get user input function
int getInput(char message[]);
