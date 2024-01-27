#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Address {
    string city;
    string province;
};

struct Employee {
    int id;
    string name;
    int age;
    Address address;
};

enum Color {
    RED,
    YELLOW,
    GREEN,
    BLUE
};

int main() {
    Point point;
    point.x = 9.99;
    point.y = 9.9;

    double sum = point.x + point.y;
 //   cout<<sum<<endl;
   // cout<<"Hello, CodeStoryKH"<<endl;


   // array of structure

   Employee employees[2] = {
           {1, "CodeStoryKH", 2, {"Phnom Penh", "Kampong Cham"}},
           {2, "Rean C++", 18, {"Phnom Penh", "Kampong Cham"}}
   };

   for(int i= 0; i < 2; i++) {
       cout<<"Employee " << i + 1 <<":\n";
       cout<<"ID: "<<employees[i].id<<"\n";
       cout<<"Name: "<<employees[i].name<<"\n";
       cout<<"Age: "<<employees[i].age<<"\n";
       cout<<"Address: "<<employees[i].address.province<<"\n";
       cout<<"-----------"<<endl;
   }

   Color color = BLUE;
   cout<<color<<endl;
    return 0;
}