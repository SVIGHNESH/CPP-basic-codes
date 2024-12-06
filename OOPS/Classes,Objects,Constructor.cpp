#include<bits/stdc++.h>


using namespace std;


class Hero{

   private:
      //properties
      int Health ;
   public:



       
              //parameterised constructor 
              Hero(int Health){
              this -> Health = Health;
              cout << "Parameterised Constructor Called." <<endl;


        }

   
          //simple constructor
          Hero(){
                  cout << "Constructor Called" <<endl;
           }


           //copy constructor 

           Hero( Hero &  temp ){
            this -> Health = temp.Health;



           }
              
              
              
        char level ;
        int  getHealth(){
        return Health;
      }

      char getLevel(){
        return level ;
      }

      void setHealth(int h ){
        Health = h ;

      }

      void setLevel(char ch ){
                level = ch;

      }


};

int   main (){
    //object created statically
    Hero Ramesh(23);
    cout << Ramesh.getHealth() << endl;
    Ramesh.setHealth(234);

    cout << Ramesh.getHealth() << endl;

    Hero Suresh(Ramesh);
    cout << Suresh.getHealth() << endl;















    // //creation of the object



    // //static allocation
    // Hero a;
    // cout << "Health of a is " << a.getHealth() << endl ;
    // cout << "Level of a is " << a.getLevel() << endl ;


    // //dynamically
    // Hero *b = new Hero;
    // cout << "Health of a is " << (*b).getHealth() << endl ;
    // cout << "Level of a is " << (*b).getLevel() << endl ;


    // cout << "Health of a is " << b-> getHealth() << endl ;
    // cout << "Level of a is " << b->getLevel() << endl ;



    // cout << "The Size of the object is " << sizeof(Ramesh) << endl;


    // //using the getter
    // cout << "Ramesh Health is:" << Ramesh.getHealth() << endl;
    // Ramesh.level = 'A';

    // // using the Setter

    // Ramesh.setHealth(78);
    // cout << "The Level of Ramesh is " <<  Ramesh.getHealth() <<endl;
    // //cout << "Size of the Hero:" << sizeof(h1) << endl;


}