//Week days calculator through inputing numbers using both if-else and cases...

#include <iostream>

int main(){

    int day;

    std::cout<<"Enter Day Number from (1-7) : ";
    std::cin>>day;


    if(day==1){                                                    
        std::cout<<"Roz khao Ande or Aj hai Monday!";
        return 0;
    }
    else if(day==2){
        std::cout<<"It's tuesday nigga!";
        return 0;                                                  
    }
    else if(day==3){
        std::cout<<"It's Wendsday brotha!";
        return 0;
    }
    

    switch(day){                                                   
  
        case 4:                                                    
            std::cout<<"It's thrustday pal~";
            break;
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
            std::cout<<"Enter Between number (1-7)";               
        }
        
}


