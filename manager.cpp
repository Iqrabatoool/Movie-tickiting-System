#include <iostream>
#include <sstream>
#include <fstream>
#include "classes.h"
using namespace std;

//Manager Section

int manager::manager_func(){
    int choice;
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tManager Section";
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\t1. Add New Movie\n";
    cout<<"\t\t2. Update Movie\n";
    cout<<"\t\t3. Delete Movie\n";
    cout<<"\t\t4. Display Updated Movie List\n";
    cout<<"\t\t5. Exit\n";
    cin>>choice;
    return choice;
}

bool manager::manager_disp(){
    int choice;
    string pass;
    bool check = false;
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tManager Section";
    cout<<"\n\t----------------------------------\n";
    while(check == false){
    cout<<"\t\tEnter Your ID : ";
    cin>>ID;
    cout<<"\t\tEnter Your Password : ";
    cin>>Password;
    fin.open("Manager.csv",ios::in);
    if (!fin) {
        cout << "Error opening file!" << endl;
        return false; 
    }
    while(getline(fin,str)){
        stringstream ss(str);
        string storedID, storedPassword;
        getline(ss, storedID, ','); // Assuming ID is stored before comma
        getline(ss, storedPassword);
        cin.ignore();
    if(ID == storedID && Password == storedPassword){
        cout<<"\t\tLogin Successful\n";
        check = true;
        fin.close();
        break;
    }else{
        cout<<"\t\tWrong ID or Password"<<endl;
        check = false;
        fin.close();
    }}
    }
    
    return check;
}

void manager::add_movie(){
    fout.open("Movie.csv",ios::app);
    if (!fout) {
        cout << "Error opening file!" << endl;
    }else{
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tAdd New Movie";
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tEnter Movie Name : ";
    cin.ignore();
    getline(cin,str);
    fout<<str<<endl;
    fout.close();
    cout<<"\t\tMovie Added Successfully\n";}

}

void manager::update_movie(){
    string searchedname;
    fin.open("Movie.csv",ios::in);
    fout.open("Movie2.csv",ios::out);
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tUpdate Movie";
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tEnter Movie Name You Want to Update : ";
    cin.ignore();
    getline(cin,searchedname);
    fin>>str;
    while(getline(fin,str)){
        stringstream ss(str);
        string storedName;
        getline(ss, storedName, '\n');
        if(storedName == searchedname){
            cout<<"\t\tEnter New Movie Name : ";
            cin.ignore();
            getline(cin,str);
            fout<<str<<endl;
        }else{
            fout<<str<<endl;
        }
}
        fout.close();
		fin.close();
		remove("movie.csv");
		rename("movie2.csv","movie.csv");
}

void manager::delete_movie(){
    string delete_name;
    fin.open("Movie.csv",ios::in);
    fout.open("Movie2.csv",ios::out);
    cout<<"\n\t----------------------------------\n";
    cout<<"Enter the movie name you want to delete : ";
    cin.ignore();
    getline(cin,delete_name);
    fin>>str;
    while(getline(fin,str)){
        stringstream ss(str);
        string storedName;
        getline(ss, storedName, '\n');
        if(storedName == delete_name){
            continue;
        }else{
            fout<<str<<endl;
        }
    }
    fout.close();
	fin.close();
	remove("movie.csv");
	rename("movie2.csv","movie.csv");
}

void manager::display_updated_movie(){
    fin.open("Movie.csv",ios::in);
    cout<<"\n\t----------------------------------\n";
    cout<<"\t\tMovie List";
    cout<<"\n\t----------------------------------\n";
    while(getline(fin,str)){
        cout<<"\t\t"<<str<<endl;
    }
    fin.close();
}

bool manager::manager_exit(){
    return true;
}
