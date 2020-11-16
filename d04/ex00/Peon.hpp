
#   ifndef _HPP
#   define _HPP

#include "Victim.hpp"
#include <string>
#include <iostream>

class Peon : public Victim
{
    public:
        Peon(std::string name);
        Peon(Peon const& other);
        virtual ~Peon(void);
        Peon& operator=(Peon const& other);
        virtual void getPolymorphed(void) const;
};

#   endif