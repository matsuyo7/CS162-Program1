//Molina Nhoung CS162 2/15/2023
//Program 3
//
//This program will keep track of events added to this program by the user.
//A menu will appear for the user to choose from entering a new event,
//finding and displaying a matched event, displaying all the events thus far,
//saving all events to the external data file, and loading any existing
//events from the external data file. The user can choose to quit after.



#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

//Constants
const int NAME {50};
const int DESC {100};
const int MAX {10};

//Structures
struct event
{
	char name[NAME];
	int day;
	char time;
	int length_event;
	char desc[DESC];
};



//Prototypes
void read_event(event & new_event);




int main()
{
	//Variables
	event memory[MAX]; 	//All of the events in the file
	event new_event;	
	//Read in new events from the user
	read_event(new_event);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

//Functions
//Prompt the user to input event information
void read_event(event & new_event)
{
	cout << "What is the name of the event, celebrety, or fan favorite: ";
	cin.get(new_event.name, NAME, '\n');
	cin.ignore(100, '\n');

	cout << "What day is the event (e.g. 13): ";
	cin >> new_event.day;
	cin.ignore(100, '\n');

	cout << "What time is the event (e.g. 14:30): ";
	cin >> new_event.time;
	cin.ignore(100, '\n');

	cout << "How long is the event (minutes): ";
	cin >> new_event.length_event;
	cin.ignore(100, '\n');

	cout << "What do you want to do when you attend the event: ";
	cin.get(new_event.desc, DESC, '\n');
	cin.ignore(100, '\n');
}
