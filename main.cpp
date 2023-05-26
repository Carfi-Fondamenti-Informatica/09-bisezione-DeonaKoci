#include <iostream>
#include <cmath>
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
        while(err>= 0.00001);
    //printf("%.3f",x);
    //cout << x;
   //float risultato;
   //int n=(x*1000);
   //risultato=(n/1000);
    //cout << risultato;

    x=(x*10000);
    float r= int(x);
    float risultato=(r/10000);
    cout << risultato<< endl;
    //cout<< float (r/1000);

   

   //cout <<x;
    return 0;
}
