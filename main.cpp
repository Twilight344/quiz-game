// // // // // // // // #include <iostream>


// // // // // // // // int main(){
// // // // // // // //     double num1;
// // // // // // // //     double num2;
// // // // // // // //     int choice;
// // // // // // // //     std::  cout << "Enter 1 - add 2 - subtract 3 - multiply 4 - divide!";
// // // // // // // //     std:: cin >> choice; 
// // // // // // // //     std:: cout << "Enter number one: ";
// // // // // // // //     std::cin >> num1;
// // // // // // // //     std::cout << "Enter number two: ";
// // // // // // // //     std::cin >> num2;
// // // // // // // //     if (choice==1){
// // // // // // // //         std::cout << num1+num2;
// // // // // // // //     }
// // // // // // // //     else if (choice==2) {
// // // // // // // //         std::cout << num1 - num2;
// // // // // // // //     }
// // // // // // // //     else if (choice==3){
// // // // // // // //         std::cout << num1*num2;
// // // // // // // //     }
// // // // // // // //     else if (choice==4) {
// // // // // // // //         std::cout<< num1/num2;
// // // // // // // //     } 
// // // // // // // //     else {
// // // // // // // //         std::cout << "ENter a valid choice!";

// // // // // // // //     }
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // #include <iostream> 

// // // // // // int main () {
// // // // // //     double temp;
// // // // // //     std::string unit;
// // // // // //     std::cout << "F or C:\n ";
// // // // // //     std::cin >> unit;
// // // // // //     if (unit=="C" || unit=="c"){
// // // // // //         std::cout << "Enter temp in farenheit: ";
// // // // // //         std::cin >> temp;
// // // // // //         temp = (temp - 32)/1.8;
// // // // // //         std::cout << "The temp is" << temp;
// // // // // //     }
// // // // // //     else if (unit=="F" || unit=="f"){
// // // // // //         std::cout << "Enter temp in celicius: ";
// // // // // //         std::cin >> temp;
// // // // // //         temp = (temp * 1.8) +32.0;
// // // // // //         std::cout << "Temprature is: " << temp; 
// // // // // //     }
// // // // // //     return 0;
// // // // // // }


// // // // // // // 

// // // // // #include <iostream>
// // // // // int main(){
// // // // //     std::string name;
// // // // //     std::cout << "Enter your name: ";
// // // // //     std::getline(std::cin,name);
// // // // //     std::cout << name.find(" ");

// // // // // }


// // // // // #include <iostream>
// // // // // void guess_el();
// // // // // int main(){
// // // // //     srand(time(NULL));
// // // // //     int num1 = (rand() % 100) +1;
// // // // //     int guess;
// // // // //     int tries;
// // // // //     do{
// // // // //         std::cout << "Enter a number from(1,100)" ;
// // // // //         std:: cin >> guess;
// // // // //         guess > num1 ? std::cout << "guess is high" << "\n" : guess < num1 ? std::cout << "guess is low" << "\n" :  guess == num1 ? std:: cout << "you win" << " ": std:: cout << " ";
// // // // //         tries+=1;
// // // // //     }while(guess!=num1);
// // // // //     std:: cout << "you took " << tries << " tries to win!";
// // // // // }

// // // // #include <iostream>
// // // // void showbal(double bal);
// // // // double deposit();
// // // // double withdraw();
// // // // int main(){
// // // //     double bal = 0;
// // // //     int choice;
// // // //     do{
// // // //         std::cout << "1 - see bal 2 - deposit 3 - withdraw 4 - exit";
// // // //         std::cin >> choice;
// // // //         switch(choice){
// // // //             case 1: 
// // // //                 showbal(bal);
// // // //                 break;
// // // //             case 2:
// // // //                 bal += deposit();
// // // //                 showbal(bal);
// // // //                 break;
// // // //             case 3:
// // // //                 bal -= withdraw();
// // // //                 showbal(bal);
// // // //                 break;
// // // //             case 4:
// // // //                 std::cout << "Bye!\n";
// // // //                 break;
// // // //             default:
// // // //                 std::cout << "Please enter a valid choice!\n";
// // // //         }
// // // //     }while(choice!=4);
// // // //     return 0;
// // // // }
// // // // void showbal(double bal){
// // // //     std::cout << bal << "\n";
// // // // }
// // // // double deposit(){
// // // //     double amt;
// // // //     std::cout << "Enter amount to add:\n ";
// // // //     std::cin >> amt;
// // // //     return amt;
// // // // }
// // // // double withdraw(){
// // // //     double wi;
// // // //     std::cout << "Enter amout to withdraw:\n";
// // // //     std::cin >> wi;
// // // //     return wi;
// // // // }

// // // #include <iostream> 
// // // std::string getUser();
// // // std::string getComp();

// // // void winner();

// // // int main(){
// // //     winner();
// // //     return 0;
// // // }

// // // std::string getUser(){
// // //     std::string choice;
// // //     std::cout << "Rock-paper-scisors\n";
// // //     do{
// // //         std::cout << "r - rock p - paper s - scisors";
// // //         std:: cin >> choice;
// // //         return choice;
// // //     }while(choice!="r" && choice!="s" && choice!="p");
// // // }
// // // std::string getComp(){
// // //     srand(time(NULL));
// // //     int Cchoice = rand() % 3;
// // //     std::string chc; 
// // //     if(Cchoice == 0){
// // //         chc = "r";
// // //     }
// // //     else if(Cchoice == 1){
// // //         chc = "p";
// // //     }
// // //     else{
// // //         chc = "s";
// // //     }
// // //     return chc;
// // // }

// // // void winner(){
// // //     int a = 0;
    
// // //     std::string player = getUser();
// // //     std::string computer = getComp();
// // //     if(player == "r" && computer == "p"){
// // //         std::cout << "Computer wins you put rock and computer put paper!";
// // //     }
// // //     else if(player == "r" && computer == "s"){
// // //         std::cout << "you win you put rock and computer put scisors!";
// // //     }
// // //     else if(player == "p" && computer == "s"){
// // //         std::cout << "Computer wins you put paper and computer put scisors!";
// // //     }
// // //     else{
// // //         std::cout << "draw!";
// // //     }
// // // }

// // #include <iostream>
// // int totalprice(int price[],int s);
// // int main(){
// //     int prices[] = {10,10,20,40};
// //     int size = sizeof(prices)/sizeof(int);
// //     int t = totalprice(prices,size);
// //     std::cout << t;  
// // }

// // int totalprice(int price[],int s ){
// //     int tot = 0 ;
// //     for(int i = 0; i < s; i++){
// //         tot+= price[i];
// //     }
// //     return tot; 
// // // }
// // #include <iostream> 
// // int total(int price[],int size);
// // int main(){
// //     int price[] = {10,20,30};
// //     int s = sizeof(price)/sizeof(int);
// //     int a = total(price,s);
// //     std:: cout << a;
// //     return 0;
// // }
// // int total(int price[], int size){
// //     int sum = 0;
// //     for(int i = 0; i < size ; i++){
// //         sum+= price[i];
// //     }
// //     return sum;
// // }

// // #include <iostream>
// // int search(int num[], int size,int no);
// // int main(){
// //     int numbers[] = {1,2,4,5,6,7,8,9,10};
// //     int size = sizeof(numbers)/sizeof(int);
// //     int index;
// //     int num;
// //     std::cout << "Enter a number: ";
// //     std::cin >> num;
// //     index = search(numbers,size,num);
// //     std:: cout << "found at index: " <<  index;
// //     return 0;
// // };
// // int search(int num[],int size,int no){
// //     for(int i = 0; i < size; i++){
// //         if(num[i]==no){
// //             return i;
// //         };
// //     };
// // };

// #include <iostream>
// void sortt(int arra[],int size);
// int main(){
//     std::string food[5];
//     int size = sizeof(food)/sizeof(food[0]);
//     std:: string temp;
//     for(int i = 0 ; i < size ; i++){
//         std::cout << "Enter: ";
//         std::getline(std::cin, temp);
//         if(temp == "q"){
//             break;
//         }
//         else{;food[i] = temp;};};for(int i = 0 ; !food[i].empty(); i++){std:: cout << food[i] << "\n";};return 0;
// }


#include <iostream>
int main(){
    std::string guess; 
    int score = 0;
    std::string questions[] = {"what is 2 + 2? ",
                               "what is 3 + 3?",
                               "what is 10-5?",
                               "what is 11*2?"};

    std::string options[][4] =  {{"A. 4", "B. 5", "C. 2","D. 1"},
                                {"A. 2", "B. 6","C. 2","D. 0"},
                                {"A. 0","B. 2","C. 5","D. 8"},
                                {"A. 22", "B. 21", "C. 11", "D. 1"}};
    std::string ans [] = {"A","B","C","A"};
    int size = sizeof(questions)/sizeof(questions[0]);
    int r = sizeof(options)/sizeof(options[0]);
    // int c = sizeof(options[0])/sizeof(options);
    for(int i = 0; i < size; i++){
        std:: cout << "***********************************\n";
        std:: cout << questions[i] << '\n';
        std:: cout << "***********************************\n";
        for(int j = 0; j < r ;j++){
            std:: cout << options[i][j] << '\n';
        }
        std:: cin >> guess;
        if(guess==ans[i]){
            std:: cout << "CORRECT\n";
            score+=1;
        }
        else{
            std:: cout << "INCORRECT\n";
        }
    }
    std:: cout << "Your final score is: " << score;
    return 0;
                               
}