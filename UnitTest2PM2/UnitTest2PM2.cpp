#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" void setLength(int, int*);
extern "C" void setWidth(int , int*);
namespace UnitTest2PM2
{
	TEST_CLASS(UnitTest2PM2)
	{
	public:
		
			TEST_METHOD(checklengthvalid)    // length is between range 
			{
				int length = 0;
				setLength(55, &length);
				Assert::AreEqual(55, length);
			}
			TEST_METHOD(Lengthcheckinvaild)    // length is out of range 
			{
				int length = 0;
				setLength(100, &length);
				Assert::AreEqual(100, length);
			}
			TEST_METHOD(LengthcheckInvalidNegative)    // length is out of range 
			{
				int length = 0;
				setLength(-9, &length);
				Assert::AreEqual(-9, length);
			}

			TEST_METHOD(WidthcheckInvalid)    // width is out of range 
			{
				int width = 0;
				setWidth(100, &width);
				Assert::AreEqual(100, width);
			}

			TEST_METHOD(Widthcheckvalid)   // width is between range 
			{
				int width = 0;
				setWidth(78, &width);
				Assert::AreEqual(78, width);
			}

			TEST_METHOD(WidthcheckInvalidNegative)    // width is out of range
			{
				int width = 0;
				setWidth(-4, &width);
				Assert::AreEqual(-4, width);
			}
		
	};
}
