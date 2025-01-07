#pragma once

#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;

    public:
        ATarget(ATarget const &copy) {*this = copy;};
        ATarget &operator=(ATarget const &copy) {(void)copy; return *this;};
        
        std::string const &getType() const {return this->type;};
        virtual ATarget *clone() const = 0;
        ATarget(std::string type){this->type = type;};
        virtual ~ATarget(){};

        void getHitBySpell(ASpell const &spell) const;
};

// this will go to ATarget.cpp
void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
