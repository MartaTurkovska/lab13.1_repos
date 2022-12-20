#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_13.1/var.h"
#include "../lab_13.1/var.cpp"
#include "../lab_13.1/dod.h"
#include "../lab_13.1/dod.cpp"
#include "../lab_13.1/sum.h"
#include "../lab_13.1/sum.cpp"
#include "../lab_13.1/lab_13_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 2;
			x = 4;
			n = 2;
			dod();
			Assert::AreEqual(a, 1.);
		}
	};
}
