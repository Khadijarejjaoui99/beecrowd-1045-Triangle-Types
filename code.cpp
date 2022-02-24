// beecrowd 1045 Triangle Types
#include <iostream>
using namespace std;

int main() {
    double A,B,C,t;
    cin >> A >> B >> C;
    if(A<B){
        t = A;
        A = B;
        B = t;
    }
    if(B<C){
        t = B;
        B = C;
        C = t;
    }
    if(A<B){
        t = A;
        A = B;
        B = t;
    }
    if(A>=(B+C))
        cout<<"NAO FORMA TRIANGULO\n";
    else if((A*A) == (B*B+C*C))
        cout<<"TRIANGULO RETANGULO\n";
    else if((A*A) > (B*B+C*C))
        cout<<"TRIANGULO OBTUSANGULO\n";
    else if((A*A) < (B*B+C*C))
        cout<<"TRIANGULO ACUTANGULO\n";
    if(A== B && B==C)
        cout<<"TRIANGULO EQUILATERO\n";
    else if(A==B || B==C )
        cout<<"TRIANGULO ISOSCELES\n";

    system("pause");
    return 0;
}