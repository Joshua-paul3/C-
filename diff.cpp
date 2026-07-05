    // Q1. Given an integer number 'num', return the difference between the product of its digits and the sum of its digits...

#include<iostream>
#include<cmath>
using namespace std;

    int diffBwProdSum(int n)
    {
        int sum = 0;
        int prod = 1;

        while (n != 0)
        {
            int digit = n % 10;
            sum = sum + digit;
            prod = prod * digit;
            n = n / 10;
        }
        int diff = prod - sum;
        return diff;
    }


int main()
{
    // Sam
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int prod = 1;
    int sum = 0;

    while(num!=0){
        int digit = num % 10; // return the last digit of the 'num'
        sum = sum + digit;
        prod = prod * digit;
        num = num / 10;
    }

   int diff = prod - sum;
   cout << "Diff: " << diff << endl;

    /* Joshua
    int num1,num2;
    cout<<"enter the first number";
    cin>>num1;
    cout<<"enter the second number";
    cin>>num2;

    int sum = num1+num2;
    int product=num1*num2;

    int diff = product - sum ;
        if(diff<0)
        diff=-diff;
        else
        diff=diff;
        cout<<diff;
        return 0;
        */
}

