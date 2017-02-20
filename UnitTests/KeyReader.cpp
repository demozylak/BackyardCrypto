#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Base/Keyreader.h"
#include "../Base/Iterator.h"
#include "../Base/Key.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Tests
{
	TEST_CLASS(KeyReaderTest)
	{
	public:
		
		class DummyIn :public AbstractInput {
			private :
				string a;
			public:
				DummyIn(string a) :AbstractInput("") { this->a = a; }
				string getString() { return a; }
		};


		TEST_METHOD(Constructor)
		{
			KeyReader *k = new KeyReader(new DummyIn("dummystring\ncorrectkey"));
		}

		TEST_METHOD(IteratorTest)
		{
			DummyIn *i = new DummyIn("abc\nklucz1\nbca\nklucz2");
			KeyReader *r = new KeyReader(i);

			Iterator<Key*> *it = r->getIterator();

			Key * a;

			Assert::IsFalse(it->isEnd());
			a = it->next();
			Assert::AreEqual((string)"abc", a->getMethod());
			Assert::AreEqual((string)"klucz1", a->getPassword());

			Assert::IsFalse(it->isEnd());
			a = it->next();
			Assert::AreEqual((string)"bca", a->getMethod());
			Assert::AreEqual((string)"klucz2", a->getPassword());

			Assert::IsTrue(it->isEnd());
		}


	};
}