**Movie Ticketing System**
This project is a movie ticketing system implemented in C++. It allows clients to book movie tickets and managers to manage movie listings. The system provides functionalities for movie booking, contact information display, card registration, and manager functionalities such as adding, updating, and deleting movies.

**Table of Contents**
**Features
Installation
Usage
File Structure
Contributing
License

Features**
Client Login: Allows clients to log in and book movie tickets.
Manager Login: Allows managers to log in and manage movie listings.
Movie Booking: Clients can select movies, timings, and ticket types to book tickets.
Contact Information: Clients can view contact information for support.
Card Registration: Clients can register for a cinema card and view the benefits.
Manager Functionalities: Managers can add, update, delete, and view the list of movies.

**Run the executable:**
./movie_ticketing_system
Login as Client or Manager:
Choose the appropriate login option and follow the prompts.
For clients, you can book movies, view contact information, and register for a cinema card.
For managers, you can manage movie listings by adding, updating, or deleting movies.

**File Structure**
Main.cpp: Contains the main function to run the program.
classes.h: Header file declaring all the classes and their methods.
login.cpp: Implementation of the login class.
movie.cpp: Implementation of the movie class.
contact_us.cpp: Implementation of the contact_us class.
card_registration.cpp: Implementation of the card_registration class.
manager.cpp: Implementation of the manager class.

**Classes and Methods**
**login**
int login_disp(): Displays login options and handles user input.

**movie**
movie(): Constructor to initialize movie details.
void set_movie_name(), string get_movie_name(): Set and get the movie name.
void set_name(), string get_name(): Set and get the name.
void movies_names(): Display available movies.
void movie_timing(): Select movie timing.
void contact_number(): Input contact number.
void number_of_tickets(): Input number of tickets.
void type_of_tickets(): Select type of tickets.
void total_price(): Calculate total price.
void menu(): Display ticket details.

**contact_us**
void contact_disp(): Display contact information.

**card_registration**
int card_number(): Generate a random card number.
void card_disp(): Display card registration details.

**manager**
bool manager_disp(): Handle manager login.
int manager_func(): Display manager menu and get choice.
void add_movie(): Add a new movie.
void update_movie(): Update movie details.
void delete_movie(): Delete a movie.
void display_updated_movie(): Display the updated movie list.
bool manager_exit(): Exit manager mode.

**Contributing**
Contributions are welcome! Please create a pull request with detailed information about the changes.

**License**
This project is licensed under the MIT License. See the LICENSE file for details.

