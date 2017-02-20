#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Base/Key.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace UnitTests
{
	
	TEST_CLASS(KeyTest)
	{
	public:

		TEST_METHOD(Constructor)
		{
			Key *k = new Key("abc","bca");
		}

		TEST_METHOD(GetMethod)
		{
			Key *k = new Key("abc", "bca");
			Assert::AreEqual((string)"abc", k->getMethod());
		}

		TEST_METHOD(GetPassphrase)
		{
			Key *k = new Key("abc", "bca");
			Assert::AreEqual((string)"bca", k->getPassword());
		}
	};

}