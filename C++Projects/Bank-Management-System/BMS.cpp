#include<iostream>
#include<stdio.h>


//Globals

using namespace std;

// Function Prototypes
void accountManagement();
void adminPanel();

// Classes
class accountManagementClass {
  // Variables
  char name[15];
  int age;
  char accountType;
  int initBalance;
  public:
    void openAccount();
    void depositMoney();
    void withdrawMoney();
    void displayDetails();
};

void accountManagementClass :: openAccount() {
  cout<<"\n\t Enter your name: ";
  //cin.ignore();
  //cin.getline(name, 15);
  cin>>name;
  cout<<"\n\t Enter your age: ";
  //cin.ignore();
  cin>>age;
  cout<<"\n\t Choose account type Savings(s)/Current(c): ";
  cin>>accountType;
  cout<<"\n\t Enter initial balance deposit amount: ";
  cin>>initBalance;
  cout<<initBalance;
  accountManagement();
}

void accountManagementClass :: depositMoney() {
  int depositAmt;
  cout<<"\n\t Enter deposit amount: ";
  cin>>depositAmt;
  cout<<depositAmt;
  initBalance += depositAmt;
  cout<<"\n\t Current Account Balance: ";
  cout<<initBalance;
  accountManagement();
}
void accountManagementClass :: withdrawMoney() {
  int withdrawAmt;
  cout<<"\n\t Enter the amount to withdraw: ";
  cin>>withdrawAmt;
  initBalance -= withdrawAmt;
  cout<<"\n\tCurrent Account Balance: "<<initBalance;
  accountManagement();
}
void accountManagementClass :: displayDetails() {
  system("clear");
  cout<<"\n\t\t Account Details";
  cout<<"\n\t Name : "<<name;
  cout<<"\n\t Age : "<<age;
  cout<<"\n\t Account Type :"<<accountType;
  cout<<"\n\t Current Balance : "<<initBalance;
  accountManagement();
}

// Main Funtion
int main() {
  system("clear");
  char mainOption;
  cout<<"\n\t\t Bank Management System \n";
  cout<<"\n\t 1. Account Management(a) \n";
  cout<<"\n\t 2. Admin Panel(p) \n";
  cout<<"\n\t 3. Exit(q) \n";
  cin>>mainOption;
  switch (mainOption) {
  case 'a' :  accountManagement();
              break;
  case 'p' :  adminPanel();
              break;
  case 'q' :  cout<<"\n\t Exiting Application";
              exit(1);
              break;
  default:  cout<<"\n\t Invalid option, please try again";
            main();
  }
  return 0;
}


// Account Management Function
void accountManagement() {
  accountManagementClass user;
  char manageOpt;
  system("clear");
  cout<<"\n\t\t Account Management \n";
  cout<<"\n\t 1. Open Account(o)";
  cout<<"\n\t 2. Deposit Money(d)";
  cout<<"\n\t 3. Withdraw Money(w)";
  cout<<"\n\t 3. Display Account Details(v)";
  cin>>manageOpt;
  switch (manageOpt) {
    case 'o': user.openAccount();
              break;
    case 'd': user.depositMoney();
              break;
    case 'w': user.withdrawMoney();
              break;
    case 'v': cout<<"\n\t Display";
              user.displayDetails();
              break;
    default:  cout<<"\n\t Invalid Option, please try again";
              accountManagement();
  }
}

// Admin Panel Function
void adminPanel() {
  system("clear");
  cout<<"\n\t Admin Panel \n";
}
