#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
namespace UnitTest1PM2
{
	TEST_CLASS(UnitTest1PM2)
	{
	public:
		
			TEST_METHOD(PerimeterTest)
			{
				int length = 5;
				int width = 5;
				int expectedPerimeter = 20;
				int actualPerimeter = getPerimeter(&length, &width);
				Assert::AreEqual(expectedPerimeter, actualPerimeter);
			}

			TEST_METHOD(AreaTest)
			{
				int length = 5;
				int width = 10;
				int expectedArea = 50;
				int actualArea = getArea(&length, &width);
				Assert::AreEqual(expectedArea, actualArea);
			}
		
	};
}
