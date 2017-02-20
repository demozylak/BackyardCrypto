#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Ciphers/WhiteRemove.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace UnitTests
{		
	TEST_CLASS(WhiteRemoveTest)
	{
	public:
		
		TEST_METHOD(Constructor)
		{
			WhiteRemove *t = new WhiteRemove();
		}

		TEST_METHOD(GetName)
		{
			WhiteRemove *t = new WhiteRemove();
			string ret = t->getName();


			Assert::AreEqual((string)"WhiteRemove", ret, L"GetName() returns wrong name!");
		}

		TEST_METHOD(Encoder)
		{
			WhiteRemove *t = new WhiteRemove();
			string ret = t->encrypt("Ala ma kota ");

			Assert::AreEqual((string)"Alamakota", ret);

			ret = t->encrypt("  Ala ma kota\na kot ma Ale");

			Assert::AreEqual((string)"AlamakotaakotmaAle", ret);

		}
	};
}