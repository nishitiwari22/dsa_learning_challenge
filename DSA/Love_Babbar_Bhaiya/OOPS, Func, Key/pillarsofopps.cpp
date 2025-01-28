/*
#include <iostream>
using namespace std;


//****This is Encapsulation***** //Encapsulation: Hiding data

// class Hero
// {
//     string name;
//     int age;
//     int height;

//     public:
//    int getage() {
//     return this->age;
// }
// };


//*****This is Access Modifiers****


class Human
{
    private:
     int height;
 public:

    int weight;
        int age;


    public:
   int getage() {
    return this->age;
}

   int setweight(int w) {
    return this->weight = w;
}
};

class Man: protected Human {

    public:
    string color;

    void sleep(){
    cout<< "Man sleeping"<<endl;
    }

int getheight(){
return this->height;
}
};
    int main(){
        Man object1;

Man m1;
// cout<< m1.getheight()<< endl;
cout<<m1.height<< endl;

/*
cout<<object1.age<<endl;
// cout<<object1.color<<endl;
// cout<<object1.height<<endl;
// cout<<object1.setweight(54) <<endl;
 object1.sleep();
 */

// Hero first;
// cout << "sab shi cahl rhaha hai" << endl;
//  return 0;
//} */

//****This is Inheritance******
#include <iostream>
using namespace std;

// This is Hierarichial Inheritance

// class A
// {
// public:
//     void fun1()
//     {
//         cout << "Inside fun1" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void fun2()
//     {
//         cout << "Inside fun2" << endl;
//     }
// };

// class C : public A
// {
// public:
//     void fun3()
//     {
//         cout << "Inside fun3" << endl;
//     }
// };

// This is multiple inheritance

/*
class Animal {
public:
int age;
int weight;

public:
void bark(){
    cout<<"Barking"<<endl;
}
};

class Human {
public:
int age;
int weight;

public:
void speak(){
    cout<<"Speaking"<<endl;
}
};

class Hybrid: public Animal, public  Human{

};
*/

/* class Dog: public Animal {
};

class Germanshepheard: public Dog {

};
*/

// class A
// {
// public:
//     void func()
//     {
//         cout << "I am A" << endl;
//     }
// };

// class B
// {
// public:
//     void func()
//     {
//         cout << "I am C" << endl;
//     }
// };

// class C : public A, public B
// {
// };

// Polymorphism has two types

// 1. Runtime Polymorphism //Dyanmic
// 2. Compile time Polymorphism //Static

/*class A
{
public:
void sayHello(){
    cout<< "I am Nishi" <<endl;
}
void sayHello(char name){ //no paramters so it will give error
    cout<<"I am Nishi" <<endl;
}

int sayHello(string name){ //return type different and without paramters will also give error. Add paramaters to avoid error.
    cout<<"I am Nishi" <<endl;
    return 1;
}

};
*/

// Operator Overloading

// koi bhi operator ko dusra kaam assign karna jaise ki plus ko minus ka kaam bhi diya jaa sakta hai

// class B {
//     public:
//     int a;
//     int b;

//     public:
//     int add() {
//         return a+b;

// }
// void operator+ (B &obj){
//     // int value1 = this -> a;
//     // int value2 = obj.a;
//     // cout<< "Output " <<value2 - value1 <<endl;
//     // cout << "Hello Nishi" << endl;

// }

// void operator() () {
//     cout<< "mai bracket hu" <<this ->a <<endl;
// }
// };

// Run time Polymorphism

// Rules: 1) Same Func name; Same Func argu;  Requires Inheritance

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << " Speaking" << endl;
//     }
// };

// class Dog : public Animal
// {
//     public:
//     void speak() //This is function over ridding. Run time poly. 
//     {
//         cout << " Barking" << endl;
//     }
// };


// Abstraction (Implementaion Hiding)



int main()
{

    //     A object1;
    //     object1.fun1();

    //     B object2;
    //     object2.fun1();
    //     object2.fun2();

    // C object3;
    //     object3.fun1();
    // object3.fun2(); //This will give error.
    //  object3.fun3();

    // This is Hybrid inheritance (Combination of Hierarichial Inheritance and Multilevel Inhertiance)
    //  Hybrid obj1;
    //  obj1.speak();
    //  obj1.bark();

    // This is single inheritance
    //  Dog d;
    //  d.speak();

    // This is multilevel inheritance
    //  Germanshepheard g;
    //  g.speak();

    // Inheritance Ambiguity
    // C obj;
    // obj.func()

    // obj.A::func();
    // obj.B::func();

    // Runtime Polymorphism
    //  A obj;
    //  obj.sayHello();

    // Operator Overloading

    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();

    // Run time poly

    // Dog obj;
    // obj.speak();

    return 0;
}
