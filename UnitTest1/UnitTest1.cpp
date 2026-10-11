#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
		public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = g(1, 2, 3);
			Assert::AreEqual(-4.0, t, 1e-9);
		}
	};
}
