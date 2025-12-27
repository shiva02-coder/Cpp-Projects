//Made Stone-Paper-Scissor loops and functions...
#include <iostream>
#include <ctime>                                                            
#include <cstdlib>


//func. Definations...
int getUserChoice(std::string playerName);        
int GetComputerChoice();                  
void showChoice(int choice);                                                    
void chooseWinner(int player,int oponent,std::string mode);                   


int main() {

    std::string mode;
    int player,oponent;                                                       
    char playAgain;                                                              
    char nextAction;                                                            


do{                                                                           
   
    std::cout<<"\nSelect Mode : { Desi Ghee Versus Computer(CP) }  or  { Desi Ghee Versus Real Person(PP) } : ";
    std::cin>>mode;

   do{                                                                         

    if (mode=="CP" || mode=="cp" || mode=="Cp" || mode =="cP"){                
        std::cout<<"\n----------------P v C---------------- \n";
        
        player=getUserChoice("Desi Ghee");                                      //TO GET input from user but in this we did not want to show it in the screen,just save it internally..
        std::cout<<"\nDesi Ghee's Choice : ";                                   //now this will display my choice only when i play verses with computer..
        system("cls");
        std::cout<<"Desi Ghee's Choice : ";
        showChoice(player);
        
        oponent=GetComputerChoice();                                            //It stores the whole logic behind the random number generate of oponentchoice...made this big getcomputerchoice smaller to just 'computer'..
        std::cout<<"Computer's Choice : ";
        showChoice(oponent);                                                    //this computer(getcomputerchoice) will select the number between 1-3 randomly and then this showChoice will connet that numbers to the real text meanings..
        
        std::cout<<std::endl;
        chooseWinner(player,oponent,"CP");                                      //It compares and displays the final result...
    }

    else if(mode=="PP" || mode=="pp" || mode=="Pp" || mode=="pP"){
        std::cout<<"\n----------------P v P---------------- \n";
        
        std::cout<<"         *Desi Ghee's Turn*\n ";
        player=getUserChoice("Shivang");
        system("cls");                                                          //Using this, Entered Choice will be cleared with the whole earlier written text... 

        std::cout<<"         *Oponent's Turn*\n";
        oponent=getUserChoice("Oponent");                                       //both the players had made and saved the choices, so now we can print who choose what and can compare it...
        system("cls");

        std::cout<<"\nDesi Ghee Selected : ";
        showChoice(player);
        std::cout<<"Oponent Selected : ";
        showChoice(oponent);
        std::cout<<"\n";
        
        chooseWinner(player,oponent,"PP");                                      //we defined extra result cuz we will now add condition for our program i.e for counting the number of wins or loss...
    }

    std::cout<<"\nPress 'Y' to play again : ";
    std::cout<<"\nPress 'M' to Change Mode : ";
    std::cout<<"\nPress 'E' to Exit Game : \n";
    std::cin>>nextAction; 
    }                                                                           
    while(nextAction=='Y' || nextAction=='y');                                   

    if(nextAction == 'M' || nextAction == 'm'){
        system("cls");                                                          
        continue;                                                                                                               
    }
    else if(nextAction =='E' || nextAction =='e'){
        std::cout << "\nThanks for playing !!\n\n";
        break;
    }
    else {
    std::cout<<"\nInvalid Input !\n";
    break;}
    
}                                                                   
while(true);                                                                    

}


int getUserChoice(std::string playerName){

    int playerChoice;
    
    do{
       std::cout<<"Choose : Rock-1 , Paper-2 , Scissors-3\n";
       std::cin>>playerChoice; 
    }while( playerChoice<1 || playerChoice>3 );                                 

    return playerChoice;
}

int GetComputerChoice(){

    srand(time(0));                                                            

    int num = rand() % 3 + 1;                                            
 
    switch(num){            
        case 1: return 1;                                                       
        case 2: return 2;                                                       
        case 3: return 3;      
    }
    return 0;
} 

void showChoice(int choice){
    
    switch (choice){
        case 1:std::cout<<"Rock!\n";
                break;
        case 2:std::cout<<"Paper!\n";
                break;
        case 3:std::cout<<"Scissors!\n";
                break;    
    }

}

void chooseWinner(int player,int oponent,std::string mode){
 
  switch (player){                                                               

    case 1 : if(oponent==1){                                                    
             std::cout<<"It's a Tie !\n ";}
             else if(oponent==2){
             std::cout<<"Opponent Won !\n";}   
             else{std::cout<<"Desi Ghee Won !\n";}
             break; 
            
    case 2 : if(oponent==2){
             std::cout<<"It's a Tie !\n ";}
             else if(oponent==1){
             std::cout<<"Desi Ghee Won !\n";}
             else{std::cout<<"Oponent Won, Desi Ghee lost !\n";}
             break;

    case 3 : if(oponent==3){
             std::cout<<"It's a hell Tie !\n";}
             else if(oponent==2){
             std::cout<<"You Won!\n";}
             else{std::cout<<"Desi Ghee Lost, Oponent Won !\n";}
             break;       
    
    }
 
 }
