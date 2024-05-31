#include <iostream>
#include <cstdlib>
#include "classes.h"

using namespace std;

int card_registration::card_number(){
    card_num = rand()%90000 + 10000;
    return card_num;
}

void card_registration::card_disp(){
    cout<<"\n\t\t----------------------------------\n";
    cout<<"\t\tStart New Journey With Our Cinema";	
    cout<<"\n\t\t----------------------------------\n";
    cout<<"\t\tEnter Your Name : ";
    set_name();
    cout<<"\t\tEnter Your CNIC : ";
    cin>>Id;
    cout<<"\n\n\t\t----------------------------------\n";
    cout<<"\t\tRegistration Card\n";	
    cout<<"\n\t\t----------------------------------\n";  
    cout<<"\t\tName          : "<<get_name()<<"\n";
    cout<<"\t\tCNIC          : "<<Id<<"\n";
    cout<<"\t\tCard Number   : "<<card_number()<<"\n";
    cout<<"\t\tThank you. \n\t\tIt will take us a week for completing your registration for the card.\n";
    char f;
    cout<<"\n\t\t For selecting the page to go to benefits say (y/n) : ";
    cin>>f;
    if(f=='y')
    {
        cout<<"\t\tBenefits Of Registration:";
        cout<<"\n\t\t 1. After 10 movies you get a free movie ticket.";
        cout<<"\n\t\t 2. You Are Provided With Regular Updates Regarding The Movie And The Showtimings.";
        cout<<"\n\t\t 3. You Can Prebook Tickets And Get Preferred Seats.";
    }
}
