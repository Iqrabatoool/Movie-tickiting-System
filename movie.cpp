#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <iomanip>
#include "classes.h"

using namespace std;
//Client Section

void movie::set_movie_name(){
    cin>>movie_name;
}

string movie::get_movie_name(){
    return movie_name;
}

void movie::set_name(){
        cin>>name;
        }

string movie::get_name(){
    return name;
}

movie::movie(){
    name = "Null";
    time = 12;
    price = 0;
    no_of_tickets = 0;
    movie_name = "Null";
}

void movie::movies_names(){
            int num , i = 1 , n = 1 ;
            cout<<"\n\t----------------------------------";
    		cout<<"\n\t\tMovies Name";
            cout<<"\n\t----------------------------------\n";
            fin.open("movie.csv",ios::in);
            while(getline(fin,str)){
                cout<<"\t\t"<<i++<<"   "<<str<<endl;
            }
            fin.close();
            cout<<"\t----------------------------------\n";
			cout<<"\t\tEnter Your Choice : ";
			cin>>num;
            fin.open("movie.csv",ios::in);
               if (!fin.is_open()) {
                cout << "Error opening file!" << endl;
                return;
                }
          
            while(getline(fin,str)){
            	if(num==n){
            		movie_name = str;
            		break;
				}
				n++;
                switch(num){
                     case 1:
                    m_price = 700;
                    break;
                case 2:
                    m_price = 300;
                    break;
                case 3:
                    m_price = 600;
                    break;
                case 4:
                    m_price = 300;
                    break;
                case 5:
                    m_price = 400;
                    break;
                default:
                    m_price = 500; 
                    break;
                }
            }
}

void movie::movie_timing(){
    int num;
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tSelect the the timings: ";
    cout<<"\n\t----------------------------------\n";
					cout<<"\t\t1. 0800"<<endl;
					cout<<"\t\t2. 1100"<<endl;
					cout<<"\t\t3. 1250"<<endl;
					cout<<"\t\t4. 1400"<<endl;
					cout<<"\t\t5. 2300"<<endl;
					cout<<"\t\t6. 1500\n";					
					cout<<"\t\tPlease select the timings: ";
					cin>>num;
    switch(num){
        case 1:
            time = "8:00";
            break;
        case 2:
            time = "11:00";
            break;
        case 3:
            time = "12:50";
            break;
        case 4:
            time = "14:00";
            break;
        case 5:
            time = "23:00";
            break;
        case 6:
            time = "15:00";
            break;
        default:
            cout<<"Invalid Choice";
    }
}

void movie::contact_number(){
    string num;
    while(num.length() != 11){
        cout<<"\n\t\tEnter Your Contact number: ";
        cin>>num;
        if(num.length() != 11)
        cout<<"\t\tInvalid Number\n";
        }
        number = num;
}

void movie::number_of_tickets(){
    cout<<"\n\t\tEnter the number of tickets: ";
    cin>>no_of_tickets;
}

void movie::type_of_tickets(){
    int num;
    bool access = false;
    cout<<"\t\tEnter the type of ticket \n";
    cout<<"\t\t1. Normal Class\n";
    cout<<"\t\t2. Gold Class ";
    cout<<"Type : ";
   
    while(access!=true){
    cin>>num;
    if(num ==1){
    	type_of_ticket = 1;
        access = true;
        break;
	}else if(num ==2){
		type_of_ticket = 5;
            access = true;
            break;
	}else{
		cout<<"\t\tInvalid Choice\n";
		cout<<"\t\tEnter Again : ";
	}
       
	}
}

void movie::total_price(){
    price = m_price*no_of_tickets*type_of_ticket;
}

void movie::menu(){
    cout<<"\t\tEnter Name Of Card Holder : ";
    cin.ignore();
    getline(cin,name);
    cout<<"\n\t----------------------------------";
    cout<<"\n\n"<<"\t\tTicket For "<<movie_name<<endl;
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tYour Ticket Is Here: ";
    cout<<"\n\t----------------------------------\n";
	cout<<"\t\tName         : "<<name<<endl;
	cout<<"\t\tContact No   : "<<number<<endl;
	cout<<"\t\tShow timings : "<<time<<endl;
    cout<<"\t\tTotal Price  : "<<price;
    cout<<"\n\t----------------------------------\n";
}
