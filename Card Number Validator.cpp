//Creating a Card Number Validator using Luhn Alforithm...

//Luhn Algorithm- It checks the rightness of card numbers or api's etc...

    //2342     4241     4121   1412           -- this for Example is a Credit card number...
    
    //2 4      4 4      4 2    1 1            -- i have to write every even placed numbers from the end(RHS) and ignore rest of it...
    //4 8      8 8      8 4    2 2            -- then i have to muntiply 2 with each of em and split them if the outcome is >9 and then add...
    //                         =44            -- add all the splited numbers together which results in one answer...
    //3 2      2 1      1 1    4 2            -- now from here i have to write every odd from the end and skip rest of it from the orignal question...
    //                         =16            -- then i just have to write the total of it after adding odd digits from end, no need to double them...
    //44+16=n , check if [n/10=0]             -- then adding both even and odd together, check weather if 'n' is completely divisible by 10, if it is then card is valid and if it is not then card is fake... 

//Now i have to convert and wrap all this into a code logic which i named 'Card Number Validator'...


#include <iostream>

int reduce_To_Single_Digit(const int number);
int sumEvenDigits(const std::string &cardnumber);                                   
int sumOddDigits(const std::string &cardnumber);

int main(){

    std::string cardNumber;                                                         
    int result=0;                                                                   


    std::cout<<"Enter a Card Number :";
    std::cin>>cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);                  
    
    if(result %10 == 0){
        std::cout<<"The Entered Card Number "<<cardNumber<<" is Valid...";}
    else{
        std::cout<<"The Entered Card Number "<<cardNumber<<" is Invalid !";}
        
}

//function definations ---

int reduce_To_Single_Digit(const int number){
  
    if(number >= 10){                                 
        return (number / 10) + (number % 10); }
   
    else{
        return number; }
         
}

int sumEvenDigits(const std::string &cardnumber){

    int sum = 0;                                                                    

    for(int i=cardnumber.size()- 2; i>=0; i-=2){                                    
      
        int digit = (cardnumber[i] - '0') *2;                                       
        sum += reduce_To_Single_Digit(digit);                                       
    }

    return sum;

}

int sumOddDigits(const std::string &cardnumber){

    int sum=0;                                                                     
    for(int i=cardnumber.size()-1; i>=0; i-=2){                                     
        int digit = (cardnumber[i] - '0');                                          
        sum += reduce_To_Single_Digit(digit);
    }

    return sum;

}