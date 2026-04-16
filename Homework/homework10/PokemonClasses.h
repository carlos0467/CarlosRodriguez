#ifndef POKEMONCLASSES_H
#define POKEMONCLASSES_H

#include "Pokemon.h"

// This is the New class that handles Pokemon types
class PokemonType : public Pokemon {
protected:
    std::string type;

public:
    PokemonType(std::string n, int l, std::string t) : Pokemon(n, l) {
        type = t;
    }

    void showType() const {
        std::cout << name << " is a " << type << " type Pokemon." << std::endl;
    }
};

// Intermediate type classes
class ElectricPokemon : public PokemonType {
public:
    ElectricPokemon(std::string n, int l) : PokemonType(n, l, "Electric") {
    }
};

class FirePokemon : public PokemonType {
public:
    FirePokemon(std::string n, int l) : PokemonType(n, l, "Fire") {
    }
};

class GrassPokemon : public PokemonType {
public:
    GrassPokemon(std::string n, int l) : PokemonType(n, l, "Grass") {
    }
};

// Pikachu class
class Pikachu : public ElectricPokemon {
public:
    Pikachu(int l) : ElectricPokemon("Pikachu", l) {
    }

    void attack() const override {
        std::cout << name << " uses Thunderbolt!" << std::endl;
    }

    void defend() const override {
        std::cout << name << " dodges with Quick Attack!" << std::endl;
    }

    void evolve() override {
        std::cout << name << " evolves into Raichu!" << std::endl;
    }
};

// Charmander class
class Charmander : public FirePokemon {
public:
    Charmander(int l) : FirePokemon("Charmander", l) {
    }

    void attack() const override {
        std::cout << name << " uses Flamethrower!" << std::endl;
    }

    void defend() const override {
        std::cout << name << " blocks with a wall of fire!" << std::endl;
    }

    void evolve() override {
        std::cout << name << " evolves into Charmeleon!" << std::endl;
    }
};

// Bulbasaur class
class Bulbasaur : public GrassPokemon {
public:
    Bulbasaur(int l) : GrassPokemon("Bulbasaur", l) {
    }

    void attack() const override {
        std::cout << name << " uses Vine Whip!" << std::endl;
    }

    void defend() const override {
        std::cout << name << " defends with Leaf Shield!" << std::endl;
    }

    void evolve() override {
        std::cout << name << " evolves into Ivysaur!" << std::endl;
    }
};

#endif#pragma once
