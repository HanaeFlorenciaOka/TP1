#include <iostream>
#include<math.h>

using namespace std;

int main(){
 float a ,b ,c ,D=0 ,Resultado1=0 ,Resultado2=0 ,im1=0 ,im2=0 ;

 cout<<"ingrese los valores de a, b, c, de esta ecuacion ax2+bx+c=0"<< endl;
 cout<<"Ingrese el valor de a: ";
 cin>>a;
 cout<<"Ingrese el valor de b: ";
 cin>>b;
 cout<<"Ingrese el valor de c: ";
 cin>>c;

 D=(pow(b,2)-4*a*c);

  if (D>=0)
  {
 Resultado1 = (-b+sqrt(D))/(2*a);
 Resultado2 = (-b-sqrt(D))/(2*a);

 cout<<"\nLa raiz 1 es: "<< Resultado1 << endl;
 cout<<"La raiz 2 es: "<< Resultado2 << endl;

 }
 else
 {
 Resultado1 = (-b)/(2*a);
 Resultado2 = (-b)/(2*a);
 D = -1*(D);
 im1= (pow(D,0.5))/(2*a);
 im2= ((-1)*pow(D,0.5))/(2*a);

 cout<< "\nLa ecuacion tiene raices complejas : "<<endl;
 cout<<"\nLa raiz 1 es: "<<Resultado1<<" + "<<im1<<"i"<<endl;
 cout<<"La raiz 2 es: "<<Resultado2<<" + "<<im2<<"i"<<endl;
 }
 return 0;
}














