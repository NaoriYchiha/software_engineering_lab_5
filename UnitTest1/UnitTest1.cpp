#include "pch.h"
#include "CppUnitTest.h"
#include "H:\программирование\c++\3.5\3.5\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(UR_get3and2_0_5returned)//Test for positive value //
		{
			int x = 3;
			int n = 2;
			double expected = 0.5;

			double actual = UR(x, n);

			Assert::AreEqual(expected, actual);

		}
	public:

		TEST_METHOD(UR_getnegative2and1_negative0_5returned)// Test for negative value //
		{
			int x = -2;
			int n = 1;
			double expected = -0.5;

			double actual = UR(x, n);

			Assert::AreEqual(expected, actual);	

		}
	}
	;
}
