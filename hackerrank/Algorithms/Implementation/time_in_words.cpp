#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void translate(int x);

void translate(int x ){
   int first_digit = x/10;
   int second_digit = x%10;

   if(x >= 11 && x <= 20){
        switch(x){
            case 11:
                std::cout<<"eleven";
                break;

            case 12:
                std::cout<<"twelve";
                break;
            case 13:
                std::cout<<"thirteen";
                break;
            case 14:
                std::cout<<"fourteen";
                break;
            case 15:
                std::cout<<"fifteen";
                break;
            case 16:
                std::cout<<"sixteen";
                break;
            case 17:
                std::cout<<"seventeen";
                break;
            case 18:
                std::cout<<"eighteen";
                break;
            case 19:
                std::cout<<"nineteen";
                break;

        }
    }
    else
    {
        switch(first_digit){
            case 1:
                if(second_digit == 0)
                    std::cout<<"ten";
                break;
            case 2:
                std::cout<<"twenty";
                break;
            case 3:
                std::cout<< "thirty";
                break;
            case 4:
                std::cout<<"fourty";
                break;
            case 5:
                std::cout<<"fifty";
                break;
            case 6:
                std::cout<<"sixty";
                break;
            default :
                break;
        }

        if(first_digit > 1 && x != 100) std::cout<<" ";
        switch(second_digit)
        {
            case 1:
                std::cout<<"one";
                break;
            case 2:
                std::cout<<"two";
                break;
            case 3:
                std::cout<<"three";
                break;
            case 4:
                std::cout<<"four";
                break;
            case 5:
                std::cout<<"five";
                break;
            case 6:
                std::cout<<"six";
                break;
            case 7:
                std::cout<<"seven";
                break;
            case 8:
                std::cout<<"eight";
                break;
            case 9:
                std::cout<<"nine";
                break;
            default:
                break;

        }

    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h=0,m=0;
    string hours[14];
    hours[1] = "one";
    hours[2] = "two";
    hours[3] = "three";
    hours[4] = "four";
    hours[5] = "five";
    hours[6] = "six";
    hours[7] = "seven";
    hours[8] = "eight";
    hours[9] = "nine";
    hours[10] = "ten";
    hours[11] = "eleven";
    hours[12] = "twelve";
    hours[13] = "one";
    cin>>h>>m;


    if(m==0){cout<<hours[h]<<" o' clock ";}
    if(m==15){cout<<"quarter past "<<hours[h]; }
    if(m>0 && m<30 &&m!= 15){
        translate(m);
        if(m==1){cout<<" minute past "<<hours[h];}
        cout<<" minutes past "<<hours[h];
    }

    if(m==30){cout<<"half past "<<hours[h];}
    if(m==45){cout<<"quarter to "<<hours[h+1];}
    if(m>30 && m<60 && m!= 45){
        translate(60-m);
        cout<<" minutes to "<<hours[h+1];
    }
    cin>>h>>m;

    return 0;
}
