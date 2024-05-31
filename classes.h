#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class login{
        protected:
        fstream fout,fin;
        string str;
        public: 
        int login_disp();
};

class movie : login{
    private:
    string name;
    string movie_name;
    string time;
    int m_price;
    int price;
    string number;
    int type_of_ticket;
    int no_of_tickets;
    public:
    movie();
    string get_name();
    void set_name();
    string get_movie_name();
    void set_movie_name();
    void movies_names();
    void movie_timing();
    void contact_number();
    void number_of_tickets();
    void type_of_tickets();
    void total_price();
    void menu();
};

class contact_us{
    public:
    void contact_disp();
};

class card_registration: public movie{
    private:
    int Id;
    int card_num;
    public:
    int card_number();
    void card_disp();
};


class manager:public login{
    private:
    string ID;
    string Password;
    public:
    bool manager_disp();
    int manager_menu();
    int manager_func();
    void add_movie();
    void update_movie();
    void delete_movie();
    bool manager_exit();
    void display_updated_movie();
};

