#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 it/Lab 6.2 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 6, 4, 4, 3, -10, 8, -1, -8, -9, 0 };
			int c = findSmallestIndex(a, 10, -1, INT_MAX);
			Assert::AreEqual(c, 8);
		}
	};
}
