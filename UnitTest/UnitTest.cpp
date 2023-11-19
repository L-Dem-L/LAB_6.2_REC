#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.2_REC/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestSumOddIndexedElementsRecursive)
		{
			// Arrange
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			// Act
			int result = sumOddIndexedElementsRecursive(arr, size, 1);

			// Assert
			Assert::AreEqual(6, result);
		}
	};
}
