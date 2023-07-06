#include <iostream>
using namespace std ;
// ! ------------------Global Variable------------------
double balance = 1000 ;
int deposit = 0; 
int withDraw=0;
int passWord=0000 ;
int choice = 0;
// ! ----------------End Global Variable----------------

void show(){
  cout<<"--------------------\n";
  cout<<"------- Menu -------\n";
  cout<<"--------------------\n";
  cout <<"1:balance"<<endl;
  cout <<"2:withDraw"<<endl;
  cout <<"3:deposit"<<endl;
  cout <<"4:Exit"<<endl;
}
void process(){
  cout<<"Welcome ATM"<<endl;
  cout <<"Please , Enter Your Password \n" ;
  cin >>passWord ;
  do {
    check:
    if (passWord == 0000){
      show();
      cout << "Enter Your choice : " <<endl;
      cin>>choice;
      switch (choice){
        case 1:
          cout<<"Your balance is $"<< balance<<endl;
        break;
        case 2:
          cout<<"Note : Your balance is $"<<balance<<endl;
          cout << "Enter Your amount $"; 
          cin>>withDraw ;
          if(withDraw>balance){ // check your money 
            cout<<"Sorry, You can't Withdraw this much money."<< endl;
          }
          else{
            balance-=withDraw;
            cout<<"You have successfully deposited $"<<withDraw<<"."<<endl;
            cout<<"Current Balance of your account is $"<<balance<<".\n";
            }
        break;
        case 3:
          cout<<"Your Current balance is $"<<balance <<endl;
          cout<<"Please enter the Amount you want to Deposit : $";
          cin>>deposit;
          balance+=deposit;
          cout<<"Deposit successful. New Balance = $"<<balance<<"."<<endl;
        break;
        case 4:
          cout<<"Thank You"<<endl;
        break;
        default:
          cout<<"Invalid Choices!"<<endl;
          break;
        }//end of switch
    }// end of if 
        else{
          char option= 'o';
            cout<<"Password is Incorrect , Do You want To Try Again ? Enter [Y] for Yes Or [N] for No "<<endl;
            cin>>option ;
            if (option=='Y'||option=='y'){
                cout <<"Please , Enter Your Password \n" ;
                cin >>passWord ;
              goto check;
            }
            else{
              choice = 4 ;
            }
          }
  }while(choice < 4);//end of do
}//end of process
int main () {
process();
  return 0;
}
