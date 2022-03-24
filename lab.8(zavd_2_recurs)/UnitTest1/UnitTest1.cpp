#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8(zavd_2_recurs)/lab.8(zavd_2_recurs).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char A[] = "JHJKH QS KHGHJ SQ";
			Change(0, A, 0, 0);

			Assert::IsTrue("JHJKH *** KHGHJ ***");
		}
	};
}
