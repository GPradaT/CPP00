
Step 1: Set Up the Project Structure

Create a directory structure:
	- A main directory for the project (e.g., phonebook/).
	- Inside this directory, create files for your classes and main program: Contact.hpp, Contact.cpp, PhoneBook.hpp, PhoneBook.cpp, and main.cpp.
	- Also, create a Makefile in the main directory.


Step 2: Define the Contact Class

Create the header file Contact.hpp:

Declare a Contact class.
	- Add private member variables for first name, last name, nickname, phone number, and darkest secret.
	- Declare public setter methods to set each of the member variables.
	- Declare public getter methods to retrieve the value of each member variable.
	- Declare a method to check if any of the member variables are empty (to ensure a contact is fully filled).

Implement the Contact class in Contact.cpp:
	- Implement the constructor to initialize member variables.
	- Implement the setter methods to assign values to the member variables.
	- Implement the getter methods to return the values of the member variables.
	- Implement the method to check if any of the member variables are empty.


Step 3: Define the PhoneBook Class

Create the header file PhoneBook.hpp:

Declare a PhoneBook class.
	- Add a private array of Contact objects to store contacts (maximum of 8).
	- Add private variables to keep track of the next index for storing a contact and the total number of contacts.
	- Declare public methods to add a contact, display a list of contacts, and display details of a specific contact.

Implement the PhoneBook class in PhoneBook.cpp:
	- Implement the constructor to initialize the contact array and other member variables.
	- Implement the method to add a contact, replacing the oldest contact if the array is full.
	- Implement the method to display a formatted list of contacts (with index, first name, last name, nickname).
	- Implement the method to display the details of a contact given its index.


Step 4: Implement the Main Program

Create main.cpp:
	Include the PhoneBook header.
	Write a loop to prompt the user for commands: ADD, SEARCH, and EXIT.
	For ADD:
		- Prompt the user to input each field of the contact.
		- Use the Contact class setters to set these fields.
		- Check if the contact is valid (none of the fields are empty).
		- Add the contact to the PhoneBook.
	For SEARCH:
		- Display the list of contacts using the PhoneBook method.
		- Prompt the user for the index of the contact they want to view.
		- Display the details of the selected contact.
	For EXIT:
		- Exit the loop and terminate the program.
		- Handle any invalid commands by displaying an appropriate message.


Step 5: Create the Makefile

Write a Makefile:
	- Define the compiler and compiler flags (-Wall -Wextra -Werror -std=c++98).
	- List the source files and object files.
	- Write rules to compile the object files and link them to create the executable.
	- Include a rule for cleaning up object files and the executable.


Step 6: Compile and Run the Program

- Open a terminal in the project directory.

- Run the make command to compile the program.
- Run the generated executable to use the phonebook application.


Summary

	- Set up the project structure.
	- Define and implement the Contact class.
	- Define and implement the PhoneBook class.
	- Implement the main program to handle user commands.
	- Create a Makefile to automate the build process.
	- Compile and run the program.
