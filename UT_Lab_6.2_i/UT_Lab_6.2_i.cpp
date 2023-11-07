#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2_i/Lab_6.2_i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLab62i
{
	TEST_CLASS(UTLab62i)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Sum(int* t, const int size), S;
			int e[5] = { 4, 7, 0, 2, 5 };
			S = Sum(e, 5);
			Assert::IsTrue(S == 6);
		}
	};
}
