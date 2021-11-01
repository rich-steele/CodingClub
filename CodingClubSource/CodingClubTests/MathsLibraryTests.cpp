#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\..\CodingClubSource\CodingClub\MathsLibrary.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodingClubTests
{		
	TEST_CLASS(MathsLibraryTests)
	{
	public:

		TEST_METHOD_INITIALIZE(init)
		{
			// Any code to be run before each test
		}

		TEST_METHOD_CLEANUP(cleanup)
		{
			// Any code to be run after each test
		}

		TEST_METHOD(Maths_Multiply_Returns_Zero_If_Arguments_Are_Both_Zero)
		{
			// Given
			int int1 = 0;
			int int2 = 0;

			// When

			// Then
			int actual = multiply(int1, int2);
			int expected = 0;

			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(Maths_Multiply_Returns_Product_Of_Two_Given_Positive_Integers)
		{
			// Given
			int int1 = 3;
			int int2 = 5;

			// When
			
			// Then
			int actual = multiply(int1, int2);
			int expected = 3 * 5;

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Maths_Multiply_Returns_Product_Of_Two_Positive_Integers)
		{
			// Given
			int max = 100;

			// When
			for (int i = 0; i < max; i++)
			{
				for (int j = 0; j < max; j++)
				{
					// Then
					int actual = multiply(i, j);
					int expected = i * j;

					Assert::AreEqual(expected, actual);
				}
			}
		}

		TEST_METHOD(Maths_Multiply_Returns_Product_Of_Two_Negative_Integers)
		{
			// Given
			int min = -100;

			// When
			for (int i = 0; i > min; i--)
			{
				for (int j = 0; j > min; j--)
				{
					// Then
					int actual = multiply(i, j);
					int expected = i * j;

					Assert::AreEqual(expected, actual);
				}
			}
		}

		TEST_METHOD(Maths_Clamp_Changes_Value_To_Min_If_Value_Less_Than_Min)
		{
			// Given
			int value = 5;
			int min = 10;
			int max = 100;

			// When
			clamp(value, min, max);

			// Then
			int expected = min;

			Assert::AreEqual(expected, value);
		}

		TEST_METHOD(Maths_Clamp_Changes_Value_To_Max_If_Value_Greater_Than_Max)
		{
			// Given
			int value = 500;
			int min = 10;
			int max = 100;

			// When
			clamp(value, min, max);

			// Then
			int expected = max;

			Assert::AreEqual(expected, value);
		}

		TEST_METHOD(Maths_Clamp_Does_Not_Change_Value_If_Value_Between_Min_And_Max)
		{
			// Given
			int value = 50;
			int min = 10;
			int max = 100;

			// When
			clamp(value, min, max);

			// Then
			int expected = 50;

			Assert::AreEqual(expected, value);
		}
	};
}