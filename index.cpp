#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

// số nguyên tố
bool check_snt(int num){
    if(num <= 1) 
        return false;

    for (int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) 
            return false;
    }
    return true;
    
}

// số chính phương
bool check_scp(int n){
    int sqrt_n = sqrt(n);

    if( sqrt_n*sqrt_n == n){
        return true;
    } else {
        return false;
    }
}

// đảo ngược số
int soDaoNguoc(int n){
    int temp = 0;
    while(n > 0){
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp;
}

// số đối xứng
bool check_sodx(int n){
    if(n == soDaoNguoc(n)) {
        return true;
    } else {
        return false;
    }
}

// tổng các số trong một số
int sumNum(int n){
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
    
}

// số hoàn chỉnh
int check_soHoanChinh(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;    
        }
    }
    
    if(n == sum){
        return true;
    } else {
        return false;
    }
}

void ptBac2(double a, double b, double c){
    double x1, x2;
    double delta = pow(b,2) - 4*a*c;

    if (delta == 0){
        x1 = -b / 2.0*a;
        cout << "nghiem kep x = " << x1;
    } else if (delta > 0){
        x1 = (-b + sqrt(delta)) / 2.0*a;
        x2 = (-b - sqrt(delta)) / 2.0*a;
        cout << "x1 =" << x1;
        cout << endl;
        cout << "x2 =" << x2;
        
    } else {
        cout << "Pt vo nghiem";
    }
    
}



// ước chung lớn nhất
int gcd(int a, int b){
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

struct Phanso {
    int tu, mau;
};



void nhapPS(Phanso &ps){
    ps.tu = rand() % 10 +1;
    ps.mau = rand() % 10 +1;
}
void printPS(Phanso &ps){
    cout << ps.tu << "/" << ps.mau << endl;
}

int uc(int a, int b){
    if(b == 0) {
        return a;
    }
    return gcd(b , a % b);
}

void rutgonPS(Phanso &ps){
    int uoc = uc(ps.tu, ps.mau);
    ps.tu /= uoc;
    ps.mau /= uoc;
}

Phanso operator+(const Phanso &ps1, const Phanso &ps2){
    int tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    int mau = ps1.mau * ps2.mau;
    return {tu, mau}; 
}

int main() {
    Phanso P[10], sum = {0,1};
    
    for (int i = 0; i < 5; i++){
        nhapPS(P[i]);
        printPS(P[i]);
        

    }
    cout << endl;
    for (int i = 0; i < 5; i++){
       rutgonPS(P[i]);
        printPS(P[i]);
    
    }
    for (int i = 0; i < 5; i++){
       sum = sum + P[i];
       printPS(P[i]);
    
    }
    cout << sum.tu << "/" << sum.mau;
   
}