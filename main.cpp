#include "bandit/bandit.h"
#include "enum.h"

#include <QString>

using namespace bandit;
using namespace snowhouse;

BETTER_ENUM(Animal, char, Dog, Horse, Cat)

go_bandit([]() {
	describe("enum class", [&]() {
		it("fails displaying enum class value", [&] {
			Animal dog = Animal::Dog;
			Animal cat = Animal::Cat;
			AssertThat(dog, Equals(cat));
		});
	});
});

int main(int argc, char *argv[])
{
	return bandit::run(argc, argv);
}
