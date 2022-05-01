#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\KATERYNA\Desktop\Лабораторні\Labb1.1\Labb1.1\CProgression.h"
#include "C:\Users\KATERYNA\Desktop\Лабораторні\Labb1.1\Labb1.1\CProgression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Progression pgr;
			Assert::AreEqual(pgr.Init(1, 0), false);
		}
	};
}
