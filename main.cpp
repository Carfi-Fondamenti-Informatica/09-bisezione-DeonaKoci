#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    float z=(y*y)*cos(y)+1;
    return z;
}

//int cifre(float arr[], int dim){
  //  int c=0;
    //for(int i=0;i<dim;i++){
      //  c+=arr[i];
 //   }return c;
//}

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
    printf("%.3f",x);
    //cout << x;

    //int n=x*10000;
    //float p=n/10;
    //cout << p;


   //cout <<x;
    return 0;
}
