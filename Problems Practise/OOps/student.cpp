#include <iostream>
using namespace std;

// class student{
//      private:
//      string name;
//      int age;
//      int height;

//      public:
     
//      int getAge(){
//         return this->age<<endl;
//      }
// };

class Human{
      public:
     int height;
     int weight;
     int age;

     public:

     int getAge(){
        return this->age;
     }

     int setAge(int age){
        this->age = age;
     }
};



class Male : public Human{

   public:
   string color;

   void sleep(){
    cout<<"Male is sleeping/...."<<endl;
   }

};

int main()
{
    Male s1;
    cout << s1.age << endl;
    cout << s1.height << endl;

    

    return 0;
}