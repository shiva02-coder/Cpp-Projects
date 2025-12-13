//(hold Ctrl, press K, then press 0) to pack up !!

//------------------------------------------------------------------




//------------------------------------------------------------------



/* 

#include <iostream>

int main(){

//    int marks;                           //we are using ternary operator here...instead of if else,if we want to check only two condition not more ,then using this is best aproach cuz it's more easy..
    
//    std::cout<<"See if you passed the exam via entering your marks : "; 
//    std::cin>>marks;

//    marks>=33 ? std::cout<<"You Passed..Congrats my boy!!"  :  std::cout<<"You Failed Sucker :( ";                    //in it we have to write condition then (?) then 'std::cout<<(if condition true text)' : 'std::Cout<<(if conditon false text)';
 

                    //another eg..
//    int number;

//    std::cout<<"Enter Number to check if it's odd or even : ";
//   std::cin>>number;

//    number % 2==0 ? std::cout<<"Even" : std::cout<<"ODD";          //this was an another example of this...


                              //another way eg..
   bool hungry=true;                    //we can write false if we want to write text below.

   std::cout<<( hungry ? "You need food.." : "You need shi..");              //we can also do via this ..write 'std::cout<<' outside the bracket and then '(statement and '?' then 'your text which is true or correct : false text );

}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){

    int temp;
    bool sunny;

    std::cout<<"Enter Your Hell temprature : ";
    std::cin>>temp;

    std::cout<<"ENTER if your Temp is Sunny (1=True ,0=False) : ";
    std::cin>>sunny;

    //if(temp>0 && temp<30){std::cout<<"temp is Good.";}             // this && is used if i want to do two or more condition to be true and both should be true..
    //else{std::cout<<"temp is bad.";}
                                                                     //similar is down one..
    if(temp<0 || temp>30){std::cout<<"temp is hell bad.";}            
    else{std::cout<<"temp is good.\n";}                              //if we use || then it act as if one codition should be true to run this...and then it will give output.. 
                               
                                                               
                                                          
    if(!sunny){                                            //when we are checking if boolian variable is true,then it is optional to write '==true'..     
        std::cout<<"it is rain outside!";}                      //if i use '!' THEN it will do the opposite..!sunny means 'not sunny=true',in simple words it do the opposite 
                                                           //so ! returns the opposite of our statement whenever we enter it..
    else{
        std::cout<<"It is sunn outside!";}
    
    return 0;
}

*/



//------------------------------------------------------------------



/*  mAKE ONE YOURSELF AND UPLOAD IT TO gITHUB OF CM TO FEET AND FEET TO cm... 

int main(){

    double temp;
    char unit;

    std::cout<<"********** Temprature conversion*************\n";
    std::cout<<"F = Fahrenheit\n";
    std::cout<<"C = Celcius\n";
    
    std::cout<<"what unit whould you like to convert into : ";
    std::cin>>unit;

    if( unit=='F' || unit== 'f' ){
        std::cout<<"Enter the temp in Celcius : ";
        std::cin>>temp;

        temp=(1.8 * temp)+32.0;
        std::cout<<"temprature is : " <<temp<<"F\n";
        
    }
    else if(unit=='C' || unit=='c'){
        std::cout<<"Enter the temp in Farienhiet : ";
        std::cin>>temp;

        temp=(temp-32) / 1.8 ;
        std::cout<<"Temperature is : "<<temp<<"C\n";
    }
    else{
        std::cout<<"Please enter only C or F";
    }

    std::cout<<"*******************End*****************************";

    return 0;
}

*/



//------------------------------------------------------------------



/*GitHubb!

#include <iostream>
using namespace std;
#include <iomanip>
int main(){

    double height;
    char Units;

    cout<<"*******************Height Converter********************\n";
    cout<<"C=Centermeters\nF=Feet\n\n";
    cout<<"What do want to convert into : ";
    cin>>Units;

    switch(Units){

        case 'C':
        case 'c':
            cout<<"Enter your Feet Value : ";
            cin>>height;

            height=30.48*height;
            cout<<"Your Height in Centemeters is : "<<fixed<<setprecision(2)<<height<<"cm\n";
            break;


        case 'F': 
        case 'f':
            cout<<"Enter your Centermeter Value : ";
            cin>>height;

            height=height/30.48;
            cout<<"Your Height in Feet is : "<<fixed<<setprecision(2)<<height<<"ft \n";
            break;

        default:
            cout<<"Bitch Enter only F or C.. ";
            break;
            
    }
    
}

*/



//------------------------------------------------------------------



/*


#include <iostream>
int main(){

    std::string name;

    std::cout<<"Enter Your Name Nigga : ";
    std::getline(std::cin,name);                            //if we use getline instead of  directly cin,then we can get a whole line from user not only a word but a line or sentences with keyspace,but when we use just cin it completes program just after we write enter or keyspace after our word,but this getline will work until you click enter.. 
    
    name.append(" Manhas");                                 //we can add anything at the end of the input via writing append.  
    
    std::cout<<name.at(2)<<std::endl;                      //this name.at(in brackets you have to enter your index number in it) and after that if we want to run the next lines programs we have to write ' <<std::endl; 
    std::cout<<name.find("a")<<'\n';                             //this name.find is used to find and print the index of the value that we enterred.
    name.insert(0,"Mr.");                               //this .insert(0(it is index value LHS),Mr.(this is what we want to insert..))..so we use this if we want to insert anything between our text..
    
    name.erase(0,3);                                    //first three index holder will be deleted..in this case 'Mr.' is deleted(does not include 0.)
    //name.clear();                                         //this thing is used if we want to clear somthing,,
 

    if(name.empty()){
        std::cout<<"You didn't Enter Your Name Dumb.";}                //This is used if string is empty or not...it is bool btw.
    
    else if(name.length() > 20){                                         //length() gives us the total no of chrectors in a string..
        std::cout<<"You can't write over 20 cherector sucker.. ";}

    
        
    else if(name.length()<20){
        std::cout<<"Welcomee "<<name<<"!!!!";}

    return 0;

}

*/



//------------------------------------------------------------------


/*

#include <iostream>

int main(){

    std::string name;

    while(name.empty()){                         //while loop means if this condition remains true it will run prgram until the codition is false..
        std::cout<<"Enter your name : ";         //we check the condition in while loop again and again until the users enters the correct input..
        std::getline(std::cin,name);              //used to get full input lines from user.
    }

    std::cout<<"Wassupp "<<name;                  //by using whileloop i can force user to enter input until it satisfies my condition
 
    return 0;
}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){
    
//    int number;
    
//    std::cout<<"Enter your number : ";                       
//    std::cin>>number; 

//    while(number < 0){
//      std::cout<<"Enter a positive number # : ";
//        std::cin>>number;
//    }
//    std::cout<<"The number is : "<<number;

            //instead of doing this way that i showed up,although here our 2 conditions are repeating ...we can do(see down)


    int number;

    do{std::cout<<"Enter your number : ";           //in simple words in this we have to 'do some code first,then repeat again if condition is true..
    std::cin>>number;        
    }while(number<0);                                  //in this do while loop' method we have to write our code inside our do{} and then we have to write ()' and inside it we have to check our condition..this method is shorter than simple while loop.           

    std::cout<<"Your +ve number is : "<<number;              

    return 0;
}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){
     
       for(int index = 1;index<=5; index+=2){                   //in this for loop,firstly we assign our integer or the value that we are going to start with..,then we give coma and write the condition till we want our coutcome to run with...after that one more coma and at last we have to add how much diff. and gap betweeen the condition..
//     for(int i = 10; i>=0; i-=1){
        std::cout<<index<<"\n";}                     //till this brackets my code will work..after this braket again the code starts from starting until my condition..if i enter the thing that i written below into the bracket then this will print with each numbers of index..
        std::cout<<"Happy New Year\n";
 
                                                  //for loop is best when we want to repeat the code for certain amount of timee.
        
}

*/



//------------------------------------------------------------------



/*

#include <iostream>
int main(){

    for(int i = 1; i<=20; i++){        //again (i=1;) is starting index,(i<=20;) is ending index,(i++) is the gap i.e 1 between indexes..this is how for loop works... 
        if(i==13){
//            break;                     //this breaks the loop where we apply the condition..
            continue;                  //using this,it will skip the value that we entered and continew from the next value till the last condition..
        }
     std::cout<<i<<"\n";
    }


}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){

    for(int i = 1; i<=3;i+=1){             //this is for running 1-10(three times...)this is called nested loops in which we have a loop condition under a loop condition..
                                          //common name for inner loop is 'j'..
        for(int j=1; j<=10; j++){            //this is for running the loop 1 to 10..
            std::cout<<j<<' ';}  
        std::cout<<j<<'\n';                //this is to give gap every time i exit the inner loop and complete it..               
    }

}

*/



//------------------------------------------------------------------


/*

#include <iostream>

int main(){

    int rows;
    int columns;
    char symbols;

    std::cout<<"How manny Rows you want to add? : ";
    std::cin>>rows;

    std::cout<<"How manny Columns? : ";
    std::cin>>columns;

    std::cout<<"Enter a Symbol to use : ";
    std::cin>>symbols;

    for(int i=1; i<=rows; i++){                  //how manny == lines it will print..
  
        for(int j=1; j<=columns; j++){          //bu this how manny ||| this type lines we want to print..
            std::cout<<symbols;
        }
        std::cout<<'\n';
    }

}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){
 
    srand(time(NULL));                     //by this we can generate random number funtion in our code without it outcome will be same in every run..

//  int num = (rand() % 67)+1;              //by this we can  generate any random number between 0 to 67..and +1 works as to include the last number...
  
    int num1 =(rand() % 6)+1;               //this is used so it can display all 3 random numbers 3 times...
    int num2 =(rand() % 6)+1;
    int num3 =(rand() % 6)+1;
                                         //this will generate us random numbers 3 times... i know the syntax of it is little hard and a bit crammtype,but it's good to use this..
    std::cout<<num1<<'\n';
    std::cout<<num2<<'\n';
    std::cout<<num3<<'\n';

}

*/



//------------------------------------------------------------------



/*GitHubb!

#include <iostream>
#include <ctime>                          //this is used to access the time function..
int main(){

    srand(time(0));                       //this srand function will use the current time to generate random number..
    int RandNum=(rand() % 5)+1;           //this is used to generate the random number from 1 to 5

    switch(RandNum){
        case 1:  std::cout<<"You won a lambo !\n";
                 break;                                    //it's importand to use 'break when we use cases
        case 2:  std::cout<<"You won a G-wagon !\n";
                 break;
        case 4:  std::cout<<"You won a teddy Bear !\n";
                 break;
        case 3:  std::cout<<"You won a Chocolate Bar !\n";
                 break;
        case 5:  std::cout<<"You won a Golden house 24k !\n";
                 break;
    }
}

*/



//------------------------------------------------------------------



/*GitHubb!

#include <iostream>


int main(){

    int num;
    int guess;
    int tries=0;

    srand(time(0));                        //it starts the indexing for our random number with the seconds in the current clock time..that will randomize everything...this is how this works..

    num=(rand() % 100)+1;                  //it contains and can print the numbers between (1-100)..

    std::cout<<"********Number Guessing Game**********\n";

    do{                                                  //this do' loop is short and simple version of other loops...in this we do the coode written into the brackets till the while condition which is at the last got satisfied...
        std::cout<<"Enter a Guess between (1-100): ";
        std::cin>>guess;
        tries++;                                       //it keeps counting the tries...until we got our while condition right/wrong..

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num ){
            std::cout<<"Too Low!\n";
        }
        else{
            std::cout<<"Correct Shot in "<<tries<<" Tries"<<'\n';       
        }

    }while(guess != num);                              //this tells that all the code between the {} will work from up to down until this while condition got satisfied....

    std::cout<<"***************END****************\n";

}

*/



//------------------------------------------------------------------
  


/*

#include <iostream>
       
std::string name  = "Shiivang!!";                        //i can add any variable into my function..and then use it afterwards...
int age=18;
void Happy_BDay(){                                                               //by using void i can fuction it and make it to a liitle command and whenever i need it,i can call it inside my main()...
    std::cout<<"Happy Birthday to you "<<name<<"!\n";                             //here i can write anything i want to display when i run this function..
    std::cout<<"MAY GOD blast YOUuuuuu!! You are "<<age<<" Years old\n\n";
}

int main(){                                     //inside here,i can call any function..
 
    Happy_BDay();                                       //then i  can call the function like this..as manny time i want ..
    Happy_BDay();

  
    return 0;
}

*/



//------------------------------------------------------------------



/*

#include <iostream>

double length;

double square(){                                       //this is also a functionn...but here we used double cuz we can use double inside the std:: but we can't use void inside the std::, void only works alone...
    return length * length;                          //this return the value and stores it,we can use it  afterwards...but std:: only prints it once..
}

double cube(){
    return length*length*length;                //ye wala tareeka boht hi aasan hai esme we have to make functions out of the main() and then we have to apply them inside.. it is the easiest way but here there's nothing to learn...
}

int main(){

    std::cout<<"Enter your side lenght in cm : ";
    std::cin>>length;

    std::cout<<"Area : "<<square()<<"cm^2\n";               //gonna write a more complex of this programm down ,there i will learn somthing neww..
    std::cout<<"Volume : "<<cube()<< "cm^3\n";

}

*/



//------------------------------------------------------------------



/*

#include <iostream>

double length;                             //this is for input...

double square(double length);                                      //in manny cases we write and define the function at the end of the main(),so we have define it above in the main to keep working..
   //this is the step 2..(labeling)                                         //in here square is the name of our function ,and inside it we used lenght as a variable..                                             
double cube(double lenght);                                           //now this will find vol of cube.. 
                                               
    int main(){
    
    std::cout<<"Enter Your Number : ";     //this should be under main(),when we want this input..
    std::cin>>length;    
                                                                                        //we defined our lenght inside it ..this is a local function,we can't use this outside the main...
    double Area = square(length); //length*length;(can also use this )                 //we created a new variable and that's area..and we only have to return square(length)cuz this is our function and i.e area..
    double Volume = cube(length);       //these are the functions btw.                //we didn't use double here cuz it's work is done now,and also we have already made our funtion,and now i am using it as Volume'...

    std::cout<<"The Area of the Square is "<< Area <<"cm^2\n";     //
    std::cout<<"The Volume of the Cube is "<<Volume<<"cm^3\n";

    return 0;
}

double square(double length){                      //this is the orignal function..we used to label it before main() to use this after main()
    return length*length;                         //this is where i return the producd of lenght..   
}
     //these both double are the step one...
double cube(double length){                 //this is to find the vol of cubee..
    return length*length*length;
}
//this is more relayeable than the one code that i did earlier cuz it gives me more things to learn and after learning it it is easy to wirte code,and it shortern the lines ..

*/


 
//------------------------------------------------------------------



/*

#include <iostream>

std::string Concat_String(std::string S1,std::string S2);            //Hey compiler, there exists a function called Concat_String But there is no actual code (body) yet — so the function can’t run...we are just here to show the compiler that we are going to use function afterwards,so to label it we did this ....        
                                                                    //this is more relient than the normal way where we define the function outside at  the starting of our include..its more safe and set..
int main(){
    std::string First_Name,Last_Name;

    std::cout<<"Enter Your First Name Sucker : ";
    std::cin>>First_Name;

    std::cout<<"Enter Your Last Name Sucker : ";
    std::cin>>Last_Name;

    std::string Full_Name=Concat_String(First_Name,Last_Name);              //WE didn't entered the S1 and S2 in the place of this first and last name because here we are assigning the  first and last name as s1 and s2..
                                                                           //when i call this concat(first and last name) i'm saying that take the value inside the first and last name and copy it into parameter s1 and s2..so s1 and s2 becomes Shivang and Manhas..and it returns Shivang Manhas and this is strored in Full_Name..
    std::cout<<"Yoooo!! "<<Full_Name

    return 0;
}
                                                                     //these s1 and s2 are the parameters,temporary names and placeholders,they don't have the real values until someone calls the functions..
std::string Concat_String(std::string S1,std::string S2){           //in this we have the variables values into the concat_str' function....and we have this 'std::string s1' in this...like we can neglet std:: but only when we added namespace..  
    return S1+" "+S2;                                              //this is where our concatination works.. 

}

*/



//------------------------------------------------------------------



/*

#include <iostream>

void bakepizza();             //here we have to mention the function that we named and wrote below..
void bakepizza(std::string topping1);  //2nd function labeling...
void bakepizza(std::string topping1,std::string topping2);    //3rd function lableing..

int main(){
   
    bakepizza("Mirchi","Peporoni");
    bakepizza(); 
    bakepizza("ShimlaMirch");
   
}

 //from here the function starts..

void bakepizza(){      //F1
    std::cout<<"Here is Your Pizza!!\n";
}
     
                                         //you can see the name of the functions are same,so whenever we add the things inside the funtion and when we call it in the Int(),then only that function will run that matches the syntax of the function..

void bakepizza(std::string topping1){      //F2
    std::cout<<"Here is your "<<topping1<<" pizza!\n";
}
                                                                           //this is callled fucntion overloading btw...they have same funtion name but diffrent or more parameters,compilers choose the correct one depending on how and how manny i call it.
void bakepizza(std::string topping1,std::string topping2){     //F3
    std::cout<<"Here is your "<<topping1<<" and here is your "<<topping2<<" Pizza..!\n";
}

//in this i can't make 2 functions that looks the same and have same number of values ,if the fucntion name is same it doesn't matter the string name or the variable name that we gonna label inside the function...
//The compiler does not care about the variable names (topping, xyz), it only cares about the type and count.

*/


   
//-----------------------------------------------------------------



/*

#include <iostream>

int myNum = 1;                      //best to avoid this cuz it polutes the namespace..
                       //but if we want to use this global variable then we have to use 'scope resolution.. we have to write '::' before each   
                       //variable when we print them..this allows us to print the global variable instead of the local variable..EXAMPLE IS at the end..     
void printNum();

int main(){                    //funtions are secure so variable are generally prescribes to use here...

    int myNum = 2;       //mains's variable.. 
    std::cout<<myNum<<'\n';  //to print main's variable.   
    printNum();      //it calls the function down below.
}                                       //in this if we run this without the scope' our function will use local variable first before going for the 
                                        //global one.. 
                                        //that's the reasion we gets  2 3 when we prints it..firsly our main worKed then our printNum worked...
 
void printNum( ){ 
    int myNum = 3;
    std::cout<<::myNum<<'\n';          //in this i used '::' before myNUM,so now it will print the global variable instead of local variable
                                      //(generally local variable prints before global variabels.)so we used the scope resoluter' which helped us   
                                      //to to use global variable instead of local variable..
}

*/



//-----------------------------------------------------------------



/*GitHubb! perfection

#include  <iostream>

void showbalance(double balance);
double depositmoney(double balance);
double widhrawmoney(double balance);



int main(){

    double balance=0;

    int choice=0;

do{
    std::cout<<"\n_______________________________________________________________\n\n";
    std::cout<<"                ************************\n";
    std::cout<<"                {Welcome to BadAss Bank}\n";
    std::cout<<"                ************************\n\n";
    std::cout<<"    Click 1 - Check Balance (?$)\n";
    std::cout<<"    Click 2 - Deposit Money (+$)\n";
    std::cout<<"    Click 3 - Widraw Money (-$)\n";
    std::cout<<"    Click 4 - To exit BadAss \n";
    std::cout<<"\n________________________________________________________________\n\n";

    std::cin>>choice;


    switch(choice){

        case 1: showbalance(balance);           //i don't need to define the function here(std::cout and all that shi..), i just have to mention the function..and down there there is function defination..
                break;                           //this break will stop here after i click the 1 for the showbalnce,and then it runs again the whole process..

        case 2: balance=depositmoney(balance);
                showbalance(balance);           //this shows the balance everytime i made a deposit..
                break;

        case 3: balance=widhrawmoney(balance);
                showbalance(balance);
                break;               

        case 4: std::cout<<"\nSee yaa another time..Bie Biee:) !\n";
                break;
                
        default: std::cout<<"Invalid Choice!..Enter Between (1-4) kidoo\n";
                
    }   //switch end

}while(choice!=4);   //loop end   
    
}   //main end

//function defination start from here! less goo!!

void showbalance(double balance){
    std::cout<<"\nYou Got Total of "<<balance<<"$ in your account...\n";
}


double depositmoney(double balance){

    double amount;               //new variable to take user input.

do{  
    std::cout<<"Enter the amount you want to Addin in your BadAss account : ";
    std::cin>>amount;


    if(amount < 0){
        std::cout<<"\nEnter Valid number suckerr!\n";}
               
    else if(amount>20000){
        std::cout<<"\nIt's Hell too much for a Single Deposit ! \n";}
    
    else{balance+=amount;}             //balance me amount pluss.    (left side of equalto is where the amount got added or subtracted..)
        
}while(amount<0 || amount>20000);

     return balance;        //this return will save the amount and use it whenever and wherever i want..
}


double widhrawmoney(double balance){

    double amount;

do{
    std::cout<<"Enter the amount you wanna CashOut :";
    std::cin>>amount;   
    
    if(amount<0){
        std::cout<<"\nDon't input Shit duckhead...\n";}
        
    else if(amount>balance){        
        std::cout<<"\nYou ain't got that much in your account dreamer\n";}  

    else{
        {balance-=amount;}      //balance me se ammount minus...
    }

}while(amount<0 || amount>balance);

    return balance;

}  //function end..

*/



//------------------------------------------------------------------



/*

stone paper scissor ass github

#include <iostream>
#include <ctime>          //to generate random number with the help of time...

//func. Definations...
int getUserChoice(std::string playerName);        //function to get user input..//and in this it gives player's number...
int GetComputerChoice();                  //function to get oponentrandom choice..
void showChoice(int choice);                  //to give us option to select between choices..
void chooseWinner(int player,int oponent,std::string mode);    //to print and show betweem both,who's the wimmer.. and this std::string mode is because we can't just take and use anywhere,t’s just a parameter placeholder so the function knows what value you sent from main.


int main() {

    std::string mode;
    int player,oponent;            //player = you, opponent = either computer or player 2
    char playAgain;               //to get the imput from user to restart the game...  
    char back_to_mode;           //to select mode between pvp or pvc..

// int PlayerWins=0,ComputerWins=0,Ties=0;  //this is used to note the numberr of wins and looses..
//passss,we will work on the count of wins or loses later...skip for now....

do{              //Outer do–while → lets you go back to mode selection,it will always kick you back to mode selection every time you loop. That means even if you just want another round in the same mode, you’d have to re-enter CP/PP again...that's why we didn't colided both loops in one...
   
    std::cout<<"Select Mode : Play With Computer (CP) or Play With Person (PP) : ";
    std::cin>>mode;

   do{      //Inner do–while → lets you repeat a round in the same mode

    //player=getUserChoice();          // It stores the logic behind the input of the user and we can use this to classify winnners at the end,I kept it under the player variable cuz if i don't then i can't use the value anywhere else and also can't store it..also code become harder to read...so storing it in a variable (player) makes the program easier to manage and it is neccesry...
    //std::cout<<"Your Choice : ";    // This text will show and then our input will show,to convert the input from 1,2,3 to rock,paper,scissor...we will do the step down below...
    //showChoice(player);            //function composition(func.inside func.)     //takes the user's choice and displays what it represents.  
    //***this upper one is for when i want everyone to show in the starting when i enter any value that what i selected,but for now i want to hide it and show it in the last..so i am making changes****


    if (mode=="CP" || mode=="cp"){                         //this is for the mode that will allow us to play with oponentand player..
        player=getUserChoice("Player 1");                           //TO GET input from user but in this we did not want to show it in the screen,just save it internally..
        std::cout<<"\nYour Choice : ";                   //now this will display my choice only when i play verses with computer..
        showChoice(player);

        oponent=GetComputerChoice();                 //It stores the whole logic behind the random number generate of oponentchoice...made this big getcomputerchoice smaller to just 'computer'..
        std::cout<<"\nComputer's Choice : ";
        showChoice(oponent);                   //this computer(getcomputerchoice) will select the number between 1-3 randomly and then this showChoice will connet that numbers to the real text meanings..
    
        chooseWinner(player,oponent,"CP");       //to display result...
    }

    else{
        std::cout<<"\n--------P v P-------- \n";

        player=getUserChoice("Player 1");
        oponent=getUserChoice("Player 2");


//till now both the player make the choice..so now we can print who choose what.
        std::cout<<"Player 1 Selected : ";
        showChoice(player);
        std::cout<<"\nPlayer 2 Selected : ";
        showChoice(oponent);
        
    chooseWinner(player,oponent,"PP"); //we defined extra result cuz we will now add condition for our program i.e for counting the number of wins or loss...
    }

    std::cout<<"\nPress 'Y' to play again :";
    std::cin>>playAgain; } while(playAgain=='Y' || playAgain=='y');             //char have to be ' ' single quetes if we want to run it ( only in char..)

    std::cout<<"\nPress 'M' to Select Mode Oponent :";
    std::cin>>back_to_mode;

} while(back_to_mode=='M' || back_to_mode=='m');            //this will be printed below the 'press 'Y' to exit' and whenever i press m or M it will take me back to the select oponent option and rerun the program with the changes..

std::cout << "\nThanks for playing !!\n";

}

int getUserChoice(std::string playerName){

    int playerChoice;
    
    do{
       std::cout<<"Choose : Rock-1 , Paper-2 , Scissors-3\n";
       std::cin>>playerChoice; 
    }while( playerChoice<1 || playerChoice>3 );               //it means do this,and while or if(condition) is true then repeat...so in this we will run this loop again again if player enters number smaller than 1 and also if number is greater than 3.

    return playerChoice;
}


int GetComputerChoice(){

    srand(time(0));           //It shuffle the deck based on current time..

    int num = rand() % 3 + 1;      //firstly this rand generates a random number,secondly this %3 is used quinki any number devided by 3 always gives ressult 0 or 1 or 2,thirdly the +1 shifts this 0,1,2 to 1,2,3...
                                  //So, the line int num = rand() % 3 + 1; means: 1.Get a big random number from rand(). 
                                 //                                               2.Find the remainder when divided by 3 (this gives you 0, 1, or 2).
                                //                                                3.Add 1 to that result (this gives you 1, 2, or 3).
                               //    Final Result: The variable num will randomly hold the value 1, 2, or 3.                                            
 
    switch(num){             //To get the computer's choice..
        case 1: return 1;    //this returning thing is also similar to std::cout just in this we are giving the values internally to oponentto randamize it.
        case 2: return 2;   //this will go to the main function and in it showchice(computer) will connect results..
        case 3: return 3;      
    }
} 


void showChoice(int choice){          // I created a switch inside showChoice funtion and it does like when i enter 1 it shows you entered rock and same for others etc..
    
    switch (choice){
        case 1:std::cout<<"Rock!\n";
                break;
        case 2:std::cout<<"Paper!\n";
                break;
        case 3:std::cout<<"Scissors!\n";
                break;    
    }

}


void chooseWinner(int player,int oponent,std::string mode){           //in this the outcome of player(form getuserinput) and outcome of computer(getcomputerinput) gives the valuse and then we check all that inside this checkwinner function via adding switch and if statements..
                                                  //our whole function i.e getoponentand user choice lies under the oponentand player named variable in the main functionn..that's the reason this parameters works.. 
 
  switch (player){                            //by adding player in switch i can control the possible commands of user and then compare it to computer..

    case 1 : if(oponent==1){                     //Here the case is one is when user enters 1 i.e rock,and then it is being compared with all oponentchoices..
             std::cout<<"It's a Tie !\n ";}
             else if(oponent==2){
             std::cout<<"Opponent Won !\n";}   
             else{std::cout<<"Player Won !\n";}
             break; 
            
    case 2 : if(oponent==2){
             std::cout<<"It's a Tie !\n ";}
             else if(oponent==1){
             std::cout<<"Player Won !\n";}
             else{std::cout<<"Opponent Won...You lost Sucker!\n";}
             break;

    case 3 : if(oponent==3){
             std::cout<<"It's a hell Tie !\n";}
             else if(oponent==2){
             std::cout<<"Player Won!\n";}
             else{std::cout<<"You Lost Dumb...Oponent Won !\n";}
             break;       
    
    }
 
 }

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){

std::string cars[] ={"Royal Rozii","Mercideze","Bmw","Maruti"};            //arry= data stu. that can hold multiple values ,it is like lists in python,and those values are accessed by index number..also, arrys can only contain values of the same datatype..  

cars[1]="Supraaa";        //can also change the car name...

std::cout<<cars[0]<<"\n";      //we have to list the index number that i want to print..
std::cout<<cars[1]<<"\n";           //should have to make diffrent for every indexes..
std::cout<<cars[2]<<"\n";

//arrys can also be declared firstly and then later on i can assign value..like the eg below

std::string bikes[4];           //this 3 is the size of arry that means as the number of bikes we will list ..it is assign firstly in this ....//if we do any invalid number in it like 2 or somting then it will print but that is not priscribed generally...

bikes[0]="Seplendor";
bikes[1]="Yamaha";
bikes[2]="Kawasaki";
bikes[3]="HeroHonda";
bikes[4]="kuch bi ni";

std::cout<<bikes[4]<<'\n';
std::cout<<bikes[1]<<'\n';
std::cout<<bikes[2]<<'\n';


double prices[]={5.32,6.23,74.3};   //this was an other exsmple

std::cout<<prices[2]<<'\n';
std::cout<<prices[0];                //so the arry is the datastucture that can hold manny variable inside it in one...

}

*/



//------------------------------------------------------------------



/*

#include <iostream>

int main(){

                                      //sizeof()=it tells the size of all the variable,datatype,class,objects etc in bytes..

    double Gpa=0.3;
    std::string name="Shiva";
    char grade = 'F';
    bool student = true;

    std::cout<<sizeof(Gpa)<<" Bytes\n";         //double have the constant byte size,no matter how big the value is but byte size will be only "8bytes for double"..   
    std::cout<<sizeof(double)<<" Bytes\n";     // we will get same if we check for double instead of our variable...
    
    std::cout<<sizeof(name)<<" Bytes\n";            //constant for this also,i.e 32 bytes and the values's lenght doesn't matter..  
    std::cout<<sizeof(std::string)<<" Bytes\n";    //same for this also, outcome=32 bytes(constant)

    std::cout<<sizeof(grade)<<" Byte\n";     //for this the constant size is 1 byte.
    std::cout<<sizeof(char)<<" Byte\n";     //yes we checked,it is 1 byte.

    std::cout<<sizeof(student)<<" Byte\n";  //by constant it is also 1 byte.
    std::cout<<sizeof(bool)<<" Byte\n";    //yes 1 byte..



    //HERE'S THE CATCH - These all values of bytes of the operaters like bool,char,double can be changed if we use arry in this and create muntiple values..Here's some examples below..

    double Weight[]={63.23,65.3,66,62};                     // I'm creating the arrys of all the catogries,i mean all the datatypes that contain four four values of each datatype..
    std::string People[]={"Gori","Shiv","Rohit","Mannat"};
    char gender[]={'F','M','M','F'};
    bool hardworking[]={false,true,false,true};

    std::cout<<sizeof(Weight)<<" Bytes\n";       //now we can see that this gives '32 bytes' because we have 4 index and 4*8(double sizeof() constant)=32..
    std::cout<<sizeof(double)<<" Bytes\n";      //this gives the usual 8 bytes..
 
    std::cout<<sizeof(People)<<" Bytes\n";        //this gives 128 bytes cuz we have  4*32 = 128 bytes 
    std::cout<<sizeof(std::string)<<" Bytes\n";  // this gives that constant 32 bytes..

    std::cout<<sizeof(gender)<<" Bytes\n";  // 1*4=4 bytes (we got 4 indexes in the arry...)
    std::cout<<sizeof(char)<<" Byte\n";  //1 byte

    std::cout<<sizeof(hardworking)<<" Bytes\n"; //same for this also, (1*4=4 bytes) cuz we got total of 4 input text..
    std::cout<<sizeof(bool)<<" byte\n";  //size is also 1 byte here..


//till now we had 4 indexes in an arry and we were finding their actual size via multiplyting total indexes(i.e 4) with the size of a byte of the datatype they belong to..now if we want to find the total number of indexes or values i.e size of an arry,then we have to divide the total size of an arry with their constant datatype from wehre they belong to,Lemme do below..
   
    std::cout<<sizeof(Weight)/sizeof(double)<<" Bytes\n";                 // As i expected,it gave me '4 bytes' as the output..that means total indexes are 4...
    std::cout<<sizeof(People)/sizeof(double)<<" Bytes\n";                // I can aslo fill up any value if i want to...like here i did 128(total people size byte)/8(double constant), and this gave me their division i.e '16'.
    std::cout<<sizeof(hardworking)/sizeof(std::string)<<" Bytes\n";     //this was just for fun and i did this and i got '0 bytes'..so i can assume that this finds the remainder not that actual precize value..
}

*/



//-------------------------------------------------------------------



/*

#include <iostream>

int main(){

    std::string students[]={"Nitya","Pranjal","Seher","Gori"};           // This is an Array and now to display the total names,i want an easy way...so i will instead of manually printing every arrey for every name,i'll use for loop...
    
//    std::cout<<students[0];
//    std::cout<<students[1];                //this is the boring and long way,we have to mention every arry each time..


//    for(int i=0; i<3; i++){             //this 3 is the number of names in our students variable(it starts from 0 so [0 1 2],there are 3 total and we wrote <3 i.e {0 1 2} )
//    std::cout<<students[i]<<"\n";      //by using this we can print all the student name already mentioned..
//    }                                 //but this thing is so manual when we add 1 or 2 other names...then we have to change i< each time..so now the example below will work..


      for(int i=0; i < sizeof(students)/sizeof(std::string); i++){        //by using sizeof() i calculated the total elememts in this students variable and down below i printed the i ,this makes it full automatic,i just need to insert as manny name as i want and then it will print them without making changes in any other code...
        std::cout<<students[i]<<"\n";
      }
 
}

*/



//--------------------------------------------------------------------



/*

#include <iostream>

                        //foreach loop = this loop have compact and lil short syntax than simple for loop,but it is less flexible(means ki me variables ki inner values ko ni control kr skta i.e i can do i++ or i-- or i-=2 or anyother,i can skip the values in between using this but this only work in for loop,in foreach loop it will start at the initial value and end at the ending value,means it will print all values..)

    int main(){

    std::string students[]={"Pranjal","Shiva","Rohit","Babar"};
    char initial[]={'S','A','M','Q'};
    
    for(std::string stu : students){               //firstly add datatype i.e std::string inside the for() and then we have to name anything and then do : and then pass our variable name(dataset) that contains every elements or names..then simply print that 'anything' and done..
        std::cout<<stu<<"\n";                     //In for 1.Mention datatype 2.Any label text 3. ':' and dataset name 4.Then just print that short label..
    }                                            //now we can also change or add any other names in dataset,it will automatcly got printed once run...but the only con is that we can only use this for each thing if i just want to print all the values or elements present in the dataset..

    for(char First_Words : initial){
        std::cout<<"\n"<<First_Words;            //in this i only have to add or edit the dataset names or values to print them,no need to make changes in the rest of the code..
    }

}  //so i can say  that this forEach loop involve less syntax but it is less flexible..

*/



//--------------------------------------------------------------------



/*

//--------------------------------------------------------------------

                            //In here we are learning how to pass arrey in the function.. 

#include <iostream>

double getTotal(double prices[],int size);       //this shi is function defination..and the reasion that i have to pass everything each time like in here i passed size is - ' everywhere i use this function 'Each function lives in its own little bubble. If it didn't bring it with them, they don't have it!"

int main(){
    
    double prices[] = {45.32,53,86,2};               //this is an Arrey...
    int size=sizeof(prices)/sizeof(prices[0]);      //When you pass an array to a function, IT WILL THROW AWAY its size information! and make it a pointer that did not work automaticlly..it needs to be defined like this first..so we made this initially in the main.
    double total = getTotal(prices,size);          //this is function we just used here and i want to give these prices to this function so it can calculate the total sum..that's why i sent this 'prices inside this function....and same logic for size also..
    std::cout<<"$"<<total;                        //last step.
}

double getTotal(double prices[],int size){      // I haven’t written how it calculates anything yet,I’m making a machine called getTotal.It will take a box full of doubles named prices.Later, I'll define what the machine should do with them.THis is the placeholder !! it holds and waits for the values (it didn't store them..) it's just a shortcut key in short.. 
    double total=0;                            //variable can have same name till they are in diffrent functions..
    for(int i=0; i < size; i++){              //used to count and list along values of all the elements in the given variable..
        total+=prices[i];                    //at index i - [i] is changing(+1) in this for loop we had written ....here, the value of i'es that is now attached with the values present in our dataset will get add into this total so that's whhy we had written this..
    }

    return total;                          //returns the upgraded value..
}

//"You want the size? YOU remember it yourself and pass it to me! I'm not your babysitter!..that's the reason we have to pass everything whenever we make new variable inside main..
//That's why you have to manually calculate and pass size - because C++ is too dumb/lazy to do it for you in function.
//You're not crazy for expecting it to work automatically - every sane person does! This is just one of C++'s many annoying quirks! 🥀

*/



//---------------------------------------------------------------------



/*

//Here we are building a thing that can find index of the entered number. 
#include <iostream>

int searchIndex(int numbers[],int size,int myNum);

int main(){

    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);           //this thing calculate the total numbers present.
    int index;                                              //this thing will tell us the index name where our number lies..
    int myNum;                                             //number's index that i want to find...

    std::cout<<"Enter Value to Find it's index : "<<" \n";
    std::cin>>myNum;

    index=searchIndex(numbers,size,myNum);                 //these were the empty space that are now filled with the variable defination we did in this main...and down below we defined in the funtion that how to use these values and build logic there..here we are just using that logic..


    if(index ==-1){std::cout<<"The Entered Element is not in this Array";}

    else{std::cout<<"The Entered Number "<<myNum<<" is at the INDEX "<<index;}
}

    //func. Defination

int searchIndex(int numbers[],int size,int myNum){       // In here we defined a function and in it we have numbers,size,myNum that we will define now..this is the perfect example to showcase the old concept that we did last time..
  
    for(int i=0 ; i<size ; i++){
      
        if(numbers[i]==myNum){              //  It finds the i'th element here..... THis shi right here means 'agr meri dataset ki values me se bi equal ho jati hai meri entered value ke sath then it will return that value's index from that dataset....
            return i;}                     //this will return the values of i and myNum so that i can use them anywhere in the main.
       //   return myNum;}                //return myNum inside the loop means after checking only the first element, if it doesn't match, you return myNum instead of continuing to search..
       
       // else{return -1;}              //The function would only check the first element and then either Return the index if it matches, OR Return -1 immediately if it doesn't match..that means i need to check all  the elements in the array before concluding that the element is not found...so that's the reson of returning -1 after the loop...
               
    }

    return -1;    // If we got here, it means not found, so return -1"If NO match found after checking ALL elements: the loop ends and we reach return -1..If the element IS found, we return 'i' inside the loop... and the function exits immediately...
}

*/



//---------------------------------------------------------------------



/*

//Now I'll do the opossite !! i will make a program that will print any number or value in an array via writing just an index..
#include <iostream>

int main(){

    std::string Anime[]={"One Piece","Demon Slayer","Jujutsu Keisen","One Punch Man","Attack On Titan"};
    int size=sizeof(Anime)/sizeof(Anime[0]);
    int index;

    std::cout<<"Enter any Index of your Choice between 0 to "<<size-1<<" : ";         //this thing will keep the indexes on track..
    std::cin>>index;
    
    if(index>=0 && index<=size-1){ //or index<size)               //checks index is between range..

    std::cout<<"Index "<<index<<" Have Ainme Labeled : "<<Anime[index];}      //this numbers[index] is my input number[3] lets say...c++ automatcly gets everything inside [] as index number
    
    else{std::cout<<"Invalid Index ! ";}
}

*/



//---------------------------------------------------------------------


/*

//this program is for sorting Accending to Deccending and Vise versa... [the concept is bubble sort!] and it took me around 3 hours to understant and get the logic!and this ting
#include <iostream>
//#include <algorithm>      //this shi right here is used to swap between values we selected... manual way is also mentioned below..

void sort(int array[],int size);       //func. defination

int main(){

    int array[]={7, 3, 10, 1, 12, 4, 9, 2, 6, 11, 8, 5};
    int size=sizeof(array)/sizeof(array[0]);

    sort(array,size);     //function mentioned that we'll use in this main..this will correct the order of the values...

    for(int element : array){            //this is a forEach loop,we just need to simply print all the elemnets that's the reason we used this cuz here we don't want to apply any condition and all....we just want to print and sort the full outcome...
        std::cout<<element<<" ";}  

}


void sort(int array[],int size){                                   //Down below, the Outer loop counts the necessary passes, and the Inner loop performs the comparisons and swaps according to the condition...
 
    for(int idx1 = 0; idx1 < size-1; idx1++){                    //This will sort till SecondLast element and this is under the sort fucntion so it's his work to do so..the purpose of the outer loop is to correctly position N elements. If N−1 elements are placed correctly, the Nth (last) element is automatically sorted..
        for(int idx2 = 0; idx2 < size-1-idx1; idx2++){          //This mf right here will move one value minus each time from the right(larger element will get settled in right after each operation) after each chakkr..cuz last values will be settled automatcly...
          
            if( array[idx2] > array[idx2+1] ){                //To write all this in assending order,change this hell sign..
//              std::swap(array[idx2],array[idx2+1]);        //This is shortcut to swap and don't forget to use std:: while accessing things from a libraby..
    
                array[idx2]=array[idx2]+array[idx2+1];      //this is the longcut method and this is fully on logic and understanding..(used for swaping)
                array[idx2+1]=array[idx2]-array[idx2+1];       
                array[idx2]=array[idx2]-array[idx2+1];                                  
            }
        }
    }                                                   //The inner loop (j) compares neighbors and swaps them as I move right.The outer loop (i) repeats that process several times, until everything is in order.
}

*/



//---------------------------------------------------------------------



/*
 
#include <iostream>

int main(){                                                          // fill()= it fills or prints the value automatcly..we just have to mention how we want to..(like 3 5 or 588)...
                                                                   
//std::string name[5]={"shiva","shiva","shiva","shiva","shiva"};      //this thing isn't practical..what if i have to print this element 10000 times...and here i am trying to print one word at times that i needed...but i can also do this vai loops but that's lil longer method..

const int size = 21;            //this means this size thing cannot change down below it can only change in the starting

std::string name[size];         //this name is an arry and this size' define as how manny times this thing will get print...

//fill(name,name+size,"Gurleen");      //1st fill     //this is how this fill works...fill(our arry name(*starting index),name+size we declared(end value index)," "or int or anything we want to print); 

fill(name,name+size/3,"Gurleen");      //1nd fill      //lets do some experiments with it....so here i divided the size by 3 that means it will have 3 parts(cuz if number is 21) so first 7 will get printed as Gurleen and then next 14 will be empty.. soo,indexes 0 to 6 will be Gurleen...
//here this name right after fill means the first index valu..

//fill(name+ size/3 ,name+ size ,"Shivang");        //2nd fill      //this half till down (from 7th to 21th will be Shivang)..cuz it means just next after our fill,the value is our starting index i.e 7 ,then ending i.e 20(cuz indexing starts from 0 so last value got covered via 0 indirectly..), then the thing we want to print..soo,indexes 7 to 20 will be Shivang..and if i want to print till 13 only and want to leave the rest of the space empty then i have to manually write the ending element to name + "that element"...this will do that but it's fine to not do this..
fill(name+ size/3 ,name+ (size/3)*2 ,"Shivang");   //2nd fill    //this will keep one full end block of 7 empty and fill 13 with Shivang only..

fill( name+ (size/3)*2, name+ size,"Arzoo");      //3rd fill   //here, name + size covers all till last elements..

for(std::string names : name){                  //this forEach loop is just to print them and give gap or somthing....
    std::cout<<names<<"\n";}                   //this was all about our fill function,i can also switch the number of divided by like here it was 3 ,i can do it like 4 or 5 but then i have to make 4 or 5 will respectivily...
                                               
}

*/



//----------------------------------------------------------------------



/*

#include <iostream>               //in here we are leaning to take input from the user while using array..this is one of the methods to do that...

int main(){

    std::string cars[5];
    int size=sizeof(cars)/sizeof(cars[0]);       //This line is basically telling the program how many total elements are inside the array cars..
    int count=0;

    for( int i =0; i <size; i++){

    std::cout<<"Enter your Cars or (q) to quit #"<<i+1<<" : ";              // i = 0 program says “Enter your Car rank #1:” → input gets stored into cars[0].   i = 1→ says “Enter your Car rank #2:”→ input goes into cars[1].and so on… until all 5 are filled.
    std::getline(std::cin,cars[i]);                             //this std::getline reads a full line of text including space from a input like std::cin...(it have two arguments in it's syntax --- std::getline(from where to get , where to store)
    
    if(cars[i]=="q"){         //this is for if i enter q rather than any car name it will quit the program and take that all cars as input..
        break;}
   
        count++;             //only increase count for real car names,this means this count will count the total cars entries until q is pressesd and then it will get break and only that 2 or 3rd value is passed..not all..(jb tk q ni dbta,count increase krte rho ,agr dbe to count udr hi rok do or save kr lo...)
    }
    
    std::cout<<"Here's Your Top #"<<count<<"Cars : \n";        //now i have to print all the cars just with the /n ,so i'll use this 'for loop..

    for(int i =0; i<count;i++){               //keep looping only until the number of cars actually entered i.e in count..It stops before printing any empty slots (like index 2, 3, 4 depending where i pressed q).
        std::cout<<cars[i]<<"\n";            //Print that car’s name and then go to a new line.
    }                                       //In short it says,Start from the first car and print each one until we’ve printed the total number of cars the user actually entered.”
}

*/



//----------------------------------------------------------------------



/*

#include <iostream>            //Iterating over an array means going through each element of the array, one by one, to look at it or do something with it.

int  main() {                //here we are discussing Multidimentional 2D Array,in this we have 2 array combined in the form of Row and Columns..


    std::string cars[3][4] ={ { "Mustang", "Ford",     "Supra",   "Creata"},    //Row1         //here 3 is number of rows and 4 is number of colums...(it's not important to mention number of rows cuz it will gradually get into the test we enter...)
                              { "GTR",     "Thar",     "Porche",  "Dezire"},    //Row2
                              { "Tempu",   "Monster",  "Maruti",  "Swift" } };  //Row3
                               //col1      //col2      //col3        //col4      


    std::cout << cars[2][1]<<" ";       
    std::cout << cars[2][1]<<" ";            //By Using this i Can access any element from this matrix of 3*4...the catch is that all 1st row and column starts from 00 and moves onwards...
    std::cout << cars[2][2]<<" ";           //this pattren will print me the full Row2 along with all 4 column included in it...
    std::cout << cars[2][3]<<" ";
   
    std::cout<<"\n";                      //to change the row..

    std::cout << cars[0][0]<<" ";       //this is for demonstration of the initial start of this matrix included cars...(cuz it starts from 0 so i'll get an idea whenever i open this)
    std::cout << cars[0][1]<<" ";
    std::cout << cars[0][2]<<" ";
    std::cout << cars[0][3]<<" ";
 
     std::cout<<"\n\n";
    //This was a manual way to show an each element in the 2D array..Now down below let's make a block of code that will use loop(nested) to print all these elements in a sec!

    int rows = sizeof(cars)/sizeof(cars[0]);               //Here total matrix(3*4) means all the total no. of elements are divided by 'One row' that will give me the total no. of rows in the whole matrix...  Note---If i'm looking  at the first row,i can write sizeof(cars[0]), but in column i have to write both rows and colums index i.e sizeof(cars[0][1]) and if want total, i'll do like sizeof(cars)..
    int colums = sizeof(cars[0])/sizeof(cars[0][0]);       //here LHS of '/' means size of One full row(storing 4 elements each) and the RHS means One column size so this will give me the total number of column in that perticular row...
                                                           //You’re not really jumping column by column through the entire array,You go row0 → row1 → row2 and in each row, you sweep through its 4 elements.
                                                           //So,i can end this via saying that "A 2D array in C++ is a list of rows.Each row is a smaller list of columns."

    for(int i=0; i< rows; i++){                  //here i starts from 0 1 2 3 and last till the count of the value....if rows = 3, i goes: 0, 1, 2 → all rows are covered..
//      std::cout << cars[i]<<"\n";             //if i use till this, it will give the memory address fo each row array(colums values included but not shown..) To get the element from each RowArray, i will use (Nested)inner For Loop,see down below..
        for(int j=0; j < colums; j++){         // See this example - "Think of your 2D array as a building of 3 floors (rows), each floor has 4 rooms (columns)" Outer loop → choosing a floor, Inner loop → walking through each room on that floor, cars[i][j] → “Which floor, which room”...
            std::cout<< cars[i][j] <<" ";     //this thing Print that unique car on that perticular row and column... 
        }
        std::cout<<"\n";                    // Used after each row is printed along with columns so it will move on again for the next row...
    }

}                            

*/



//-----------------------------------------------------------------------



/*

#include <iostream>

int main(){

    std::string questions[] = {"1. Which insect have 8 legs? : ",                            //these are the questions in 1D and every question have 4 parts i have shown in Options 2D function..
                               "2. Name the person with highest subs on YT? : ",
                               "3. What is the color of Apple when it's still Growing? : ",
                               "4. What's that which starts with 'N' and ends with a 'r'? : "};
    
    
    std::string options[][4] = {{"A. Ant","B. Spider","C. Bettle","D. Honey Bee"},        //every bracket belongs to every question...
                                {"A. Mr Beast", "B. MythBusters", "C. David Goggins", "D. Carry Minarti"},
                                {"A. Blue","B. Red","C. Green","D. Pink"},
                                {"A. Namer","B. Near","C. Noicer","D. Nigger"}};
                                
    char answerKey[] = {'B','A','C','D'};              //this thing right here,checks with the line 2033,not with the options!.but with that line so it checks weather our entered mcq value matches our answerkey value..

    int questionSize = sizeof(questions)/sizeof(questions[0]);      //this will tell the computer the total number of questions...
    int optionsSize = sizeof(options[0])/sizeof(options[0][0]);     //this is tell the total number of options per questions..
    
    char guess;         //made to take user input afterwards..
    int score=0;        

    for(int i=0; i<questionSize; i++){               //this outer loop will print all the outer questions
        std::cout<<"*************************\n";
        std::cout<<questions[i]<<"\n";              //this is my outer loop code and this will print every question ... and in the question there are options ...so for every question my inner loop will print all the options then it will go to the other question and then repeat..
        std::cout<<"*************************\n";
        
        for(int j=0; j<optionsSize; j++){          //so this is for my inner loop that will print all the options ...
            std::cout << options[i][j] <<'\n';     //this thing right here is the concept to understand..outer and innner loop both works on this...this will print the question then it's options on that perticular position...(i had put all this in the loop,so whole code is working again and again that will print all the options with there question...)
        }
        
        std::cout<<"Enter Your Guess : ";
        std::cin>>guess;
        guess=toupper(guess);      //to upper'used to set user input to upper case if user enters any smaller input..
 
        if(guess == answerKey[i]){         //    this is how we check if our input is equal to our anser key that is on line 2012,then it will print the respected answer along with our selected option..
            std::cout <<"Correct\n";
            score++;}        
        else{
            std::cout << "Wrong !\n";
            std::cout << "Answer was: " <<answerKey[i] << '\n';}     
    }     //now the thing to fit in our mind is that, we are still under this for loop so until all the operations will not complete,the loop work will not shift to the next question..
    
    std::cout<<"\n\n"<<"Total Questions: "<<questionSize<<"\n" ;
    std::cout<<"Correct: "<<score<<'\n';
    std::cout<<"Percentage : "<< (score/double(questionSize))*100 <<"%";         
    
}

*/



//-----------------------------------------------------------------------



/*

#include <iostream>
                          //memory address = a location in memory where data is stored..every text have it's own and all datatype has it's different..
int main(){

    std::string name = "Shva";
    int Age=17;
    char Grade ='z';
    double Percentage = 81.22;
    bool Strong = true;
                                      //by using this, we can get how much memory we needed to allocate to fit a certain value..eg-boolian only took like 1 byte of memory..
    std::cout <<&Percentage <<"\n";  //these all are given in Hexadecimals,which i can convert into decimal so i can decode it..
    std::cout <<&Age << "\n";       //this '&' sign is used to access the memory address of the perticular datatype and it chages everytime..
    std::cout <<&Grade <<'\n';     //this thing lies in the special case so the result of this one will be diffrent..
    std::cout <<&Strong <<"\n";   //Everytime i run this, all the resulting memory addresses changes of all the datatypes..

}    
*/



//-----------------------------------------------------------------------



/*
 
#include <iostream>                  //Understanding the diffrence betweeen pass via value and pass via refrence..

void swap( std::string &x , std::string &y );     //this sign is used when i want to pass values via refrence, i.e manuplating values...

int main(){

    std::string x = "Raja";
    std::string y = "Rani";

    // std::string temp;              //This thing will help me to swap the value of x and y..
    //temp=x;                    //I am doing this because i had already made a function for it...istead of writing it again and again... 
    // x=y;
    // y=temp;

  
    swap(x,y);                  //It will not change the valuee...it'll give Raja and Rani...When we pass any function we generally pass by value(that means it's a copy and our orignal values didn't change or swap in this.. )
                                //On the other side we have pass by reference,in this &' this sign is used and using this it will also change the orignal value...so via using this we can switch between values...
    std::cout<<x<<"\n";         //this is only for checking and displaying if the value of x or y changed or not...Step 1.
    std::cout<<y<<"\n";

}

//Making a function to swap the values...and in case i have forgotten, i have to pass or mention any new parameter i am making inside my function...

void swap( std::string &x , std::string &y ){   //so &' this thing mean don't send a copy but send the actual variable......Without the &, your function would only play with copies of x and y, leaving the originals untouched.   
    
    //std::string x;              // i can make new or i can use those in void which are from main..
    //std::string y;             

    std::string temp;
    temp=x;
    x=y;
    y=temp;
}                              //i have to use pass via refrence that '&' one as more as possibe..

*/

/*THis is the practice practice problem of the code above..

#include <iostream>

void pass_via_values(int num1,int num2);      //will make a copy..
void pass_via_refrence(int &num1,int &num2);  //will change that value..

int main(){

    int num1=123;
    int num2=456;

pass_via_values(num1,num2);
  std::cout << "swapByval: " << num1 << " " << num2<<'\n'; 


pass_via_refrence(num1,num2);
   std::cout << "swapByRef: " << num1 << " " << num2;  

}

void pass_via_refrence(int &num1,int &num2){
  
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void pass_via_values(int num1,int num2){
 
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

*/



//-----------------------------------------------------------------------



/*

#include <iostream>                                          //const parameter = Using this our value become read only(means no one can mess up with that value down below(but can change it on it's orignal position..))
void printinfo(const std::string &name,const int &age);      //i used this pass via refrence '&' cuz this prevents any further copies to be made and makes code faster....
int main()                                                   //code become secure and used in refrences and parameters..
{
    std::string name = "Shiv";      //this is the parameter's defination or value and this lies always in the main!..const in main() → protects the variable only within main, not in other functions.
    int age= 17;                   //If const applies only inside main(),It means you cannot change name inside main but i can change it outside..


    printinfo(name,age);         //had to pass this inside the main ..this is a function..
}
//This means that inside printinfo(), The parameter name is read-only,You can’t modify it inside this function..


void printinfo(const std::string &name,const int &age){      //when i wrote const in front of my func. and in my function defination,it will never get changed in any other portion of my code and giver error if i try to.
    //name="Shiiv";                                    //i checked and i get that if i name any parameter diiffrent then it can be manuplated easily and can be changed like here when we haven't used & and const..
    //age=0;

    std::cout<<"The name is : "<<name;
    std::cout<<"\nThe age is : "<<age;
}
//when i use const only and use it with any function inside main,a copy is also made and it's also unchangable and readonly, if it's already can't be changed,then why use pass'&' AS REFRENCE ? ,the reason is ----
//when i use const only then it can be slow and unnecessary for large data which waste load time and memory....so i use both, '&' this deny to make any other copy and forces to use this orignal one which make it faster and lighter and 'const' locks the value for protection or any further changes in the future code..

*/



//------------------------------------------------------------------------



/*

//-----------------------------------------------------------------------


    //Luhn Algorithm-it checks the rightness of card numbers or api's etc and at the end it gives the anser in yes and no (0,1) to tell us that if the input is valid or not...

    //2342     4241      4121   1412          -- this for Example is a Credit card number...
    
    //2 4      4 4       4 2    1 1           -- i have to write every even placed numbers from the end and skip rest of it...
    //4 8      8 8       8 8    2 2           -- then i have to muntiply 2 with each of em and that double directly in that pile and then split them if the outcome is >9 ...
    //                               =48      -- add all this spliting individually result in one answer...
    //3 2    2 1     1 1     4 2              -- now form here i have to write every odd from the end and skip rest of it from the orignal question...
    //                               =16      -- then i just have to write the total of it after adding, no need to double them..
    //  40+16=n ,  check if [n/10=0]          -- sum the both that even and odd thing and then check weather if 'n' is completely divisible by 10, if it is then card is valid and if it is not then card is fake... 

//Now i have to convert and pack all this into a code which i named 'Card Number Validator' and the code is given below...


#include <iostream>

int reduce_To_Single_Digit(const int number);
int sumEvenDigits(const std::string& cardnumber);     //'&' goes after the end  of the type name (string)  — not before or inside std::....
int sumOddDigits(const std::string& cardnumber);

int main(){

    std::string cardNumber;         //this shi is stored as a string to preserve all digits exactly and prevent loss of leading zeros or overflow errors...later i'll convert this string thing to int using -'0' this '0' converts that character into its integer value and in this ASCII table counting starts from '0' is just the ASCII value 48, so if we minus another digit ( eg= '7' i.e 55 in the ascii table) so simply what it does is that it calculates the values via minusing them from the innitial value i.e '0'(48)...
    int result=0;                    //If you don’t give a variable a value, it keeps random garbage.Writing = 0 makes it start from zero safely.


    std::cout<<"Enter a Card Number :";
    std::cin>>cardNumber;

    result = sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);       //this shi will add that both number same as in our luhn theorm and via this we move on our final step !!
    
    if(result %10 == 0){
        std::cout<<"The Entered Card Number "<<cardNumber<<" is Valid...";}
    else{
        std::cout<<"The Entered Card Number "<<cardNumber<<" is Invalid !";}
        
}

//function definations ---

int reduce_To_Single_Digit(const int number){         //makes sure every doubled value after multiplying with '2' stays a single digit (by adding it's digits)...
  
    if(number >= 10){                                 
        return (number / 10) + (number % 10); }       //this thing will add that both digits in a double value number...
   
    else{
        return number; }                                   //if the number is <10 then it will return that value same as usual...
         
}

int sumEvenDigits(const std::string& cardnumber){      //i used const cuz , I’ll read from it, I’ll calculate with its digits — but I won’t rewrite or rename anything inside it.”it is to prevent renaming and all..

    int sum = 0;      //now to calculate the sum,first step is to access only even digits from right to left..so to do that i will start from last(the size of full card number) , then i will come backwards to the first value of the card number while removing the every odd positioned digits...

    for(int i=cardnumber.size()- 2; i>=0; i-=2){      //in here till first ';' it will give me the total size of card, 2nd ';' will tell me where to stop, 3rd ';' will tell me how much gap to give...
      
        int digit = (cardnumber[i] - '0') *2;        //this thing will give me even card number,then convert it to int , then multiply it with '2'...
        sum += reduce_To_Single_Digit(digit);        //this thing  will check weather if the outocome after *2 gives >9 and then add that 2 digit if so,also this function also include a else statement which says that if n! > 9 then don't do anything and return...
    }

    return sum;

}

int sumOddDigits(const std::string& cardnumber){

    int sum=0;
    
    for(int i=cardnumber.size(); i>=0; i-=1){         //here i calculated the i'th cheractor that are nessesry via a loop ....also here in this theorem, *2 is not to do...
        int digit = (cardnumber[i] - '0');            //this cardnumber[i] is the i'th character in my card number string..and then nessery operation held on that....
        sum += reduce_To_Single_Digit(digit);
    }

    return sum;

}

*/



//-------------------------------------------------------------------------



/*

#include <iostream>                 // pointers=variables that stores a memory address of another variable,simply it's just like a short word or a shortcut...it's easier to work with address so it is used...
                      
int main(){                         // &-address-of operator(attached with our old value), *-dereference operator(attached with our new name value)

    std::string name = "Shiva";     // &name[rhs] → gives the address of name  ,  *pNamee[lhs] → gives "Shiva"   (one symbol gives you the location, the other gives you the actual thing stored there.)
    int age = 17;
    std::string cars[3]={"Swift","Dezire","Alto"};     //this is an array,let's try on this...

    std::string *pNamee = &name;            //here '*p' is  important when we make a new variable using pointers,and after =, '&' this and is used to get and tell myself where to access that from...
    int *pUmar = &age;                      //also mentioning the datatype like string or int is also important cuz we are making a diffrent pointer or name,so we need to define it's datatype...
    std::string *pDangerCars = cars;        //here i don't need & cuz the array name is already a pointer, so it naturally gives the address of its first element... 

    std::cout << *pNamee<<"\n";             //if we haven't used this * here i had gave me the random address that of orignal variable...so this * in printing give that exact thing that we want to print...also using this 'p' is also mendatory...
    std::cout<< *pUmar<<"\n";               //so the real point of using all this is it can create any name of our orignal name so that we can use that after...
    std::cout<<age<<"\n";                   //and sure i can access all this via writing orignal thing also...
    std::cout<<pDangerCars<<"\n";           //when i print this i will get the first indexx of array cuz it is rhs of = ,so the first value got printed...
    std::cout<<*(pDangerCars +1)<<"\n";     //when i do this i can access the 2nd car...also if i use for loop up there,whole cars will be printed...
}                                           //so we just saw that this red dot is the first step i.e assign values, 2nd red dot is 2nd next step i.e define the pointer value(that value that we want to add a extra naming), and last 3rd dot that prints our value..that's all concept of pointers...

// & → gives address
// * → gets value at that address
// Array name → already acts as a pointer
// *(p + i) → moves pointer to the i-th element

*/



//-------------------------------------------------------------------------



/*

#include <iostream>                         //A pointer is just a variable — but instead of storing a value (like 10 or 123),it stores a memory address — it store refrence to that value,or a shortcut to that...basically, “where” something is stored in memory it points that...


int main(){                              //Null value = a special value that means something has no value...when a pointer is holding a null value,that pointer is not pointing at nothing(null pointing)...

    int *pointer=NULL;             //this is the keyword that reperesents that null pointer... '&' this thing is used if i had assigned any value to address,if it's none then no need to write '&'...
    int x = 123;                      //this is we are making a interger variable and it also have an address..

    pointer = &x;                   //the pointer now stores the address of x..cuz "&" this thing is called address of operator,it gives the address where variable lives in memory...

    if(pointer == nullptr){       //this 'if' is used to check weather we assigned it or not cuz sometimes working with dynamic memory(idk wth is this shi) or any complex thing,our pointer is not assigned so to conform it i use this(no need to do this for now)...
        std::cout<<"Address NOt Assigned null\n";}   
    else{
        std::cout<<"Address Assigned\n";
    }
    
    std::cout<<*pointer;     //See,in the start it was null now it contains a value,and while printing, '*' this means accessing the value stored at that address,but when in the starting of pointer era ,'*' this means the origin of the pointer variable...both place '*' this shi have diffrent meaning... 

}   //Summary --- Pointer = A variable that holds an address of another variable,
   //                       It stores and directy controls and holds real values instead of copies,                      
  //                        This is mostly used and helpful to determine if an address was successfully assigned to a pointer or not..  
                        




//-------------------------------------------------------------------------

*/

/*

#include <iostream>       //Tic Tac Toe Generator with a visual diagram...
#include <ctime>          //To Generate Random Numbers...


void diaGram(char *locations);
void playerHovouring(char *locations, char player);
void computerHouvring(char *locations, char computer);
bool checkWhoWon(char *locations, char player, char computer);
bool checkTie(char *spaces);


int main(){
    
    char locations[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};       //these are the places where we will hovour in the block Digramm and it can hold 9 charectors..
    char player = 'X';
    char computer = 'O'; 
    bool gameIsRunning =true;                                     //this is for to check if 'the game is running...

    diaGram(locations);                                         //we invoked this function and here we don't need * cuz in functions,our array needs the address of a character or a sequence of characters, if there were single then i would have used * but there is sequence i.e our array,so it's okay without *...

    while(gameIsRunning==true){                               //As long as the game is running, keep doing these things repeatedly.”
 
        playerHovouring(locations,player);                  //I call this function and inside it there is locations,player that means 'player variabale can hovour on the locations we had assigned alreadyy...                                       
      
        if( checkWhoWon(locations, player, computer) ){       //checkWhoWon() will return TRUE only if someone wins (player or computer),If it’s TRUE, that means we don’t need to play further — so stop the game and if it returns false then loop forever...
            gameIsRunning=false;                             //Setting this to FALSE means “stop the while loop” (game loop depends on this).Basically, it kills the loop’s heartbeat — no more moves after this...    
            break;}                                         //so it breaks the looop and we got victory!...
        else if(checkTie(locations)){                      //this will check the tie...
            gameIsRunning = false;
            break;}

        computerHouvring(locations,computer);                 //shows the board *right after* computer moves, so we can actually SEE the final computer move..             
        diaGram(locations);                                  //player and computer can play it's moves and also the first call shows an empty board at the start of the game,The second call inside the loop shows the updated board after every move.Without the second call, the player would make a move but not see the result until the loop restarts...
        if( checkWhoWon(locations, player, computer) ){     //same for this,if computer won first before the user,then this block of code will get us out of the program and shows the victory message of the computer...
            gameIsRunning=false;
            break;}
        else if(checkTie(locations)){
            gameIsRunning = false;
            break;}    
    }
    std::cout<<"Thankyou For Playing ! It took me days to get this shi done...";
}
    
void diaGram(char *locations){                              //These locations are the locations or slots that i made where the char will be written and hovoured...
    std::cout << "     |     |     " <<"\n";
    std::cout << "  "<<locations[0]<<"  |  "<<locations[1]<<"  |  "<<locations[2]<<"   " <<"\n";
    std::cout << "_____|_____|_____" <<"\n";
    std::cout << "     |     |     " <<"\n";
    std::cout << "  "<<locations[3]<<"  |  "<<locations[4]<<"  |  "<<locations[5]<<"   " <<"\n";
    std::cout << "_____|_____|_____" <<"\n";
    std::cout << "     |     |     " <<"\n";
    std::cout << "  "<<locations[6]<<"  |  "<<locations[7]<<"  |  "<<locations[8]<<"   " <<"\n";
    std::cout << "     |     |     " <<"\n";
    std::cout << "\n";
}   

void playerHovouring(char *locations, char player){
    int positions;
    bool validMove=true;        

while (validMove){                                                                  //Keep checking till the user gets it right — and I’ll stop only when user enters right move via break.It simply says 'jb tk valid move  ni ata tb tk chlte rho' and this while loop is used when we don't know the end point or when to stop...
            std::cout << "Enter a Position to Mark your Point (1-9) :";
            std::cin >> positions;
            positions--;                                                            //The player sees board positions as 1 to 9,but the computer (array) stores them as 0 to 8 and i need to equalize them.So, if user enters 3, 1 will get minus and becomes 2 and so on with others, this will match the indexes and our input in to settle down perfectly in our big chart...
    
            if(positions >= 0 && positions < 9 && locations[positions] == ' '){     //IF This- is to get that (1-9) input and after last && this checks if the box is empty,if it isn't then just print 'else' statement.Generally it prevents from Overwritting...
            locations[positions] = player;                                          //Then do-This means go to that exact position that user entered right now in the Locations array and put the player’s symbol there and then break to get the next output from the other function i.e of Computer...
            break;}                                                                 //This means Stop the loop right now — we found a valid move and then the story continues..
            
            else{std::cout << "Invalid move, try again!\n";}                        //If input doesn't under (1-9)...
    }                                                                               //So the steps are -- Firstly take user input 1-9 and then make sure to do match it with array indexes, Secondly make an 'if' statement to set between and also add condition that not overwriters our code,in the statement of if' put our value on the right place and right after break it if the inputs from user satisfies the condition. then add an else statement of invalid move. After all this, put this all in a while loop which will run until user enters the right satisfied input...      
} 

void computerHouvring(char *locations, char computer){
    int positions;
    
    srand(time(0));                                    //this means “Use the current second as the starting seed — so every time I run the program at a different moment, my sequence starts differently"...

    while(true){                                       //this means Keep looping forever, unless I manually tell you to stop inside the loop...
        positions = rand() % 9;                        //Pick one random number from 0-8 and store it inside positions.,this says 'Divide the big random number by 9, and just keep the leftover'i need total of 9 spots,in the human input i need to convert then from 0-8 to 1-9 but here i don't want to show any one so this gives between 0 and 8 (9 possible board spots). ALso this all is setup and constant,whenever i want to print random number,i have to learn and fit this syntax into my mind...
        if(locations[positions] == ' '){               //Go to that random index number that positions picked and check if it’s empty,it only checks that perticular block.The one which will shift it to check the next blocks is while loop without while loop our program will break here when it saws that this randomly picked block is not empty...
            locations[positions] =computer;            //then allow computer to fill it ramdomly one at a moment...
            break;                                     //this breaks the fuck out of the loop..
        }
    }                                                  //So the steps are -- make a function for computer choice and then add 'location' and 'computer' with datatype in the brackets so that it can havour,make a int position variable, and then add a seed that will generate random number everytime,now add the limit i.e rand()%9 which will make us a set of 0-8 to choose from and put this into the 'positions'.write an if statement and in it write 'in location,go to position = ' 'empty, then condition i.e to fill empty gaps with computer input and then break. At the end put all this in a while loop to keep getting choice and you'r done !
    
} 

bool checkWhoWon(char *locations, char player, char computer){                                           //i would have used switch instead of switch but it will beecome complicated so lets shift on 'if statements...

    if     ( locations[0]==locations[1]  &&  locations[1]==locations[2]  &&  (locations[0] !=' ') ){     // this checks if the first, second, and third boxes on the board have the same symbol...also i can't do like 0==1==2 cuz there's no any language that can read like that. Lastly the end thing after && is used to tell the code that if 1st row is all empty(logically it's same ' ' in all three spaces and it matched ) then this means that don't do anything when locations != empty spaces...
             locations[0] == player ?                                                                     //firstly locatons[0] now means that the whole 1st row is equal,here it checks if whole row is filled with player's input then print 'You Won' and if not then print 'You lost'...
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
            
    else if( locations[3]==locations[4]  &&  locations[4]==locations[5]  &&  (locations[3] !=' ') ){     //also here the last thing that include !=' becomes the whole row cuz it shows 'equal to all'  
             locations[3] == player ?                                                                    //this also changes because we are now checking for a diffrent row...
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
                          
    else if( locations[6]==locations[7]  &&  locations[7]==locations[8]  &&  (locations[6] !=' ') ){     //also here the last thing that include !=' becomes the whole row cuz it shows 'equal to all'  
             locations[6] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
 
//*By this all rows are checked,now moving on  colums*    
    
    else if( locations[0]==locations[3]  &&  locations[3]==locations[6]  &&  (locations[0] !=' ') ){     //also here the last thing that include !=' becomes the whole row cuz it shows 'equal to all'  
             locations[0] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
    
    else if( locations[1]==locations[4]  &&  locations[4]==locations[7]  &&  (locations[1] !=' ') ){     
             locations[1] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
             
    else if( locations[2]==locations[5]  &&  locations[5]==locations[8]  &&  (locations[2] !=' ') ){       
             locations[2] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}
             
//*By this all the columns are checked,now moving on diognals*

    else if( locations[0]==locations[4]  &&  locations[4]==locations[8]  &&  (locations[0] !=' ') ){     //also here the last thing that include !=' becomes the whole row cuz it shows 'equal to all'  
             locations[0] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost !!\n";}

    else if( locations[2]==locations[4]  &&  locations[4]==locations[6]  &&  (locations[2] !=' ') ){     
             locations[2] == player ?
             std::cout<<"You Won Budd !!\n" : std::cout<<"You Lost Kiddo !!\n";}         
    
    else{ return false; }                                                                                //menas none of the condition matched yet,i.e the straight empty line never formed so that means no one has won yet, so the game keeps going.
    
    return true;                                                                                         //it returns the outcome(our 'You Won or lost') if the whole 'if else' matches any of em. And the reason i have created this is cuz i made all the 'if else' statements but i have'nt returned anything up there,so i'm doing it here...
}

bool checkTie(char *spaces){

    for(int i=0; i<9; i++){
       
        if(spaces[i] == ' '){
        return false;}               //If there is left space then continew the game vrna if it's full and winner is still not declared ,print It's a Tie.

    }

    std::cout <<"It's a Tie !!\n ";
    return true;    
   
}

*/



//--------------------------------------------------------------------------



/*
                          //Static Memory-fixed and decided before the program runs..
#include <iostream>       //Dynamic Memory-Creates memory while the program is running and compiled not before,and uses a 'new' keyword to make a reserve memory. 'Heap - memory i can create manually 


int main(){

    int *pNum=NULL;      //if we give name and don't assign it right away it is good practice to name it 'null'...
    
    pNum =new int;       //we made a 'new' operator that will return an address of our value's position[or of it's base] and we are storing it in the pNum cuz it's a pointer and it is pointing to a memory location where we will store a value later on,but for now i just made place for it...

    *pNum = 2007;        //when you use *, you’re accessing[the starting phase] or assigning[used in ending] the value inside that memory address.

    std::cout << "address: "<<pNum<<"\n";   //It gives the memory address itself....
    std::cout << "value: "<<*pNum<<"\n";    //It gives the value stored at that address,cuz when we want to print our pointer value we have to use * while printing that value,if we don't then the table would turn and we will get the address of our variable without *.

    delete pNum;                           //whenever i use the 'new' operator i should have to use 'delete' also,it will create a memory leak if i don't.So while i use new operator,i should also use 'delete'.
}

*/

/*

#include <iostream>                                 //This dynamic memory thing is useful when we don't know how much memory we will need(that depends on the user who enters).

int main(){

    char *pGrades= NULL;
     
    int userentrysize;                              //asked for user input cuz there's no point using dynamic memory if we know initially that how much i am going to store...
    std::cout<<"Enter How manny grades : ";    
    std::cin>>userentrysize;

    pGrades= new char[userentrysize];               //“Give me a new block of memory in the heap big enough to hold userentrysize number of chars,look here -it only can save and make space for future input values,and all this is stored in the pGrades[later this will help me to get and visualize muntiple values]...        
    
    for (int i = 0; i < userentrysize; i++){        //yeh for loop UserEntryS tk krega print, and upr 'pGrades=' vo values store krengi...
       std::cout<<"Grade Number #"<< i+1<<':';      //till this it can print 'Grade number' till the entered number in input and this part is automatic(This is for LHS), for Rhs the line below will work and allow me to input values one by one...
       std::cin >> pGrades[i];                      //Take the user’s input and store it in the i-th box,So now all it does is that it only fills empty positions[that i already mentioned earlier] with my entered values...
    }                                               //till now i got the numbering along with the values stored in this. *[\n is a output formatting,so in here when i take input then new line comes automatcly]...
    
    for (int i=0; i<userentrysize; i++){            //this will print our input values in a row with gaps!...
        std::cout <<pGrades[i]<<" ";                //shows all the user inputss!...
    }

    delete[] pGrades;                               //have to add straight brackets right after the delete if i want to delete an arry...
}

*/

/*

#include <iostream>
int main() {

    int *students = NULL;    

    int totalStudents;
    std::cout<<"Enter the Number of Students : ";
    std::cin>>totalStudents;
    
    students = new int[totalStudents];                    // Dynamically create an array of integers for all students

    for(int i=0; i<totalStudents; i++){
        std::cout<<"Marks of Student #"<<i+1<<" :";
        std::cin>>students[i];                            //Takes input and store it in the i-th box of the array from starting till the entered stopage value — one “box” per student mark.
    }
    for(int i=0; i<totalStudents; i++){
        std::cout<<students[i]<<' ';}                      // students[i] represents one student's mark.
                                                           // 'i' moves from 0 to our total end value, selecting a new memory slot each time.
        delete[] students                                  // std::cin >> students[i]; stores the entered mark into that slot.
   
    }

*/



//--------------------------------------------------------------------------



/*

#include <iostream>                              //Recursion = A technique where a func. invokes or calls itself from inside or within to solve a smaller piece of the same problem. It calls until i reach a trivial case(base case or the last case)...

void LongCodeIterativeWalk(int steps);       
void ShortCodeWalkReccursion(int steps);         //Less code is used here,clean and understandable at once. But uses more memory...
int Factorial_Via_Iterative_Way(int num);
int Factorial_Via_Recursive_Way(int num);

int main(){                                      //It breaks a full complex concept into looped single steps. We generally use iterative approch (uses loops) on our problems, but than came recursive approchh which can get completed without loops and with if's an else !...
    
  //LongCodeIterativeWalk(4); 
  //ShortCodeWalkReccursion(5);
  //Factorial_Via_Iterative_Way(3);
  std::cout<<Factorial_Via_Recursive_Way(4);     //A recursive function runs MANY times,main() runs it ONE time.so if i display the func only ,i will get like 2 6...but when i print func inside ,it will just give the final result..so that's why Printing in main cuz the recursive function runs multiple times, but in main only the first call returns the final answer...

                       
}                        

void LongCodeIterativeWalk(int steps){      //this is iterative approch...
   
    for(int i = 0; i < steps; i++){

        std::cout<<"You walked step #"<<i+1<<"\n";}      
}

void ShortCodeWalkReccursion(int steps){

    if(steps>0){                                            //Outputs will be stopped after reaching this point! the statement down below Runs only while we still have steps or things to Print left. The Recursion stops before the steps or conditon = 0 and that 'before is our trivial case(base case)...
  
        ShortCodeWalkReccursion(steps-1);                 //This will print the outcomes from accending!..
        std::cout <<"You Walked step #"<<steps<<"\n";       //This will print me total steps or i can say the last step. After completing full code, my initial value of 'steps' gets changed each time,and that's why i don't need 'steps+ 1' like in iterative approchh... 
       // ShortCodeWalkReccursion(steps-1);                   //This will print the 'total number of steeps -1' and continues i.e Decending Order...
    }                                                       //So the rule of thumb is - put actions{print statements} before recursion for descending order and put after for ascending order...
}

int Factorial_Via_Iterative_Way(int num){

    int sum = 1;

    for(int i=1; i<=num; i++){
        sum = sum * i;   }

    std::cout <<"Iterative factorial is " <<sum;
    return sum;                                                 //have to return(save) value if the func. is non void for future use(like in revoking functions)...
}

int Factorial_Via_Recursive_Way(int num){
   
    if(num>1){                                                  //the statement down below will stop when i reach just before 1,but we do need 1 in the last product of factorial, so it will be returned via else' statement..
        
    int redult=num * Factorial_Via_Recursive_Way(num - 1);      //have to return the result ,can't print it :( , it's recursion rule...
        return redult;    
    }

    else{ return 1; }
}                                                               //can also write like -- if(num<=1){return 1} and then else part me our main statement,cuz both ways are equal...
 
*/



//--------------------------------------------------------------------------



/*

#include <iostream>
template <typename Thing>                            //this is must to add 'template parameter declaration'

// int biggerInt(int x,int y){                       //Function Template - it packes up  ' One function and manny data types'.
//     return (x > y) ? x : y;                       // It can compare all the datatypes within it without rewriting for each function again and again.
// }
// double biggerDouble(double x, double y){          //In these 3 functions, i have to set diffrent diffrent function for every datatype...
//     return (x > y) ? x : y;
// }
// char biggerChar(char x, char y){                  //so we need somthing that will detect all datatype within itself and saves our space.
//     return (x>y) ? x : y;                         //ternary operater   
// }

Thing biggerAll(Thing x,Thing y){                    //this only receives the arguments of same data types...
    return (x>y) ? x:y ;
}

int main(){
    // std::cout << biggerInt(2,4)<<'\n';
    // std::cout << biggerDouble(3,3.9)<<'\n';
    // std::cout << biggerChar('5','7');
    
    std::cout <<biggerAll(2,4)<<'\n';                //now there is one line of code at 2677 which works for all these,but still there's an issue...
    std::cout <<biggerAll('5','7')<<'\n';    
    std::cout <<biggerAll(4.23,4.93)<<'\n';          //It will show red invalid line if i try to compare 2 datatype at once,so now i'll show the full code of the case in which i will have to compare between 2 diffrent datatypes...
   
}

*/

/*

#include <iostream>
template <typename T,typename U>             //now i have two 'typename' to compare with; i can also add more if i want(brainrot).(if i had only one i.e <typename T,then i had the only option to compare between same 2 datatype)...

auto Bigger(T x , U y ){                     //don't get confused,these T and U are the diffrent datatype like int and double...
    return (y>x) ? y:x ;                     //And that auto right above automatacly detects and return that data type's exact value which is bigger...
}
 
int main(){                                   //note-STRING are written in ("") and SINGLE CHARECTOR are written in ('')

    std::cout <<Bigger(4.53,4)<<'\n';         //as i can see,now i can compare any datatype at once,so we only wrote the function once and then it was ready to work on any datatype...
    std::cout <<Bigger('0',44.32)<<'\n';      //in this case it will give me ascki's table value of 9 and i.e 57.The Values starts from 48(that is 0) and so on...   
}                                             //String cannot be compared with int/double/char unless YOU define the rule...

*/



//---------------------------------------------------------------------------



/*

#include <iostream>                //A struct (structure) is a way to bundle related variables together under one clean name and a structure combines variables of different types under one name...

struct student{                    //we have to write 'struct' before the function we are making and have to store all our variable inside that function...

    std::string name;              //these are values 'came in existance part...
    double gpa;
    bool enrolled=true;            //i can also set this equal to 'true' initially...
    int rollnumber;

};


int main(){

    student PehlaBchha,DusraBccha;                //here,i have to mention my functions containing values and then have to assign a new name right next to it. this will allow me to access that variables inside that fucntion easily...            

    PehlaBchha.name="Shivang";                    //these are values 'assigning part...
    PehlaBchha.gpa=9.9;
    PehlaBchha.rollnumber=9;
    PehlaBchha.enrolled;                          //no need to write this one cuz we had allready assigned it...

    DusraBccha.name="Gori";
    DusraBccha.gpa=10;
    DusraBccha.rollnumber=8;
    DusraBccha.enrolled=false;

   
    std::cout<<PehlaBchha.name<<'\n';
    std::cout<<PehlaBchha.gpa<<'\n';
    std::cout<<PehlaBchha.rollnumber<<'\n';
    std::cout<<PehlaBchha.enrolled<<'\n\n';
    
    std::cout<<DusraBccha.name<<'\n';
    std::cout<<DusraBccha.gpa<<'\n';
    std::cout<<DusraBccha.rollnumber<<'\n';
    std::cout<<DusraBccha.enrolled<<'\n';           //i set that = false,so for only Gori function,it'll show me enrollment = false...
}

*/



//---------------------------------------------------------------------------



/*

#include <iostream>                                   //enum-- creates a set of named constant values,letting you use clear names instead of random numbers for fixed options...

enum month {jan,feb,march,april,may,june};            //enum month creats a new datatype, it internally is labeled from 0 when we don't initialize it and We used this to arrange all fuzz into one catagory and it also makes are variable const yk...

int main(){                                           //It came cuz programmers got tired of remembering random numbers and if i think that, why assign variable a num; that is because comparing strings is way slower than comparing numbers...

   month monthName=jan;                               //Here month is converted into a datatype right after we used enum and here we made a variable i.e monthName, user input can't be writen on frontend cuz 'cin can't read 'enums values as string(only as int),it only knows how to read datatypes,so now write it in backend...

   switch (monthName){                                //One of the reason why i need this enum is also that i can't compare sentences{string} inside a switch or if else... 
   
   case jan: std::cout<<"It's jan";                   //i can also do 'case 0 and then case 1 and so on,but the whole point is this !! to label for more readability and understanding...
   break;                                             //When someone reads your code, they instantly know what’s going on when i haven't used any index and labeled directly with names...
   
   case feb: std::cout<<"It's feb";          
   break;

   default: std::cout<<"Rest of the months";          //Enums can’t handle things that EXPAND or  got CHANGEd later,Don’t use enums when values come from data, user input, or anything dynamic(memory)...
   break;}

}                                                     //you use 'emums when 1.You have a fixed set of const options not random 2.You want clean readable code and mistakes 3.You want values that belong together... 

*/



//---------------------------------------------------------------------------



/*

#include <iostream>                                        //classes and objects -- A class is a blueprint that defines data and functions, and an object is a real thing created from that blueprint that actually uses them.                                

class Players{                                             //This class acts as a blueprint and includes all the atributes and methods joined together called 'objects'(will use both a nd m to print deciecivly)... 
     
    public:                                                //this shi is constant and called 'Access modifire' and have to declare public or private after each class...
        int Number;                                        //These are the attributes; Features or cherectorstics of it(object)...
        std::string Name;
        double Age=17;                                     //can assign it here or down below in main also...
        double WeightClass;                          
    
    void goodSpeed(){                                      //These are the methods or functions; Things it can do...            
        std::cout << "Acchi speed hai boht" <<"\n";}
    void badspeed(){
        std::cout << "Thori is km hai speed" <<"\n";}
    
};                                                         //Add semicolan at lastt !! and i created a blueprint of my whole player structure...

int main(){

    Players player1;                                       //Have to make a unique identifier for each subclasses we make in the future...

    player1.Name = "Shivang";                              //OOPs are kinda similar to structs, but here i can use methods and perform actions, but in structs it's limitid...
    player1.Number = 2;
    player1.WeightClass= 65;

    std::cout<<player1.Number<<'\n';
    std::cout<<player1.Name<<'\n';
    std::cout<<player1.Age<<'\n';
    std::cout<<player1.WeightClass<<"kgs\n";
  
    player1.goodSpeed();                                   //here i used my method,and that is what makes class(atributes and methonds) diffrent from struct'...


    Players player2;                                       //I can also declare this player2 with coma in 2819 but here it is more readable and presentable...
 
    player2.Name = "Gori";
    player2.Number = 1;
    player2.WeightClass=40;

    std::cout<<player2.Number<<'\n';
    std::cout<<player2.Name<<'\n';
    std::cout<<player2.Age<<'\n';
    std::cout<<player2.WeightClass<<"kgs\n";

    player2.badspeed();                                    //here i used another action(method) according to the situation...
}

*/



//----------------------------------------------------------------------------



/*

#include <iostream>                                  //Constructor--It automates the assigning part,it's a special function of a class and it automatically sets initial values for testmodels inside the class function...

class Mobile {                                       //constructor have the same name as the class...
 
    public :                                         //public access modifier...
        std::string company;                         //these are our attributes...
        int launchYear;
        double price;

    Mobile(std::string c, int l, double p){          //this is the constructer here, we have to mention class and it's variable's datatypes and their naming(can write any)...
        company=c;                                   //Then,this is for refering and have to connent or to show to join them boht...
        launchYear=l;
        price=p;
    }                                                //think of our constructer as a function,we have to make 2 type of brackets (){}and in the paranthesis,we have to pass our parameters...

    void Alarm(){                                    //this is our methond,i combined by earlier learning...
        std::cout<<"Wake up you lazy fuck !\n";
    }

};

int main(){

    Mobile m1("Realme",2055,15);                     //now simply we have to pass these values and constructor will do the rest of our work...
    Mobile m2("Iphone",2024,55);                     //Combined m1,m2 with mobile gives me error this time, So it's good practice to make new objects or entries diffrently...

    std::cout<<m1.company<<'\n';
    std::cout<<m1.launchYear<<'\n';
    std::cout<<m1.price<<"k"<<'\n';
    m1.Alarm();

    std::cout<<m2.company<<'\n';
    std::cout<<m2.launchYear<<'\n';
    std::cout<<m2.price<<"k"<<'\n';
    m2.Alarm();    
    
}

*/



//-----------------------------------------------------------------------------



/*

#include <iostream>                          //Constructor overloading - WE can create multiple cunstructer with same names but the paramiters should be diffent,we can set how manny arguments we want to fit in any constructer...

class pizza{

    public : 
        std::string topping1;                        //here i mentioned 3 toppings,im gonna make our input in a way that it would work with any amount of topings,can do 1 or 2 or 3...
        std::string topping2;
        std::string topping3;

    pizza(){                                                  //this one ,when i want no topings at all to enter...

    }    
  
    pizza(std::string topping1){                                     //this constructor i made when i want 1 toping to enter...

        this->topping1=topping1;
    }    

    pizza(std::string x,std::string y){                                       //this for when i want 2 topings and in overloading we don't write datatype(that's the reson it can identify as overloading,but when using methods, we have to write type)...
        topping1=x;
        topping2=y;
    }

    pizza(std::string topping1,std::string topping2, std::string c){                     //and this for 3,and one thing: i can write one argument down below when i want to fill the values and can use freely in that one argument that how manny values i want to add,this simply means that i can initially set one value in while printign and can increse the number of values later,it will not give error...
        this->topping1 =topping1;
        this->topping2 =topping2;
        topping3=c;
    }

    void review(){                                                                                  //this shi is a 'method' ,i wrote it for my futureSelf to understand the diffrence between constructor(should be of same name) and method(can be diffrent)...
        std::cout<<"How was the pizza mateee!!!";
    }

};


int main(){

    pizza pizza0;                                            //Just print without '()' when there is no inner parameters in a constructer...
    pizza pizza1("Cheeze");                                        
    pizza pizza2("Peporoni","origano");                      //this means i can fit 2 toppings in it and i try to print toping without mentioning here then it will simply give a 'new line space' till the definned number of topping outside,if the parameter is not defined outside too ,then it will throw an error...
    pizza pizza3("mashroom","gandla","panner");              //We can't rewrite new parameter 'names' inside the earlier classes we made and mentioned just here now...

 
    std::cout<<"-------------"<<"\n";
 
    std::cout<<pizza0.topping1<<"\n";           //by printing these 2,it will give me no outcome,just 2 new line blank spaces,cuz we didn't made any space for topings to sit...
    std::cout<<pizza0.topping2<<"\n";
 
    std::cout<<"-------------"<<"\n";           //reading optimizerrr...
   
    std::cout<<pizza1.topping1<<"\n";           //this will give me the 1st toping cuz it have the capacity to print that...
    std::cout<<pizza1.topping1<<"\n";           //i can also print again!...
    std::cout<<pizza1.topping2<<"\n";           //again this will give me empty space cuz i haven't fit this parameter,but it 'do' exist so it is not giving me error...
 
    std::cout<<"-------------"<<"\n";
 
    std::cout<<pizza2.topping1<<"\n";           //pizza2 have 2 parameters so i can print till then...
    std::cout<<pizza2.topping2<<"\n";
    std::cout<<pizza2.topping3<<"\n";           //it will throw an error if i put anything outside those 3 toppings,cuz that's not defined and present in the system...
 
    std::cout<<"-------------"<<"\n";
    
    pizza3.review();
}

*/



//------------------------------------------------------------------------------



/*

#include <iostream>                                    //getters-make a private attribute readable and setters-make a private attribute writable or changable...

class Balance {

    private:
        int unchangableAmount = 50;

    public :
        int amount = 10;                                 //assigned initially...
        std::string name="Gori";
};

int main(){

    Balance first;                                       //here since i have initially assigned the values,so there is no need to write inside this 'first("bla bla")...
    
    first.amount=2000;                                   //here the person whom i shared this frontend sheet ,can easily change the values ,but i don't want that,that's where it comes the concept of doing private instead of public...
    first.name ="Arzoo";
  
    std::cout << "changed amount : "<<first.amount<<"\n"<<"changed name : "<<first.name;
    //std::cout<<unchangableAmount;                      //Still i can't print this cuz it's in private(i can't even show this directly),that's why i have to fit this into public atribute and then to return and print it(have to fit into function),i will do all that right below....

}

*/

/*

#include <iostream>

class ConstantValues{

    private :                                                      //i made some locked private values,now to show them i will make fucntion for them for each,i tried printing directly but it doesn't work...
        double pie = 3.14;
        int waterBoil = 100;
        int fivePlusFive = 10;

    public :

        void getPie(){                                             //this thing will help me to show and print values in readable form...              
            std::cout<<pie<<"\n";
        }
        void setPie(double pie){                                   //This is called setter and using this i can now change values if i want to...
            this->pie = pie;  
        }


        int getWaterBoil(){
            return waterBoil;
        }
        void setWater(int waterBoil){                              //and in it i also have to pass type and all,this is because i am changing somthing in it or the other hand when i was just reading it,i didn't need any internal datatype... 
            
            if(waterBoil<0){                                       //i can also perform additional logic and can add checks if i want to in setters and that's why it's usefull...
            this->waterBoil=0;                                     //this if will convert all values 0 that are less than 0...
            }
            else if(waterBoil>= 10){
            this->waterBoil=10; 
            }
            else{                                                  //this will print values as it is under 1 to 10...
                this->waterBoil =waterBoil;
            }                                                      //this 'if else' statement will limit my entires...

        } 


        void getfivePlusFive(){
            std::cout<<fivePlusFive;
        }
        void setsum(int x){
            x = fivePlusFive;
        }

};


int main(){

    ConstantValues forAll;
    
    forAll.setPie(4.14);                                 //if we print this after the down below statement,we will get our initial entered value...
    forAll.getPie();

    forAll.setWater(7);
    std::cout<<forAll.getWaterBoil()<<"\n";              //have to print cuz i have returned it instead of printing it...
    
    forAll.setsum(15);
    forAll.getfivePlusFive();                            //now i can see and printed value of all these variable i made in private atributess,but if i want to change it? see up where 'EACH FUNCTION IS GETTING ready to get axsed...
 
}

*/

/*
#include <iostream>

class GameCharacter{

    private : 

        std::string name ="Shivang";
        int health = 99;
        int energy = 45;
        int level  = 8;
    

    public :

        void getName(){                       //getter
            std::cout<<name<<"\n";
        }
        void setName(std::string name){       //setter
            if(name==""){
                this->name="Unknown";}
            else{
                this->name = name;}
        }


        void getHealth(){                     //getter
            std::cout<<health<<"\n";
        }
        void setHealth(int health){           //setter
            if(health<0){
                this->health=0;}
            else if(health>=100){
                this->health=100;}
            else{
                this->health=health;}
        }

        void getEnergy(){                     //getter
            std::cout<<energy<<"\n";
        }
        void setEnergy(int energy){           //setter
            if(energy<0){
                this->energy=0;}
            else if(energy>=50){
                this->energy=50;}
            else{
                this->energy=energy;}

        }
        void getLevel(){                      //getter
            std::cout<<level<<"\n";
        }
        void setLevel(int level){             //setter
            if(level<1){
                this->level=1;}
            else if(level>=10){
                this->level=10;}
            else{
                this->level=level;}
        }

};

int main(){

    GameCharacter Player;

    Player.setName("Arzoo");
    Player.getName();                   //pvt attribute readed succesfully !!!

    Player.setHealth(100);
    Player.getHealth();                 //pvt attribute readed succesfully !!!
    
    Player.setEnergy(35);
    Player.getEnergy();                 //pvt attribute readed succesfully !!!

    Player.setLevel(7);
    Player.getLevel();                  //pvt attribute readed succesfully !!!

}

*/



//------------------------------------------------------------------------------



/*

#include <iostream>                                   //Inheritance - used in classes and in this a class(children) class can recieve attributes and methods from another (parent) class, also by this, making changes in code become easy,i just have to change in parent class and rest of em will be changed automaticly...

class Car{                                            //it helps with code reuseability,i can also have added same methods to each of the classes,but this will mean repeating and in programming repeating will always be get the fuck out...

    public :

        bool firsthand =true;                        //attribute
        int gear;
  
        int startGear(int gear){                     //method
            std::cout<<"Vromm Vro0om at gear : "<<gear<<'\n';
            return gear;}

        void stop(){                                 //method
            std::cout<<"stooppppp\n";}
};

class Supra : public Car{                              //even if i don't have anything similar in this class as same as of in upper class,i still can coppy everything from the parent class i.e from Car to this child class...
  
    public :
        void exhoustSound(){
            std::cout<<"RaaTaaaTaaa !!\n";
        }
};

class Gtr : public Car{

    public :
        void enginePower(){
            std::cout<<"v12 hai khaternak";
        }

};

int main(){
    
    Supra supra;
    
    std::cout<<supra.firsthand<<"\n";                 //see unmade stuff from supra but in reality it's from Car...
    supra.startGear(4);
    supra.stop();
    supra.exhoustSound();                             //here,i printed what i really made in my child class...
    

    Gtr gtr;                                          //NEW class ! inherited from our main car class,i can also use all the attributes and methods here og that main parent class...
   
    gtr.enginePower();
    gtr.stop();
    gtr.startGear(3);
    std::cout<<gtr.firsthand<<"\n";
  //gtr.exhoustSound();                               //can't do like this,cuz it is of another child class and i haven't connected those,so it's showing invalid...

}

*/

/*

#include <iostream>

class Shape{

    public:
        double area;                          //attributes of parent class...
        double volume;

    void msg(){                               //method...
        std::cout<<"\nYou can use both constructor and method for problem solving inside of child class !! \n";
    }
};


class cube : public Shape{

    public:
        double side;                          //i made 'side as a variable attribute inside it ,now i can use this side to calculate area and volume...

    cube(double side){                        //constructor...
        this->side = side;
        this->volume = side *side *side;
        this->area =6*side *side;

    }

    int areaa(){                               //method...
        area = 6*side*side;
        return area;
    }

};    


class sphere : public Shape{
    
    public:                                    //attribute...
        double radius;
    
    sphere(double radius){                     //constructor...
        this->radius=radius;
        this->area=4*3.14*(radius*radius);
        this->volume=4/3.00 * 3.14*(radius*radius*radius);
    }    

    double volumee(){                          //method...
        volume=4/3.00 * 3.14*(radius*radius*radius);
        return volume;
    }
    
};    


int main(){

    cube cube1(3);
        std::cout<<"Cube area via constructor : "<<cube1.area<<"\n";                    //constructor short result...
        std::cout<<"Cube volume via constructor : "<<cube1.volume<<"\n";

    std::cout<<"Cube area via method : "<<cube1.areaa()<<"\n\n";                        //method calling...


    sphere sphere1(4);
        std::cout<<"Sphere area via constructor : "<<sphere1.area<<"\n"; 
        std::cout<<"Sphere volume via constructor : "<<sphere1.volume<<"\n";

    std::cout<<"Sphere volume via method : "<<sphere1.volumee();  
    sphere1.msg();                                                                      //see,i can also use methods of parent class inside my child class...
}

//The reason behind using constructor or method when -- want to make sure the object starts in a complete state and instantly it get everything it need to get completed, so i use constructor...
//so,final vandit is that use Constructer when it's required to make it at once on birth and it stays there permanently as a part and happens automatically when the object is born, 
//use Method when it may be applied manny times as per my demand anywhere and happens only when i decide to call it later...
//If a shape needs to be valid the moment it exists → constructor.
//If a value needs to be recalculated, updated, or used multiple times later → method.

*/



//**************************COMPLETED C++ tutorial*****************************//