/*//How to print Somthing in C++
 
#include <iostream>                          

int main(){

    //this is a hell comment  and same as '#' in python...

  
    
    std::cout << "I like siddu!" <<'\n',     //to print anything, start with this std::cout << shi..
    std::cout << "It is healthy!" <<'\n',    //have to use '\n' after << if we want gap directly to next line...
    std::cout << "It is White in Color.";

    return 0;                                //at last we use this,or we don't. it's not neccesrry to use this...

}

*/


//------------------------------------------------------------


/*//How to do simple math logic in C++

#include <iostream> 

int main(){

    int x=5;
    int y=6;                          //[declaration and assignment] -> [int x and =5]
    
    int sum=x+y;
    int product=x*y;
    int substract=x-y;


    std::cout <<"x=" <<x << "\n";     //to print x along with values.
    std::cout <<"y=" <<y << '\n';

    std::cout <<"x+y=" <<sum;         //print total
    std::cout <<"x-y=" <<substract;   //minus
    std::cout <<"x*y=" <<product;     //multiply
 
    return 0;                         //it means that our program is finished correctly

}

*/ 


//------------------------------------------------------------


/*//How to use diffrent Datatypes in C++

#include <iostream>

using namespace std;       //by using this we don't need to write std everytime...i have wrote it ,but i can remove it anytime...


int main(){

    int age=21;
    int year=2025;
    int days=7;            //int don't include decimal

    double price=10.53;    //by writing double we can write decimal values
    double gpa=2.5;
    double temp=25.1;

    char grade='A';        //use char when we write single Cherector

    bool student=true;     //true or false,it will give 0 if false and 1 if true
    bool power=true;
    bool forSale=false;

    std::string remark="Exelent";                        //string written dirrectly in std cuz it is itself a class like <iostream>
    std::string gender="Male";

    
    cout << "total is of = $" << price <<"\n";
    std::cout << "grade =" << " " <<grade <<"\n";
    cout << "age="<<" "<<age <<"\n";
    std::cout << "IS Student ="<<" "<<forSale <<"\n";
    cout <<"Remark will be " << remark<<"\n";
    std::cout<<"Gender is "<<gender;

    return 0;                                            //it is not mendatory...our system automaticly do that...

}

*/


//------------------------------------------------------------


/*//How to use and make Const KeyWord in C++

#include <iostream>
using namespace std;

int main(){

   const double PI=3.14;                         //Write 'const' and make this value unchangable later on, if tried to assign later then it will give an error and I can make the first letter UpperCase of the variable's name to identify the const...
   double radius=10;
   const int LIGHT_SPEED=3000000000;
   const int Resoluition_Width=1024;
   const int Resolution_Height=720;              //these are some other examples of the variable in which i applied const and i applied cuz i knew it from the start that they are not going to change later and this made them the safest mf in the hood...
   
   double circumfrence=2*PI*radius;
   int totalResolution = Resoluition_Width*Resolution_Height;
   
   cout<<"The circumfrence of the circle is : "<<circumfrence<<"cm\n";
   cout<<"The Total resolution of the screen is : "<<totalResolution;

}

*/


//------------------------------------------------------------


/*//How to use and make diffrent Namespaces in C++

#include <iostream>

using namespace std;                   //Now,I don't need to write 'std::' while declaring strings or printing outcome anywere,but std:: have manny entities linked with it so if i vanish this part for code easability,then i will be unable to use those entities,so i have to make seprate CodeEasy maker that will not cut out any enties or methods from std...
using std::string;                     //This will remove the use of std:: while declaring strings...
using std::cout;                       //This one for printing, So the final vendit is that ki 'Namespace std' will alone kills the use of std everywhere but we use diffrent-diffrent so we don't lose and miss any methonds and enties that we got from suggestion when we print 'std::'...

namespace first{                       //I can use my own version of namespaces by defining them via this syntax and inserting any values that i want or use constantly...
    int x= 1;
    string name="Shiv";}

namespace second{                   
    int x= 2;
    string name="Gori";}               //This "::" is called 'Scope Resolution Operator'...


int main(){

    int x = 0;                         //I made a local variable x to show how to print values of all 'x' named variable present in namespaces...
    

    cout <<x<<"\n";                    //This will print the local main's x, To print the specific values of x present in the namespaces(even if their names are same), i have to mention namespace's name with the value that i want to access to get a clear path, it's similar like std:: cuz std is also a namespace build for printing...
   
    cout <<first::x<<"\n";             //By this i can use that value present in namespace even if the other namespace have same variable name cuz i specified it from where i am using it...
    cout <<first::name<<"\n";
   
    cout <<second::x<<"\n";            //but the problem with this method is that std have manny variable,func. attacched to it so in case we need that we can't use them cuz we have used the namespace already to vanish it..the sollution is also here let me tell in the next line.. 
    cout <<second::name<<"\n";

}

*/


//------------------------------------------------------------


/*//How to use typedef and using claus in C++

#include <iostream>
#include <vector>                                                      //typedef lies under this (but can also works outside but it's safer to use this) and this is also used in calculations...

//typedef std::vector< std::pair<std::string,int> > name_t;            //This whole till last '>' is our datatype similar as 'std::string Name' and the word written after is the name of it, so we can't use this long shit again and again,so to convert this to a single word,we use 'typedef' and we end it like '_t' to to know it at first glance that it's typedef...

typedef std::string forStrings_t;                                      //I made a typedef for string variables so that i can use my own defined name instead of writting 'std::string', forstrings_t is my defiend name...
typedef int forWholeNumbers_t;                                         //i made this typedef for int values and now i can write forWholeNumbers instead of 'int' while defining value's datatype...

using decimalVal_u = double;                                           //Another Way of doing all this is by using 'using' claus, typedef is oldfashioned. In 'using' the name we define is written on the LHS of = and on the RHS,the datatype that we are renaming is written...
using trueFalse_u = bool;                                              //So remember the syntax for typedef i.e " typedef datatype customName_t; " and the syntax for using goes like "using cuntomName_u = datatype"...
       

int main(){                                                            

    forStrings_t firstname="ShivGori";
    std::cout<<firstname<<"\n";

    forWholeNumbers_t age = 24;
    std::cout<<age<<"\n";

    decimalVal_u gpa = 3.4;
    std::cout<<gpa<<"\n";        

    trueFalse_u pass = true;
    std::cout<<pass;

    return 0;                                                         //so it creates a nickname or additional name that i can use when the datatype is long and i want shorter thing...

}
 
*/


//------------------------------------------------------------


/*//How to use datatype casting in C++

#include <iostream>                                                       
using std::cout;                                       

main(){                                                                   

    int y = 3.144;                                                        //this is 'Implicit casting', it will automaticlly convert and always give result in int...
    cout<<y<<"\n";

    double x = (int)3.14;                                                 //this is 'Explicit casting', i converted double into int manually...
    cout<<x<<"\n";
    
    int asciiTable = (char)100;                                           //this still gives 100 because RHS got implimented before LHS !, so the pattern is -- Firstly Rhs(100->d) and then Lhs(d->100) after Lhs got printed...
    cout<<asciiTable<<"\n";                                               

    int asciiTable2 = 100;                                                //this is the correct way, and the good habit to use casting and convertion is in the logics(that mix int & double) and in the ascii values, otherwise if i know the datatype of variable from the start and end then i should not edit it midway...
    cout<<(char)asciiTable2<<"\n";

    int correct_question=8;                                               //An example where i used logic which mix int or double, if i firstly divide int/int it will remove decimals and give us 0, so the situation emergies and i used convertion...
    int total_question=10;

    double percentage=((double)correct_question/total_question)*100;      //If 1 division value is double, the other automatically becomes double too, so the result is always a decimal and that's the reason i can use (double) either in any place...    

    cout<<percentage<<"%";                                                //this was type conversion in c++,it convert one datatype to another..
                         
    return 0;                                                             //two types--Implicit(automatic),,explicit(manual type datatype like (int)or(double))
    
}

*/


//-------------------------------------------------------------


/*//How to get user input and use getline in C++

#include <iostream>
using std::cout;

typedef std::string str_t;  

int main(){

    str_t name;
    int age;
 
    cout<<"What's your Name?:";              //cout- 'cherector out' and this text is showed on LHS when we get input from user...
  //std::cin>>name;                          //cin- 'cherector in' and  '>>' this sign is used when we asks for input...
    std::getline(std::cin,name);             //here i used getline instead of cin cuz i can give input with spacing using this,but in cin i can't write with spacing...
                                       
    cout<<"Whats your Age?:";
    std::cin>>age;

   cout<<"Welcome "<<name<<"\n";             //after taking user input,that input got stored in that name's variable...
   cout<<"You are "<<age<<" Years old ";

}

*/


//-------------------------------------------------------------


/*//How to use diffrent Aggrigate functions in C++

#include <iostream>
#include <cmath>                           //this is used if we want to solve and need all math functions for our calculations..
#include <algorithm>                       //for min and max...but here's the catch..min and max can't work without std:: and others can..bcz others are from cmath and min and max is from algorithms(permanently) and it can also work with std:: or while using iostream..

using std::cout;

int main(){

    double x=3;                            //Writing double in all because double gives both int and decimal value so it's convinent...
    double y=4;

    double a;                              //Making and defining manny variable to apply my funtion on so i can print them easily...
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;                      
    double h;
         
                                                                
    a=std::max(x,y);                    
    b=std::min(x,y);
    c=pow(x,y);                   
    d=sqrt(x);                              //it's our choice if we want to write std:: or not in these formulas but in min and max it's mendatory to use std...
    
    e=std::abs(-56.687);                    //it converets any -ve value into +ve...
    f=round(7.8843);                        //it rounds the value to the nearest larger or smaller number...
    g=std::ceil(9.3444);                    //certainly used to RoundUp the entered number...
    h=floor(11.8999);                       //if i hadn't included <cmath>, most of the functions like pow,sqrt and round etc would had gave me error cuz most of the aggrigate functions came under <cmath> library...

                    
    cout<<a<<" is the bigger value between x and y"<<"\n"; 
    cout<<b<<" is the smaller value between x and y"<<"\n";
    cout<<c<<" is the x raise to the power y"<<"\n";
    cout<<d<<" is the squareroot of x"<<"\n";
    cout<<e<<" is the +ve version of input"<<"\n";
    cout<<f<<" is the roundoff of our value"<<"\n";
    cout<<g<<" is the roundUp of result"<<"\n";
    cout<<h<<" is the roundDown of result"<<"\n";

}

*/

/*//Promblem time !! Making Pythagoras theorem in C++

#include <iostream>
#include <cmath>

using std::cout;

main(){

    double a;
    double b;
    double hypotnuse;
    double d;

    std::cout<<"Enter side A = ";
    std::cin>>a;

    std::cout<<"Enter side B = ";
    std::cin>>b;

    hypotnuse=pow(a,2) + pow(b,2);
    d=sqrt(hypotnuse);
    
    cout<<"The hypotnuse of the right angled triangle is "<<d<<"cm";

    return 0;

}

*/


//---------------------------------------------------------------


/*//How to use if-else statements in C++

#include <iostream>

int main(){

    int age;

    std::cout<<"enter your age : ";
    std::cin>>age;

    if(age>=18)                                                 //This statement tell the oponent to do somthing when the conditon is true,if not,then do another or stop...
    {std::cout<<"You are eligibla my guy..";}                   //If some condition within these '()'paranthesis is true,then print the text in {}curly braces...

    else if(age<=0)
    {std::cout<<"You got no age yet lil fetus.";}               //';' this thing should be placed before the end of the curly braces...

    else if(age>=100)                                           //In this, the program checks conditions from top to bottom and executes the first true one, so broader conditions must be written after smaller and compact ones or they will cover the whole boundry...
    {std::cout<<"You old ass dude get the fuck out";}
  
    else 
    {std::cout<<"YOU are not OLD ENOUGH TO ENTER";}             //We directly write what we want to print in else statement,no ()condition...

}

*/


//---------------------------------------------------------------


/*//How to use and make cases in C++

#include <iostream>

int main(){

    int day;

    std::cout<<"Enter Day Number from (1-7) : ";
    std::cin>>day;


    if(day==1){                                                    //This is How we do this from if and else-if statements, but some intelegents had made a simple and fast version of this and i'm going to solve rest of it with his/her way. so look and analyze carefully...
        std::cout<<"Roz khao Ande or Aj hai Monday!";
        return 0;
    }
    else if(day==2){
        std::cout<<"It's tuesday nigga!";
        return 0;                                                  //i returned 0 becauese as you can see i started my case from 4,5,6 ..so in 1,2,3, default(at last of case 7) will ment it as enter between (1-7) thing..so via returning 0 it stops there and we get our clean outcome by combining both if and case statements...
    }
    else if(day==3){
        std::cout<<"It's Wendsday brotha!";
        return 0;
    }
    

    switch(day){                                                   //this is called switch, it is the shorter version of else if. We write 'switch' then in paranthesis() we have to write that catagory jiski me subcatory bnaunga, then {}curly bracket used at the last case i.e default...
  
        case 4:                                                    //4 is the input that user will type and then it will display the text written below...
            std::cout<<"It's thrustday pal~";
            break;                                                 //break is also importand and each end line should have this ';' sign...
        case 5:
            std::cout<<"Friday aa!!";
            break;   
        case 6:
            std::cout<<"kurri saturdayi saturdayi,krdi rehndi ya kuri!!";
            break;
        case 7:
            std::cout<<"it's Sunday!! ab preenge dndde!";
            break;
        default:                                             
            std::cout<<"Enter Between number (1-7)";               //In this i combined both if-else and switches too! and both are working fine. default' is used same like else in this switch statements...
        }
        
}

*/

/*//A Clean example by using cases in C++

#include <iostream>

int main(){
    
    char grade;
    
    std::cout<<"What grade did you got (A-E)? : ";
    std::cin>>grade;

    switch(grade){
        
        case 'A':                                                                    //single quotes are used when we write char and double quotes are used when we use strings...
            std::cout<<"YOU Topped Nerd!";
            break;

        case 'B':
            std::cout<<"Theek thak hai but lil less";
            break;

        case 'C':
            std::cout<<"Sale prr liya kr thora bohht";
            break;

        case 'D':
            std::cout<<"bsdk gwwar,intelectually 0 hai tu";
            break;

        case 'E':
            std::cout<<"prabu ji where are your charran?";
            break;    

        default:
            std::cout<<"theek se daal in between (A-E)";        

    }
}

*/

/*//A mini calculator using cases in C++

#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout<< "***************Calculater*********************\n";

    std::cout<<"Enter #1 : ";
    std::cin>>num1;
    
    std::cout<<"Enter either (+ - * /): ";
    std::cin>>op;

    std::cout<<"Enter #2 : ";
    std::cin>>num2;


    if (op=='+'){
         result=num1+num2;;            
            std::cout<<"Result : "<<result<<"\n";
            return 0;
    }
    else if(op=='-'){
        result=num1-num2;            
            std::cout<<"Result : "<<result<<"\n";
            return 0;
    }
    else if(op=='*'){
        result=num1*num2;
            std::cout<<"Result : "<<result<<"\n";
            return 0;
    }
    else if(op=='/'){
        result=num1/num2;
            std::cout<<"Result : "<<result<<"\n";
            return 0;
    }
    else{ 
        std::cout<<"You fool enter between the given operaters!"; 
            return 0;
    }

    std::cout<<"***********************************************";   
}

                                                                          
    /*switch(op){                                                       //And from here i did it with case statements..

        case '+':
            result=num1+num2;;            
            std::cout<<"Result : "<<result<<"\n";
            break;

        case '-':
            result=num1-num2;
            std::cout<<"Result : "<<result<<"\n";
            break;

        case '*':
            result=num1*num2;
            std::cout<<"Result : "<<result<<"\n";
            break;

        case '/':
            result:num1/num2;
            std::cout<<"Result : "<<result<<"\n";    
            break;

        default:
            std::cout<<"You fool enter between the given operaters!"; 
            break;   
    }

    std::cout<<"***********************************************";

    return 0;
    */


