#pragma once
#include <vector>
#include <iostream>

using namespace std;
//template <typename TS, typename TI, typename TNS>

enum MachineStates { STATE0, STATE1, STATE2, STATE3 };
enum CoffeeType { ShortCoffee = 5, Cappuccino = 10, LatteMachiato = 15 };

 struct Table {

	MachineStates curr_state;
	CoffeeType input;
	MachineStates next_state;

};

class StateMachine
{
protected:

public:
	MachineStates state;
	Table table[4];
	
	StateMachine();
	~StateMachine();

	void TransitionExist(CoffeeType input);

};

