//Guess the number in Minimum tries...
#include <iostream>

int main(){

    int num;
    int guess;
    int tries=0;

    srand(time(0));                                                      
    num=(rand() % 20)+1;                                               

    std::cout<<"\n********Number Guessing Game**********\n";

    do{                                                                  
     
        std::cout<<"Enter a Guess between (1-20): ";
        std::cin>>guess;
        tries++;  

        if(guess > num){
            std::cout << "High hai abi bi!\n\n";
        }
        else if(guess < num ){
            std::cout<<"Low hai abi bi!\n\n";
        }

        else{
            if(tries>5){
                std::cout<<tries<<" Tries, Kya Jwari Bnega re tu !?";
            }
            else if(tries>2){
                std::cout<<tries<<" Tries, Thora or sattebazz bn !";
            }
            else{
                std::cout<<tries<<" Tries, Pkka Jawari !";
            }  
        }
        
    }while(guess != num);                                                

    std::cout<<"\n***************END****************\n";                

}
