#include <iomanip>
#include <iostream>
#include <valarray>
using namespace std;
int main() {

//1.1 problem
// for (int i=1; i<=10; i++){
// cout<<i<<" ";
// }

//1.2 problem
// int n;
//     cout<<"enter a number: "; cin>>n;
// for(int i=1; i<=n; i++)
// cout<<i<<" ";

    //1.3 problem
    // int sum;
    // for (int i=1; i<=10; i++)
    // {sum+=i;
    // }
    // cout << sum;

    //1.4 problem
    // int n, sum;
    // cout<<"enter a number: "; cin>>n;
    // for (int i=1; i<=n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<sum;

    //1.5 problem
    // float sum;
    // for (int i=1; i<=10; i++) {
    //     sum+=i;
    // }
    // cout<<sum/10;

    //1.6 problem
    // float sum; int n;
    // cout<<"enter a number: "; cin>>n;
    // for (int i=1; i<=n; i++) {
    //     sum+=i;
    // }
    // cout<<sum/n;

    //2.1 problem
    // for (int i=1; i<=10; i+=2) {
    //     cout<<i<<" ";
    // }

    //2.2 problem
    // int a;
    // for (int i=2; i<=10; i+=2) {
    //    cout<<i<<" ";
    // }

    //2.3 problem
    // int n;
    // cout<<"enter a number: "; cin>>n;
    // for (int i=1; i<=n; i+=2) {
    //     cout<<i<<" ";
    // }

    //2.4 problem
    // int n;
    // cout<<"enter a number: "; cin>>n;
    // for (int i=2; i<=n; i+=2) {
    //     cout<<i<<" ";
    // }

    //2.5 problem
    // for (int i=1; i<=100; i++) {
    //    if (i%10==0)
    //        cout << i<<" ";
    // }

    //2.6 problem
    // int n;
    // cout<<"enter a number: "; cin>>n;
    // for (int i=1; i<=n; i++) {
    //     if (i%10==0)
    //         cout<<i<<" ";
    // }

    //3 problem
    // int a;
    // for (char c='A'; c<='Z'; c++) {
    //     cout<<c<<" ";
    //     a++;
    //     if (a%5==0) {
    //         cout<<endl;
    //     }
    // }

    //4 problem
//     int a;
// cout<<"enter a number: "; cin>>a;
//     if (a<0) {
//         cout<<"factorial of negative number is not defined";
//     }else {
//         long long factorial=1;
//         for(int i=1;i<=a;i++) {
//            factorial*=i;
//         }
//         cout<<"the factorial of "<< a <<" is "<<factorial;
//     }

    //5 problem
        // int classes, credit, tc=0;
        // double mark, total=0;
        // cout<<"enter a number of classes: "; cin>> classes;
        // for (int i = 0; i < classes; i++) {
        //     cout<<"enter credits and marks: "; cin >> credit >> mark;
        //     total += mark*credit;
        //     tc+=credit;
        // }
        // double GPA = (total)/tc;
        // cout << GPA << endl;

    //6 problem
        // int classes, credit, tc=0;
        // int students;
        // double mark, total=0,gpat=0;
        // cout<<"Enter number of students: ";
        // cin>>students;
        // cout<<"Enter total classes: ";
        // cin>>classes;
        //
        // for (int i=0; i<students; i++) {
        //     for (int j = 0; j < classes; j++) {
        //         cout<<"Enter the number of credits and marks "<<j+1<<": ";
        //         cin >> credit >> mark;
        //         total += mark*credit;
        //         tc+=credit;
        //     }
        //     double GPA = (total)/tc;
        //     gpat += GPA;
        // }
        // cout << gpat/students << endl;    }

    //7 problem
        // int lines;
        // cin >> lines;
        // for (int i = 0; i < lines; i++) {
        //     for (int j = 0; j < lines; j++) {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }

    //8 problem
        // int lines;
        // cin >> lines;
        // for (int i = 0; i < lines; i++) {
        //     for (int j = 0; j <= i; j++) {
        //         cout << "* ";
        //     }
        //     cout << endl;
        // }

    //9 problem


    // int num, i;
    // bool prime = true;
    // cout << "Enter a number: "; cin >> num;
    // if (num <= 1) prime = false;
    // else {
    //     for (i = 2; i * i <= num; i++) {
    //         if (num % i == 0) {
    //             prime = false;
    //             break;
    //         }
    //     }
    // }
    // cout << num << (prime ? " is a prime number." : " is not a prime number.") << endl;

    //10 problem
    // int n, sum=0;
    // cout << "Enter a number: "; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     cout << i << "*" << i << "=" << i * i << endl;
    //     sum += i * i;
    // }

    //11 problem
        // int n, negative=0, positive=0;
        // float sum=0;
        // while (true) {
        //     cin>>n;
        //     sum+=n;
        //     if(n==0) {
        //         break;
        //     }
        //     if (n<0) {
        //         negative++;
        //     }
        //     else {
        //         positive++;
        //     }
        // }
        // cout<<"Postive "<<positive<<endl;
        // cout<<"Negative "<<negative<<endl;
        // cout<<"Sum "<<sum<<endl;
        // cout<<"Average "<<sum/(positive+negative)<<endl;

    //12 problem
        // int n;
        // cin >> n;
        // int reversen = 0;
        // for (int i = 0; i < 100000000; i++) {
        //     int a=n%10;
        //     n=n/10;
        //     reversen = reversen*10+a;
        //     if(n==0) {
        //         break;
        //     }
        // }
        // cout << reversen;

    //13 problem
        // int lines;
        // cout<<"enter a number:"; cin >> lines;
        // for (int i = 0; i < lines; i++) {
        //     for (int j = 0; j <= i; j++) {
        //         cout << i+1;
        //     }
        //     cout << endl;
        // }

    //14 problem
        // int binary, decimal = 0, power = 1;
        // cout << "Enter a binary number: ";
        // cin >> binary;
        // while (binary > 0) {
        //     int lastDigit = binary % 10;  // Extract last digit
        //     decimal += lastDigit * power; // Convert to decimal
        //     binary /= 10;  // Remove last digit
        //     power *= 2;  // Move to the next power of 2
        // }
        // cout << "The decimal number is " << decimal << endl;
return 0;
}







