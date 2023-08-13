#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club. ");
HumanA bob("\x1b[36mBob\x1b[36m", club);
bob.attack();
club.setType("some other type of club. ");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club. ");
HumanB jim("\x1b[32mJim\x1b[32m");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club. ");
jim.attack();
}
return 0;
}