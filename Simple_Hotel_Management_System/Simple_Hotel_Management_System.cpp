#include <iostream>
#include<string.h>
#include <string>

using namespace std;
class Hotel {
  public:
    string hname;
    string town;
    int rating;
	int price;
    int hnum;
    int recomendation;

    Hotel(string nm,  string tn, int ra,  int pr, int hn){
        hname = nm;
        rating = ra;
        town = tn;
        price = pr;
        hnum = hn;
        recomendation=0;

    }
    Hotel(){
        hname = "";
        rating = 0;
        town = "";
        price = 0;
        hnum = 0;
        recomendation=0;

    }
	public:
	void add_rating(){
        if(recomendation>0 && recomendation%5==0 && rating<5){
          rating ++;
         }
		 }
    public:
	void add_recommendation(){
        recomendation ++;
        //cout<<"I have been called";
        add_rating();

    }

    public:
	void display_hotel(){

        cout<<hnum << "Name:" <<  hname <<"\tTown:" << town<< "\tRating:" << rating << "\tPrice:" << price << "\tRecomendation:" << recomendation<<"\n";

    }
};
class User {
	public:
    string name;
    int budget;
    int unum;
    Hotel hotel;
	public:
    User(string nme, int bdg, int unm);
    User();
    public:
	void displayuser();
	public:
    void book();
 };


   class HotelStructure {
    public:
   int numHotels;
   int numUsers;
  Hotel hotels[20];
   User users[20];
   HotelStructure() {
   numHotels = 0;
   numUsers = 0;
    }
};
HotelStructure t;

 class HotelManagement{

    public:
	 void addHotelProp(string name, string town, int price, int ra) {
         Hotel hotel(name,town,ra,price,t.numHotels+1);
          t.hotels[t.numHotels] = hotel;
          t.numHotels++;
    }
    public:
     User addUser(string name, int budget){

               User usr(name, budget, t.numUsers+1);
               t.users[t.numUsers] = usr;
               t.numUsers++;
               return usr;
    }

    void displayHotels(){


         int i;
         for(i=0; i<t.numHotels; i++)  {
        t.hotels[i].display_hotel();
    }}

	void displayHotelsByTown(string u){
         int i;
         for(i=0; i<t.numHotels; i++)  {
         	if(u==t.hotels[i].town){
        t.hotels[i].display_hotel();
		}
    	}
          }

    void displayHotelsByRank(int u){
	 int i;
         for(i=0; i<t.numHotels; i++)  {
             if(u==t.hotels[i].rating){
        t.hotels[i].display_hotel(); }
    }
    }
   bool acceptBook(int n, int c) {
        if(t.hotels[n].price<=c){
            t.hotels[n].add_recommendation();
            return true;
        }
        else
            return false;

    }
 };



class Admin {
  HotelManagement admin;
 public:
void start(){

    admin.addHotelProp("Snake", "Yaounde", 10000, 2);
    admin.addHotelProp("Bear", "Douala", 20000, 3);
    admin.addHotelProp("Smash", "Buea", 30000, 4);
    admin.addHotelProp("Beach", "Limbe", 5000, 1);
	}

void addHotel(){

       cout<<"PLease enter the name, Town, price, and rating  of the hotel\n";
         string name;
         cin>>name;
         string town;
         cin>>town;
          int price;
		  cin>>price;
          int ra;
          cin>>ra;
          admin.addHotelProp(name, town, price, ra);
    }
void adduser(){
  User a;
               cout<<"PLease enter the name and budget";
               string nam;
               cin>>nam;
               int budget;
               cin>>budget;
               a=admin.addUser(nam, budget);
               a.book();

 }
void displayhotels(){
 admin.displayHotels();
 }
void displayhotelsbyrank(int i){
 admin.displayHotelsByRank(i);
 }
void displayhotelsbytown(string u){
 admin.displayHotelsByTown(u);
 }
 bool AceptBook(int n, int c){
 return admin.acceptBook(n,c);
 }

};

User::User(string nme, int bdg, int unm) {
       name = nme;
       budget = bdg;
       unum = unm;
    }
User::User() {
       name = "";
       budget = 0;
       unum = 0;
    }

	void User::displayuser(){
    cout<<name;
    }

    void User::book() {

         	HotelManagement a;
          a.displayHotels();
          cout<<"Please choose a hotel by writing the sn number\n";
          int num;
          cin>>num;
          num--;
          bool ans;
          ans = a.acceptBook(num, this->budget);
          if(ans){
          cout<<"You have successfully booked this hotel";
         }
          else{ cout<<"You cannot book this hotel\n";
          }
    }

int main(int argc, char** argv) {
Admin a;
a.start();
  bool play = true;
        while(1){
            int n;
           printf("Welcome. Please select a number that corresponds to your choice\n 1: Register a Hotel \n 2: Book a Hotel \n 3: Display Hotels\n 4: Search for Hotel by Town\n 5: Search for Hotel by Rating\n");
           scanf("%d", &n);
            printf("=======================================================================================\n");
                if(n==1)
				{
                    printf("Please enter your password \n");
                    int u;
                    scanf("%d", &u);
                    if(u==2020){

    				a.addHotel();

                    }
                }
                else if(n==2)
				  {
				  	a.adduser();


                }
                else if(n==3)
				  {
                    a.displayhotels();
                }
                if(n==4)
				{
					string town;
                 cout<<"Please enter the name of the town";
                 cin>>town;
                 a.displayhotelsbytown(town);
                    
                }
                else if(n==5)
				 {
				 	int rat;
                    cout<<"Please enter the evaluation of the hotels you want";
                    cin>>rat;
                    a.displayhotelsbyrank(rat);
					
                }
                else if(n==0)
				 { play = false;
                    printf("Please enter the correct corresponding number");
                }

        }

	return 0;
}
