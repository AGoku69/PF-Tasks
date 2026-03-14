#include<iostream>
using namespace std;
main()
{
    int number,ones,tens,hundreds;
    cout<<"enter number = ";
    cin>>number;
    
    if(number == 1){cout<<"one";}
    else if(number == 2){cout<<"two";}
    else if(number == 3){cout<<"three";}
    else if(number == 4){cout<<"four";}
    else if(number == 5){cout<<"five";}
    else if(number == 6){cout<<"six";}
    else if(number == 7){cout<<"seven";}
    else if(number == 8){cout<<"eight";}
    else if(number == 9){cout<<"nine";}
    else if(number == 10){cout<<"ten";}
    else if(number == 11){cout<<"eleven";}
    else if(number == 12){cout<<"twelve";}
    else if(number == 13){cout<<"thirteen";}
    else if(number == 14){cout<<"fourteen";}
    else if(number == 15){cout<<"fifteen";}
    else if(number == 16){cout<<"sixteen";}
    else if(number == 17){cout<<"seventeen";}
    else if(number == 18){cout<<"eighteen";}
    else if(number == 19){cout<<"nineteen";}
    else if(number == 20){cout<<"twenty";}
    else if(number == 30){cout<<"thirty";}
    else if(number == 40){cout<<"forty";}
    else if(number == 50){cout<<"fifty";}
    else if(number == 60){cout<<"sixty";}
    else if(number == 70){cout<<"seventy";}
    else if(number == 80){cout<<"eighty";}
    else if(number == 90){cout<<"ninety";}
    else if(number == 100){cout<<"one hundred";}
    else if(number == 200){cout<<"two hundred";}
    else if(number == 300){cout<<"three hundred";}
    else if(number == 400){cout<<"four hundred";}
    else if(number == 500){cout<<"five hundred";}
    else if(number == 600){cout<<"six hundred";}
    else if(number == 700){cout<<"seven hundred";}
    else if(number == 800){cout<<"eight hundred";}
    else if(number == 900){cout<<"nine hundred";}
    else if(number == 1000){cout<<"one thousand";}

    if(number >100 && number <=1000)
     {
         hundreds = number /100;
         
         if(hundreds ==1 ){ cout <<"one hundred ";}
         else if(hundreds==2 ){ cout <<"two hundred ";}
         else if(hundreds==3 ){ cout <<"three hundred ";}
         else if(hundreds==4 ){ cout <<"four hundred ";}
         else if(hundreds==5 ){ cout <<"five hundred ";}
         else if(hundreds==6 ){ cout <<"six hundred ";}
         else if(hundreds==7 ){ cout <<"seven hundred ";}
         else if(hundreds==8 ){ cout <<"eight hundred ";}
         else if(hundreds==9 ){ cout <<"nine hundred ";}
    }
    number = number / 10;
    if(number > 20 && number < 100)
    {
        tens = number / 10;
        ones = number % 10;
        if(tens == 2){cout<<"twenty ";}
        else if(tens == 3){cout<<"thirty ";}
        else if(tens == 4){cout<<"forty ";}
        else if(tens == 5){cout<<"fifty ";}
        else if(tens == 6){cout<<"sixty ";}
        else if(tens == 7){cout<<"seventy ";}
        else if(tens == 8){cout<<"eighty ";}
        else if(tens == 9){cout<<"ninenty ";}
        
        if(ones == 1){cout<<"one";}
        else if(ones == 2){cout<<"two";}
        else if(ones == 3){cout<<"three";}
        else if(ones == 4){cout<<"four";}
        else if(ones == 5){cout<<"five";}
        else if(ones == 6){cout<<"six";}
        else if(ones == 7){cout<<"seven";}
        else if(ones == 8){cout<<"eight";}
        else if(ones == 9){cout<<"nine";}
    }
    else if (number > 1000)
    {
        cout<<"number is out of range";
    }
    

}