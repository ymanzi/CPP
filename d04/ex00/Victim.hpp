
#   ifndef VICTIM_HPP
#   define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    protected:
        std::string _name;


    public:
        Victim( std::string name );
        Victim( Victim const& other);
        Victim &operator=( Victim const& other);
        virtual ~Victim( void );

        void    introduction(void) const;
        virtual void    getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream &flux, Victim const& other);

#   endif