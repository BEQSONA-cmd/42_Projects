#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell(ASpell const &copy) {*this = copy;};
        ASpell &operator=(ASpell const &copy) {(void)copy; return *this;};
        
        std::string const &getName() const {return this->name;};
        std::string const &getEffects() const {return this->effects;};

        virtual ASpell *clone() const = 0;
        ASpell(std::string name, std::string effects){this->name = name, this->effects = effects;};
        virtual ~ASpell(){};

        void launch(ATarget const &target) const;
};

// this will go at ASpell.cpp
void ASpell::launch(const ATarget &target) const {
    target.getHitBySpell(*this);
}
