#include "CoffeMachine.h"
#include "StateMachine.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	StateMachine x;
	//StateMachine::CoffeeType;
	x.TransitionExist(ShortCoffee);
	
	
	//StateMachine* x = new StateMachine();
	//x.TransitionExist();
	_getch();
}