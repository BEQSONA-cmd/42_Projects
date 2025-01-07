#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock(Warlock &copy);
        Warlock &operator=(Warlock &copy);
    public:
        std::string const &getName() const {return this->name;};
        std::string const &getTitle() const {return this->title;};

        void setTitle(std::string const &title){this->title = title;};
        
        Warlock(std::string name, std::string title){
            this->name = name, this->title = title;
            std::cout << this->name << ": This looks like another boring day." << std::endl;
        };
        ~Warlock(){std::cout << this->name << ": My job here is done!" << std::endl;};

        void introduce() const {
            std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
        };
};
