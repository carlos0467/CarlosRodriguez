#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
protected:
    std::string name;
    int level;

public:
    Pokemon(std::string n, int l) {
        name = n;
        level = l;
    }

    virtual void attack() const = 0;
    virtual void defend() const = 0;
    virtual void evolve() = 0;

    virtual ~Pokemon() {
        std::cout << name << " returned to the ball." << std::endl;
    }
};

#endif#pragma once
