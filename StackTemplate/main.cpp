#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

//Constants for the menu choices.
const int PUSH_CHOICE = 1,
          POP_CHOICE = 2,
          QUIT_CHOICE = 3;

//Function prototype
void menu(int &);
void getStackSize(int &);
void pushItem(Stack<string>&);
void popItem(Stack<string>&);

int main()
{
    int stackSize; //Get the stack size.
    int choice; //To hold the menu choices.

    //Get the stack size
    getStackSize(stackSize);

    //Create the stack.
    Stack<string> stack(stackSize);

    do
    {
        //Get the user's menu choice.
        menu(choice);

        //Perform the user's choice.
        if(choice != QUIT_CHOICE)
        {
            switch(choice)
            {
                case PUSH_CHOICE:
                     pushItem(stack);
                     break;
                
                case POP_CHOICE:
                     popItem(stack);
                     break;
            }
        }

    } while (choice != QUIT_CHOICE);  

    return 0;

}

void getStackSize(int &size)
{
    //Get the desired stack size.
    cout<<"How big should I make the stack? ";
    cin >> size;

    //Validate the size.
    while(size < 1)
    {
        cout<<"Enter 1 or greater: ";
        cin >> size;
    }
}

void menu(int &choice)
{
    //Display the menu and get the user's choice.
    cout<<"\nWhat do you want to do?\n"
        <<PUSH_CHOICE
        <<"- Push an item onto the stack\n"
        <<POP_CHOICE
        <<"- Pop an item off the stack\n"
        <<QUIT_CHOICE
        <<"- Quit the program\n"
        <<"Enter your choice: ";
        cin >> choice;

    while(choice < PUSH_CHOICE || choice > QUIT_CHOICE)
    {
        cout<<"Enter a valid choice: ";
        cin >> choice;
    }
}

void pushItem(Stack<string> &stack)
{
    string item;

    //Get an item to push onto the stack.
    cin.ignore();

    cout<<"\nEnter an item: ";
    getline(cin, item);

    stack.push(item);
}

void popItem(Stack<string> &stack)
{
    string item = " ";

    //Pop the item
    stack.pop(item);

    //Display the item.
    if(item != " ")
    {
        cout<<item<<" was popped.\n";
    }
}