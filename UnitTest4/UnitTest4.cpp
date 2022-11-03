#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S1(4, 1, 4);
			Assert::AreEqual (t, 0.0);
		}
	};
}
