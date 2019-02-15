#include "bandit/bandit.h"

using namespace bandit;
using namespace snowhouse;

go_bandit([]() {
	describe("engine", []() {
		it("is empty", [&]() {
			AssertThat(true, IsTrue());
		});

		describe("bmp", [&]() {
			it("open", [&]() {
				AssertThat(false, IsTrue());
			});

			it("display first frame", [&]() {
				AssertThat(false, IsTrue());
			});
		});
	});
});

int main(int argc, char *argv[])
{
	return bandit::run(argc, argv);
}
