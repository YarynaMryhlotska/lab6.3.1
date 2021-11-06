#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\lab6.3.1\lab6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int S;
			S = 0;
			Assert::AreEqual(S, 0);
		}
	};
}
