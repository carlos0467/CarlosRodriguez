#include "PokemonClasses.h"

int main() {
    Pikachu pikachu(10);
    Charmander charmander(12);
    Bulbasaur bulbasaur(8);

    std::cout << "=== Pokemon Types ===" << std::endl;
    pikachu.showType();
    charmander.showType();
    bulbasaur.showType();

    std::cout << std::endl;
    std::cout << "=== Actions ===" << std::endl;
    pikachu.attack();
    pikachu.defend();
    pikachu.evolve();

    std::cout << std::endl;
    charmander.attack();
    charmander.defend();
    charmander.evolve();

    std::cout << std::endl;
    bulbasaur.attack();
    bulbasaur.defend();
    bulbasaur.evolve();

    std::cout << std::endl;
    std::cout << "=== Polymorphism ===" << std::endl;

    Pokemon* team[3];
    team[0] = &pikachu;
    team[1] = &charmander;
    team[2] = &bulbasaur;

    for (int i = 0; i < 3; i++) {
        team[i]->attack();
        team[i]->defend();
        team[i]->evolve();
        std::cout << std::endl;
    }

    return 0;
}