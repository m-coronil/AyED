#include <iomanip>
#include <iostream>

using namespace std;

double calc_pi (double i)
{
    float calc=0;
    int n=0;

    for (n; (n < i); n++){
        if((n %2) == 0){
           calc= calc +(1.0 / (2*n+1));     
        }
        else      
            calc = calc -(1.0 /(2*n+1));
        }  
    return  4*calc;
}

int main(){
    float num;
    double i=1000000
    num= calc_pi(i)
    cout  << "El número es: " << setprecision(7) << num << endl;
    
    return 0;
}

