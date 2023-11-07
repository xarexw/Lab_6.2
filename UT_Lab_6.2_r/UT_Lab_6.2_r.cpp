#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2_r/Lab_6.2_r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLab62r
{
	TEST_CLASS(UTLab62r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Sum(int* t, const int size, int i), S;
			int e[5] = { 4, 7, 0, 2, 5 };
			S = Sum(e, 5, 0);
			Assert::IsTrue(S == 6);
		}
	};
}
