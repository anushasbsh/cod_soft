#include<iostream>
#include<random>
using namespace std;
int main()
{

     int guessingnumber;
     int attempt=0;

     cout<<"Hi! Welcome to Number Guessing Game..."<<endl;
     cout<<"You need to guess the number between 1 and 10"<<endl;

     while(true)
     {
     int secret = rand()%10+1;
        attempt++;
        cout<<"Enter your number:";
        cin>>guessingnumber;

        if(guessingnumber>secret)
        {
            cout<<"Oops! Your number is too high! Better Luck Next time."<<endl;
        }

        else if(guessingnumber<secret)
        {
            cout<<"Oh no! Your number is too low! Try again."<<endl;
        }

        else{
            cout<<"Hooray! You guessed the secret number in "<<attempt<<" attempts"<<endl;
            break;
        }
     }

     return 0;
}