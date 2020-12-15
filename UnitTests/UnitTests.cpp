#include "pch.h"
#include "CppUnitTest.h"
#include "../6task/source.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1) {
			auto ans = f1(2, { { 2, 3 }, {1,2} });
			vector<pair<int, int>> realAns = { {1, 2}, {2, 3} };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i) {
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}

		TEST_METHOD(TestMethod2) {
			auto ans = f2(6, { 1, 2, 3, 2, 3, 4 });
			vector<string> realAns = { "NO", "NO", "NO", "YES", "YES", "NO" };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i) {
				Assert::AreEqual(ans[i], realAns[i]);
			}
		}

		TEST_METHOD(TestMethod3) {
			auto ans = f3(3, { { "Hello", "Hi" }, { "Bye", "GoodBye" }, { "List", "Array" } }, "List");
			string realAns = "Array";
			Assert::AreEqual(realAns, ans);
		}
	};
}
