#include<iostream>
#include<random>
using namespace std;
class Addition{
    public:
    Addition(int num1,int num2)
    {
        cout<<(num1+num2)<<endl;
    }
};
class Subtraction{
    public:
    Subtraction(int num1,int num2)
    {
        cout<<(num1-num2)<<endl;
    }
};
class Multplication{
    public:
    Multplication(int num1,int num2)
    {
        cout<<(num1*num2)<<endl;
    }
};
class Modulus{
    public:
    Modulus(int num1,int num2)
    {
        cout<<(num1%num2)<<endl;
    }
};
class Division{
    public:
    Division(int num1,int num2)
    {
        cout<<(num1/num2)<<endl;
    }
};
void random(){
    string message[] = 
    {
        "Math is fun!!",
        "You're are doing well!",
        "Doing well!",
        "You're cool!",
        "Good!" 
    };

    int n = sizeof(message)/sizeof(message[0]);
    int index = rand() % n;
    cout<<message[index];
}

int main()
{
    int num1,num2;
    cout<<"Hey! Which operation do you want to perfom '+','-','*','/','%'";
    char c ;
     cin>>c;
    cout<<"Enter any two numbers";
    cin>>num1>>num2;
    if(c=='+')
    {
        Addition add(num1,num2);
    }
    else if(c=='-')
    {
       Subtraction sub(num1,num2);
    }
    else if(c=='*')
    {
        Multplication mul(num1,num2);
    }
    else if(c=='/')
    {
        Division div(num1,num2);
    }
    else if(c=='%')
    {
        Modulus mod(num1,num2);
    }

    else
    {
       cout<<"Enter valid operation"<<endl;
    }
    random();
}