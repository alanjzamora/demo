#include<math.h>
#include<string>
#include<iostream>
using namespace std;

main(){
    double Bank = 5000;
    double expense;
    string summary;
    double budget = 1000;
    bool purchase = false;
    string print = "";

    cout << "add expense"
    cin >> expense;
    
    if(expense > budget || expense > Bank ){
      cout << "Too expensive can not process charge";
        purchase = false;
    }
    else{
        budget -= expense;
        Bank  -= expense;
        cout << ("Purchase successful");
        purchase = true;
    }
    if(purchase){
      print = " you have spent " + to_string(expense) + "your budget for the rest of the month is  " + to_string(budget) + "your bank account balance is " + to_string(Bank);
    }
    else{
       print = "purchase of " + to_string(expense) + "too expensive the rest of your monthly budget is "  + to_string(budget) + "your bank account balance is " + to_string(Bank);
    }

    cout << print;
    }

   