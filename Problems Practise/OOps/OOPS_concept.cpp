#include <iostream>
#include <string.h>
// #include "Hero.cpp"
using namespace std;

class Hero
{
public:
    int health;
    char level;
    char *name;
    static int timeToComplete;
    Hero(Hero &temp)
    {
        // cout << "Copy constructor called..." << endl;
        // cout << "the defalut copy constructor is deleted..." << endl;
        cout<<endl;
        char *ch = new char[strlen(temp.name)];
        strcpy(ch , temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
        cout<<endl;
    }

    Hero()
    {
        cout << "Default Constructor Calles !!" << endl;
        name = new char[100];
    }
    Hero(int health)
    {
        this->health = health;
        cout << "this -> " << this << endl;
        cout << "I am constructor...." << endl;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Name => " << this->name << endl;
        cout << "Level => " << this->level << endl;
        cout << "Health => " << this->health << endl;
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

    ~Hero(){
        cout<<"Destructor is called!!"<<endl;
    }
};


int Hero::timeToComplete = 5;


int main()
{


cout << Hero :: timeToComplete<<endl;;

Hero a;

cout<< a.timeToComplete<<endl;

Hero b;
b.timeToComplete = 10;
cout<<a.timeToComplete<<endl;
cout<<b.timeToComplete<<endl;




//     Hero hero1;
//     char name[7] = "Babbar";
//     hero1.setHealth(30);
//     hero1.setLevel('C');
//     hero1.setName(name);
//     hero1.print();


//     Hero hero2(hero1);

//     // hero2.print();

//     hero1.name[0] = 'g';
//     hero1.print();


//    hero1 = hero2;

//    hero1.print();
    // hero2.print();


    // Hero suresh(70, 'C');
    // suresh.print();

    // Hero ritesh(suresh);

    // suresh.print();

    // Onject is created statically
    // Hero ramesh(200);
    // cout<<"Address of the ramesh is -> "<<&ramesh<<endl;
    // Dynamicallu created object

    // Hero *h1 = new Hero(9000);
    // ramesh.health = 70 ;
    // ramesh.level = 'A';

    // cout<<"Health -> "<<ramesh.health<<endl;
    // cout<<"Health comstr -> "<<(*h1).health<<endl;
    // cout<<"Level -> "<<ramesh.level<<endl;
    // char s = 's';
    // ramesh.setHealth(70);
    // ramesh.setLevel(s);

    // cout << "Health -> " << ramesh.getHealth() << endl;
    // cout << "Level -> " << ramesh.getLevel() << endl;

    // ramesh.print();

    return 0;
}