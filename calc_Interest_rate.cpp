#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(){
/*
double initial_balance{}, balance{}, rate{}, contributions{}, goal{};
double years{0};

std::cout << "Enter initial investment:  ";
std::cin >> initial_balance;

std::cout << "Enter yearly contributions:  ";
std::cin >> contributions;


std::cout << "Enter interest rate:  ";
std::cin >> rate;


std::cout << "What is your goal?  "; 
std::cin >> goal;

balance = initial_balance;

while (balance < goal)
{
 years++;
 double interest = balance * (rate / 100);
 balance = balance + interest + contributions;

}
std::cout << "It takes " << std::setprecision(20)  << years << " years to reach your goal of " << std::setprecision(20) << goal << " dollars." << std::endl;



*/





// Same program with for loop

double initial_balance1{}, balance1{}, rate1{}, contributions1{}, goal1{};
double years1{0};

std::cout << "Enter initial investment:  ";
std::cin >> initial_balance1;

std::cout << "Enter yearly contributions:  ";
std::cin >> contributions1;


std::cout << "Enter interest rate:  ";
std::cin >> rate1;


std::cout << "How many years investment will last?  "; 
std::cin >> years1;

rate1 = rate1 / 100;
balance1 = initial_balance1;

for(int i{1}; i <= years1; ++i){
   double intrest1 = balance1 * rate1;
   balance1 = balance1 + intrest1 + contributions1;
   std::cout << i << " " << balance1 << std::endl;
}


 return 0;  
 }
