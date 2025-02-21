#include <iostream>
#include <valarray>
using namespace std;
int main () {
    //problem 1
    // int sum=0;
    // for (int i=0; i<=100; i++) {
    //     sum+=i;
    //
    // }
    // cout<<sum;

    // int n, sum = 0;
    // cout<<"enter a positive integer:  "; cin>>n;
    // while (n>0) {
    //     sum+=n;
    //     n--; //decrementing it (decreasing)
    // }
    // cout<<sum;

    //problem 2
    //   int count=0, num=2;
    // for(; count<10; num++){
    // bool prime=true;
    // for(int i=2; sqrt(num)>=i; i++){
    // if(num%i==0){
    // prime=false;
    // break;}
    // }
    // if(prime){
    // cout<<num<<" ";
    // count++; }
    // }

    // int count=0, input, num=2;
    // cout<<"enter a number:"; cin>>input;
    // while(count<input){
    // bool prime=true;
    // int i=2;
    // while(sqrt(num)>i){
    // if(num%i==0){
    // prime=false;
    // break;
    // }
    // i++;}
    // if(prime){
    // cout<<num<<" ";
    // count++;
    // }
    // num++;
    // }


    //problem 3
    //collatz conjecture (If it's even, divide it by two, and if it's odd, triple it and add one)
    // int n=0;
    // cout<<"enter a number: "; cin>>n;
    // while(n!=1) {
    // cout<<n<<" ";
    // if(n%2==0){
    // n/=2;
    // }else{
    // n=3*n+1;
    // }
    // cout<<n<<" ";
    // }

    //problem 4
    //counting digits
    //     int n, digit=0;
    //     cout<<"enter a number: "; cin>>n;
    //     while (n>0) {
    //         n/=10;
    //         digit++;
    //     }
    // cout<<digit;

    //problem 5
    // int n, a;
    // cout<<"enter a number: "; cin>>n;
    // while (n>0) {
    //     a=n%10;
    //     n/=10;
    //     cout<<a<<" ";
    // }

    //problem 6

    //If a<b, exchange a and b.Divide a by b and get the remainder, r.
    //If r = 0, report b as the GCD of a and b.
    //Replace a by b and replace b by r.
    //Return to the previous step.

    // int gcd(int a, int b);
    //     int num1, num2;
    //     cout << "Enter two positive integers: ";
    //     cin >> num1 >> num2;
    //     cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    //     return 0;
    // }
    //
    // int gcd(int a, int b) {
    //     while (b != 0) {
    //         int temp = b;
    //         b = a % b;
    //         a = temp;
    //     }


    //problem 7
    // int n, sum = 0, digit=0;
    // while (sum<100) {
    //     cout<<"enter numbers: ";
    //     cin>>n;
    //     sum+=n;
    //     digit++;
    //
    //     if (sum>=100) {
    //         cout<<"sum exceeded 100!\n";
    //         cout<<"total sum: "<<sum;
    //         cout<<" total numbers entered: "<<digit;
    //     }
    // }

    //problem 8
    // int n, balance;
    // balance = 500;
    // while (balance>0) {
    //     cout<<"enter withdrawal amount (or 0 to cancel): "; cin>>n;
    //     if (n==0) {
    //         break;
    //     }
    //     if (balance<n) {
    //         cout<<"insufficient funds!\n";
    //     }else {
    //         balance -= n;
    //         cout<<"remaining balance: "<<balance<<endl;
    //     }
    //
    // }


    //problem 9
    // char input;
    //    do {
    //     cout<<"Enter a character: ";
    //     cin>>input;
    //     if (input != 'Y' && input != 'N') {
    //         cout<<"Invalid\n";
    //     }
    // } while (input != 'Y' && input != 'N');
    //
    //         cout<<"Accepted!";
    //
    //     return 0;
    // }

    //problem 10
    // int c;
    // do {
    //     cout<<"\nenter a character:\n 1: withdraw\n 2: deposit\n 3:balance\n 4:exit\n";
    //     cin>>c;
    //     switch(c) {
    //         case '1':
    //             cout<<"Processing...";
    //         break;
    //         case '2':
    //             cout<<"Depositing...";
    //         break;
    //         case '3':
    //             cout<<"Balance...";
    //         break;
    //         case '4':
    //             cout<<"Goodbye!";
    //         break;
    //         default:
    //             cout<<"invalid";
    //         break;
    //     }
    // }while (c!=4);

    //problem 11
    // int a; float b, c;
    // do {
    //     cout<<"enter numbers: "; cin>>b>>c;
    //     cout<<"\nchoose\n 1: +\n 2: -\n 3: *\n 4: / \n 5: exit "; cin>>a;
    //     switch (a) {
    //         case 1:
    //             cout<<b<<" + "<<c<<" = "<<b+c<<endl;
    //         break;
    //         case 2:
    //             cout<<b<<"-"<<c<<"="<<b-c<<endl;
    //         break;
    //         case 3:
    //             cout<<b<<"*"<<c<<"="<<b*c<<endl;
    //         break;
    //         case 4:
    //             cout<<b<<"/"<<c<<"="<<b/c<<endl;
    //         break;
    //         case 5:
    //             exit(0);
    //         break;
    //         default:
    //             cout<<"invalid";
    //     }
    // }while (a!=5);

    //problem 12
    // int password=0304, attempt=0;
    // do {
    //     cout<<"\nenter a password: "; cin>>password;
    //     attempt++;
    //     if (password==0304) {
    //         cout<<"access granted";
    //     }else {
    //         cout<<"incorrect";
    //     }if (attempt==3){
    //         cout<<"\nattempts finished";
    //         break;
    //     }
    // } while (attempt<=3);

    //problem 13
    int passw=3, n;
    do {
        cout<<"\nenter numbers between 1 to 10: "; cin>>n;
        if (n>passw) {
            cout<<"too high";
        }if (n<passw) {
                cout<<"too low";
            }
        if (n==passw) {
            cout<<"Correct!";
        }
    }while (n!=passw);





return 0;
}





