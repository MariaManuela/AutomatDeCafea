#include "StateMachine.h"



StateMachine::StateMachine()
{
	state = MachineStates::STATE0;

	table[1] = { MachineStates::STATE0,   CoffeeType::ShortCoffee,    MachineStates::STATE1 };
	table[2] = { MachineStates::STATE0,   CoffeeType::Cappuccino,	  MachineStates::STATE2 };
	table[3] = { MachineStates::STATE1,   CoffeeType::Cappuccino,     MachineStates::STATE2 };
	table[4] = { MachineStates::STATE2,   CoffeeType::LatteMachiato,  MachineStates::STATE3 };

}


StateMachine::~StateMachine()
{
}



void StateMachine::TransitionExist(CoffeeType input)
{
	bool ok = true;
	
	for (int i = 0; i < 4; i++)
	{
		if (state == table[i].curr_state && input == table[i].input && ok == true)
		{
			state = table[i].next_state;
			std::cout << "Stare: " << state << std::endl;
		
		}

	}
		if(ok==false) {
			cout << "You have no money";
		}

		
		
	}

	



