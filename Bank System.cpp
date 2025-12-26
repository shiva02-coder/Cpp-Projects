//Creating a bank system using functions...

#include <iostream>

void showbalance(double balance);
double depositmoney(double balance);
double widhrawmoney(double balance);


int main(){

    double balance=0;
    int choice=0;

do{

    std::cout<<"\n_______________________________________________________________\n\n";
    std::cout<<"                **************************\n";
    std::cout<<"                 {Welcome to BadAss Bank}\n";
    std::cout<<"                **************************\n\n";
    std::cout<<"    Click 1 - Check Balance (?$)\n";
    std::cout<<"    Click 2 - Deposit Money (+$)\n";
    std::cout<<"    Click 3 - Widraw Money (-$)\n";
    std::cout<<"    Click 4 - To exit BadAss \n";
    std::cout<<"\n________________________________________________________________\n\n";

    std::cin>>choice;


    switch(choice){

        case 1: showbalance(balance);                                              
                break;                                                              

        case 2: balance=depositmoney(balance);
                showbalance(balance);                                               
                break;

        case 3: balance=widhrawmoney(balance);
                showbalance(balance);
                break;               

        case 4: std::cout<<"\nSee yaa another time..Bie Biee:) !\n\n";
                break;
                
        default: std::cout<<"Invalid Choice!..Enter Between (1-4) kidoo\n\n";
                
    } 

}while(choice!=4);                                                                  
    
}                                                                                   
 

void showbalance(double balance){
    std::cout<<"\nYou Got Total of "<<balance<<"$ in your account...\n";
}


double depositmoney(double balance){
    double amount;                                                                  
   
do{ 
    
    std::cout<<"Enter the amount you want to Addin in your BadAss account : ";      
    std::cin>>amount;

    if(amount < 0){
        std::cout<<"\nEnter Valid number suckerr!\n";}
               
    else if(amount>20000){\
        std::cout<<"\nIt's Hell too much for a Single Deposit ! \n";}
    
    else{balance+=amount;}                                                         
        
}while(amount<0 || amount>20000);                                                  

     return balance;                                                               
}


double widhrawmoney(double balance){
    double amount;

do{

    std::cout<<"Enter the amount you wanna CashOut :";
    std::cin>>amount;   
    
    if(amount<0){
        std::cout<<"\nDon't input Shit duckhead...\n";}
        
    else if(amount>balance){        
        std::cout<<"\nYou ain't got that much in your account dreamer\n\n";
        break;}  

    else{
        {balance-=amount;}     
    }

}while(amount<0 || amount>balance);

    return balance;
} 
