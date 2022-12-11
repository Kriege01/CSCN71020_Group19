#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

extern "C" int* anglefinder(int, int, int);

extern "C" void setLength(int, int*);

extern "C" void setWidth(int, int*);

extern "C" int getPerimeter(int*, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//Triangle type analysis testing suite
namespace TestingSuite
{
TEST_CLASS(TriangleAnalysisFunctionality)
{
public:

	TEST_METHOD(TriangleAnalysisEquilateral)
	{
		char* result;

		int triangleSides[3] = { 10, 10, 10 };

		result = analyzeTriangle(triangleSides[0], triangleSides[1], triangleSides[2]);

		Assert::AreEqual("Equilateral", result);
	}

	TEST_METHOD(TriangleAnalysisScalene)
	{
		char* result;

		int triangleSides[3] = { 15, 13, 12 };

		result = analyzeTriangle(triangleSides[0], triangleSides[1], triangleSides[2]);

		Assert::AreEqual("Scalene", result);
	}


	TEST_METHOD(TriangleAnalysisIsosceles)
	{
		char* result;

		int triangleSides[3] = { 10, 10, 9 };

		result = analyzeTriangle(triangleSides[0], triangleSides[1], triangleSides[2]);

		Assert::AreEqual("Isosceles", result);
	}


};

TEST_CLASS(TriangleInsideAngleFunctionality)
{
public:
	TEST_METHOD(TriangleInsideAngleEquilateral)
	{
		int* result;

		int angle[3] = { 60.00,  60.00,  60.00 };

		int triangleSidesPtr[3] = { 10, 10, 10 };

		result = anglefinder(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);

		Assert::AreEqual(angle[2], result[3]);


	}

	TEST_METHOD(TriangleInsideAngleScalene)
	{
		int* result;

		int angle[3] = { 73.62,  56.25,  50.13 };

		int triangleSidesPtr[3] = { 15, 13, 12 };

		result = anglefinder(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);

		Assert::AreEqual(angle[2], result[3]);


	}

	TEST_METHOD(TriangleInsideAngleIsosceles)
	{
		int* result;

		int angle[3] = { 48.05,  48.05,  42.02 };

		int triangleSidesPtr[3] = { 10, 10, 9 };

		result = anglefinder(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);

		Assert::AreEqual(angle[2], result[3]);


	}




};

TEST_CLASS(FourPointsFunctionality)
{
public:
	TEST_METHOD(FourPointsLengthPositive)
	{
		int input = 20;

		int length = 20;
		setLength(input, &length);

		Assert::AreEqual(input, length);
	}

	TEST_METHOD(FourPointsLengthNegative)
	{
		int input = 101;

		int length = 20;
		setLength(input, &length);

		Assert::AreNotEqual(input, length);
	}

	TEST_METHOD(FourPointsWidthNegative)
	{
		int input = 101;

		int length = 20;
		setWidth(input, &length);

		Assert::AreNotEqual(input, length);
	}

	TEST_METHOD(FourPointsWidthPositive)
	{
		int input = 20;

		int length = 20;
		setWidth(input, &length);

		Assert::AreEqual(input, length);
	}

	TEST_METHOD(RectanglePerimeter)
	{
		int* length;

		int input;

		int* width;

		int result;

		int perimeter;

		input = 10;

		setLength(input, length);
		

		input = 15;

		setWidth(input, width);
	

		perimeter = *length + *length + *width;

		result = getPerimeter(length, width);

		Assert::AreEqual(result, perimeter);


		
	}

	TEST_METHOD(RectangleArea)
	{

		int* length;

		int input;

		int* width;

		int result;

		int area;

		input = 10;
		setLength(input, length);

		input = 15;
		setWidth(input, width);
		
		area = *length * *width;

		result = getPerimeter(length, width);

		Assert::AreEqual(result, area);

	}


};


}
