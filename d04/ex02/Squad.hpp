
#	ifndef SQUAD_HPP
#	define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

struct SquadList
{
	ISpaceMarine *elem;
	SquadList *next;
};

class Squad: public ISquad
{
	public:
		Squad(void);
		Squad(Squad const& other);
		Squad& operator=(Squad const& other);
		static SquadList* copySquad(SquadList *other);
		static SquadList* getLast(SquadList *lst);
		static int onlyOnce(SquadList *lst, ISpaceMarine *soldier);
		virtual ~Squad(void);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int i) const;
		virtual int push(ISpaceMarine* newUnit);
		
	private:
		int _nbUnit;
		SquadList *_lst;
};

#	endif