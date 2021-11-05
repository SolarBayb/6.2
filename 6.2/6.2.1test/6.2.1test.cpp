#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My621test
{
	TEST_CLASS(My621test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int M[4] = { -2, 4, 1 };
			int S = SumArr(M, 4);
			Assert::AreEqual(S, 2);
		
		}
	};
}
