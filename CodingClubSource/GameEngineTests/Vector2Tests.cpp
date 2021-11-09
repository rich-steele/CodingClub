#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\..\CodingClubSource\GameEngine\Vector2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameEngineTests
{		
	TEST_CLASS(Vector2Tests)
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
		
		TEST_METHOD(Vector2_Default_Constructor_Sets_Member_Variables_To_Zero)
		{
			// Given

			// When
			Vector2 testVector;

			// Then
			Assert::AreEqual(0.0f, testVector.x);
			Assert::AreEqual(0.0f, testVector.y);
		}

		TEST_METHOD(Vector2_Constructor_Sets_Member_Variables_To_Passed_In_Values)
		{
			// Given test a range from -10 to 10
			int min = -10;
			int max = 10;

			for (float x = min; x < max; x++)
			{
				for (float y = min; y < max; y++)
				{
					// When
					Vector2 testVector(x, y);

					// Then
					Assert::AreEqual(x, testVector.x);
					Assert::AreEqual(y, testVector.y);
				}
			}
		}

		TEST_METHOD(Vector2_Add_Operator_Adds_Two_Vector2s_Together)
		{
			// Given
			Vector2 vectorA(2, 5);
			Vector2 vectorB(6, 9);

			// When
			Vector2 result = vectorA + vectorB;

			// Then
			Vector2 expected(8, 14);

			Assert::AreEqual(expected.x, result.x);
			Assert::AreEqual(expected.y, result.y);
		}

		TEST_METHOD(Vector2_Add_Assignment_Operator_Adds_Rhs_To_Lhs) // Right hand side to Left hand side
		{
			// Given
			Vector2 vectorA(2, 5);
			Vector2 vectorB(6, 9);

			// When
			vectorA += vectorB;

			// Then
			Vector2 expected(8, 14);

			Assert::AreEqual(expected.x, vectorA.x);
			Assert::AreEqual(expected.y, vectorA.y);
		}
	};
}