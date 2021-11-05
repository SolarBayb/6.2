#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int M[4] = { -2,4, 1, 0 };
			int S = SumArr(M, 4,0);
			Assert::AreEqual(S,2);
		}
	};
}
