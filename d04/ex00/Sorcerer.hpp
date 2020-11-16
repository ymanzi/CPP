
#   ifndef SORCERER_HPP
#   define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    protected:
        std::string _name;
        std::string _title;


    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer( void );
        Sorcerer(Sorcerer const& other);
        
        Sorcerer    &operator=(Sorcerer const& other);
        void        introduction( void ) const;
        void        polymorph(Victim const& other) const;
};

std::ostream& operator<<( std::ostream &flux, Sorcerer const& other);

#   endif