#include <iostream>
#include "classes.h"
using namespace std;

//login section

int login::login_disp(){
		cout<<"\t";
 		cout << "  _ __ ___   _____   _(_) ___  ___ \n\t"
         " | '_ ` _ \\ / _ \\ \\ / / |/ _ \\/ __|\n\t"
         " | | | | | | (_) \\ V /| |  __/\\__ \\\n\t"
         " |_| |_| |_|\\___/ \\_/ |_|\\___||___/\n\t";
		int choice;
		bool access = false;
		while(access!=true){
            cout<<"\n\t----------------------------------\n";
            cout<<"\t\tLogin Section";
            cout<<"\n\t----------------------------------\n";
            cout<<"\t\t1. Login As Client\n";
            cout<<"\t\t2. Login As Manager\n";
            cout<<"\t\t3. Exit\n";
            cout<<"\t\tEnter Your Choice : ";
            cin>>choice;
            if(choice >3 or choice <1){
				cout<<"\t\tInvalid Choice";}
			else{ access = true;
            return choice;}}
        	}
