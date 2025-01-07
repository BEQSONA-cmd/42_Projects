#include "ASpell.hpp"
#include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock &copy);
        Warlock &operator=(Warlock &copy);

        std::map<std::string, ASpell *> spells;
    public:
        std::string const &getName() const{return this->name;};
        std::string const &getTitle() const{return this->title;};

        void setTitle(std::string const &title){this->title = title;};

        Warlock(std::string name, std::string title){
            this->name = name, this->title = title;
            std::cout << this->name << ": This looks like another boring day." << std::endl;
        };

        ~Warlock(){std::cout << this->name << ": My job here is done!" << std::endl;};

        void introduce() const {
            std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
        };

        void learnSpell(ASpell *spell){
            std::string name = spell->getName();

            if(spell && this->spells.find(name) == spells.end())
                spells[name] = spell->clone();
        };

        void forgetSpell(std::string name){
            if(this->spells.find(name) != this->spells.end())
            {
                delete spells[name];
                spells.erase(spells.find(name));
            }
        };

        void launchSpell(std::string name, ATarget &target){
            if(this->spells.find(name) != this->spells.end())
                this->spells[name]->launch(target);
        };
};
