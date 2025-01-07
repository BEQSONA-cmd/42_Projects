#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        std::map<std::string, ASpell*> spells;

        SpellBook(SpellBook &copy);
        SpellBook &operator=(SpellBook &copy);
    public:
        SpellBook(){};
        ~SpellBook(){};

        void learnSpell(ASpell *spell)
        {
            std::string name = spell->getName();
            if(spell && this->spells.find(name) == this->spells.end())
                this->spells[name] = spell->clone();
        };

        void forgetSpell(std::string const &name)
        {
            if(this->spells.find(name) != this->spells.end())
            {
                delete this->spells[name];
                this->spells.erase(this->spells.find(name));
            }
        };

        ASpell* createSpell(std::string const &name)
        {
            if(this->spells.find(name) != this->spells.end())
                return this->spells[name];
            return NULL;
        }
};
