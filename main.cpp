#include <iostream>
#include "classes.h"
using namespace std;

int main() {
    login l1;
    manager m1;
    movie mov1;
    contact_us c1;
    card_registration cr1;
    int choice;
    char program = 'y';
    int login_result = l1.login_disp();
    switch (login_result) {
    case 1:
        // Handle login type 1
        
        while(program == 'y'|| program == 'Y'){
        	
		cout<<"\n\t----------------------------------";
		cout<<"\n\t\tMovie Ticketing System";
		cout<<"\n\t ----------------------------------";
		cout<<"\n\t\t Welcome Here!";
		cout<<"\n\n\t\t <1> Movie Booking";
		cout<<"\n\t\t <2> Contact Us";
		cout<<"\n\t\t <3> Card Registration";
		cout<<"\n\t\t <4> Exit \n\n";
		cout<<"\t\tEnter Your Choice : ";
        cin>>choice;
            switch(choice){
        case 1:
            mov1.movies_names();
            mov1.movie_timing();
            mov1.contact_number();
            mov1.number_of_tickets();
            mov1.type_of_tickets();
            mov1.total_price();
            mov1.menu();
            break;
            case 2:
                c1.contact_disp();
                break;
            case 3:
                cr1.card_disp();
                break;
            case 4:
                exit(0);
                program = 'n';
                break;
            default:
                cout<<"Invalid Choice";
        }
            cout<<"\n\t\tYou Want To Do Something Further (y/n) : ";
            cin>>program;
        }
        break;
    case 2:
        if (m1.manager_disp()) {
            int manager_choice;
            // Handle successful manager login
            do{
            manager_choice = m1.manager_func();
            
            switch(manager_choice) {
            case 1:
                m1.add_movie();
                break;
            case 2:
                m1.update_movie();
                break;
            case 3:
                m1.delete_movie();
                break;
            case 4:
                m1.display_updated_movie();
                break;
            case 5:
                m1.manager_exit();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
            }while(manager_choice != 5);
        }
        break;
    case 3:
        exit(0);
        break;
    }
    return 0;
}
