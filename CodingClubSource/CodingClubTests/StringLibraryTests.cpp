#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\..\CodingClubSource\CodingClub\StringLibrary.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodingClubTests
{		
	TEST_CLASS(StringLibraryTests)
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

		TEST_METHOD(String_RemoveVowels_Returns_InputString_With_Vowels_Removed)
		{
			// Given
			std::string input = "Cornwall";
			std::string result;

			// When
			result = removeVowels(input);

			// Then
			std::string expected = "Crnwll";

			Assert::AreEqual(expected, result);
		}
	};
}