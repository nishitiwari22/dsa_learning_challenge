#include <iostream>
#include <cstring>
// #include"hero.cpp"
using namespace std;

class Hero
{
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << " Simple Constructor called" << endl;
        name = new char[100];
    }

    // Parameterised Constructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
        // this->name = name;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << " Simple Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {

        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        ;
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ]";
        cout << endl
             << endl;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor bhai called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{


    cout<< Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
//Not recommeded 
    // Hero a; 
    // cout<<a.timeToComplete<<endl;
    // // Static
    // // Automatically called
    // Hero a;

    // // Dynamic
    // Hero *b = new Hero();
    // // Manually called
    // delete b;

    return 0;
}

// Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('A');
// char name[7] = "Nishi";
// hero1.setName(name);

// hero1.print();

// //Default Copy Constructor

// // Default constructor show hone ke liye apna constructor comment out kardo

// Hero hero2(hero1);
// hero2.print();
// //Hero Hero2 = hero1;

// hero1.name[0] = 'S';
// hero1.print();

// hero2.print();

// hero1 = hero2;
// hero1.print();

// hero2.print();

//  Hero suresh(70, 'C');
// suresh.print();

// //Copy Constructor
// Hero R(suresh);
// R.print();

// static
//     Hero Ramesh(10, 'A');
//     cout << "address of Ramesh: " << &Ramesh << endl;
//   Ramesh.print();

//     // Ramesh.gethealth();
//     // dynamically
//     Hero *b = new Hero;
//     // h->print();

//     Hero temp(22, 'B');
//     temp.print();

//  void setHealth(int h, char pswd)
//{

//     if(name == "A") { //getter setter ka gyan)
//     health = h;
// }
//}

// * static allocation
// Hero a;
//   cout<<"h1"<<endl;
//     cout<<"Aafreen chomu" <<endl;

// a.setHealth(80);
// a.setLevel('C');
// cout << "level is " << a.level << endl;
// cout << "health is" << a.getHealth() << endl;

// dynamically
// Hero *b = new Hero;
// b->setLevel('A');
// b->setHealth(70);
// cout<<"level is " << (*b).level <<endl;
// cout<<"health is" <<(*b).gethealth()<< endl;

//  cout << "level is" << b->getHealth() << endl; // (arrow wala)

// creation of obejct
//  hero ramesh;
//  cout<<"size of ramesh: " << sizeof(ramesh) <<endl;

// use  setter
//  ramesh.health = 70;
//  ramesh.level = 'A';

// cout<< "health is: " << ramesh.health <<endl;
// cout<< "LEVEL is: " << ramesh.level<<endl;

// cout<<"size: "<< sizeof(h1) <<endl;