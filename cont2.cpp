#include <iostream>
#include <cmath>

using namespace std;

//object functions/instance func---------------------------
// class Student {
//     public:
//     string name;
//     string major;
//     double gpa;

//     Student(string aName, string aMajor, double aGpa){
//         name = aName;
//         major = aMajor;
//         gpa = aGpa;
//     }
//     bool hasHonors(){
//         if(gpa >= 3.5){
//             return true;
//         }
//         return false;
//     }
// };
//getters/setters------------------------------------------
// class Movie {
//     private:
//     string rating;
//     public:
//     string title;
//     string director;
//     Movie(string aTitle, string aDirector, string aRating){
//         title = aTitle;
//         director = aDirector;
//         setRating(aRating);
//     }
//     void setRating(string aRating){
//         if(aRating == "G"|| aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
//             rating = aRating;
//         }else {
//             rating = "NR";
//         }
//     }
//     string getRating(){
//         return rating;
//     }
// };

//Inheritance------------------------------------------
class Chef{
    public:
    void makechicken(){
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes bbq ribs" << endl;
    }
};
class ItalianChef : public Chef{
    public:
    void makePasta(){
        cout << "the chef makes pasta" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes chicken parm" << endl;
    }
};

int main()
{
//object functions/instance func---------------------------
// Student student1 ("Jim","Business",2.4);
// Student student2 ("Pam","Art",3.6);
// cout << student2.hasHonors();

//getters/setters------------------------------------------
    // Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    // avengers.setRating("Dog");
    // cout << avengers.getRating();
//Inheritance------------------------------------------
Chef chef;
chef.makeSpecialDish();
ItalianChef italianChef;
italianChef.makeSpecialDish();


     return 0;
}


