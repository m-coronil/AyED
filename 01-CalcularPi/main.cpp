#include <iomanip>
#include <iostream>

using namespace std;

double result(double i=1000000)
{
    double calc=0;
    int n=0;

    for (n; (n < i); n++){
        n=n+1;
        if((n %2) == 0){
           calc= calc +(1 / (2*n+1));     
        }
        else      
            calc = calc+ (1 /(2*n+1));
        }  
    return  4*calc;
}

int main(){
      
    cout  << setprecision(7) << result << endl;
    
    return 0;
}

