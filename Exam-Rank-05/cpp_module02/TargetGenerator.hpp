#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator &copy);
        TargetGenerator &operator=(TargetGenerator &copy);

        std::map<std::string, ATarget *> targets;
    public:
        TargetGenerator(){};
        ~TargetGenerator(){};

        void learnTargetType(ATarget *target)
        {
            std::string type = target->getType();
            if(target && this->targets.find(type) == this->targets.end())
                this->targets[type] = target->clone();
        };

        void forgetTargetType(std::string const &type)
        {
            if(this->targets.find(type) != this->targets.end())
            {
                delete this->targets[type];
                this->targets.erase(this->targets.find(type));
            }
        };
        
        ATarget *createTarget(std::string const &type)
        {
            if(this->targets.find(type) != this->targets.end())
                return this->targets[type];
            return NULL;
        }
};
