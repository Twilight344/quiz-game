
#include <iostream>
int main(){
    std::string guess; 
    int score = 0;
    std::string questions[] = {"what is 2 + 2? ",
                               "what is 3 + 3?",
                               "what is 10-5?",                 \\use your own questions 
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
