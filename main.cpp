#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float f(float y){
    float z=(y*y)*cos(y)+1;
    return z;
}
int main() {
    float a=0,b=0;
    do{
        cout << "inserire estremi"<< endl;
        cin >> a >> b;
    }while( (f(a)*f(b))>=0);
    float x,err; //?????? inizializzo a qualcosa
    do{
        x=((a+b)/2);
        if(f(x)==0){
            break;
        }else {
            if((f(a)*f(x))<0){
                b=x;
            }else{
                a=x;
            }
            err= abs((b-a)/2);
            if(err<(1e-6)){
                break;
            }
        }}
        while(err>= 1e-6);
    //printf("%.4f",x);
    //cout << x;
  float n=round(x*100)/100;
    cout << n;
