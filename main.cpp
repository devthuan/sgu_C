#include <iostream>
#include <math.h>
using namespace std;

bool checkSNT(int n) {
    bool check = true;
    if(n < 2) {
        check = false;
    }
    for( int i = 2; i < n; i++){
        if( n % i == 0){
            check = false;
        }
    }
    return check;
}

int giaithua(int n) {
    int giaithua = 1;
    for(int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}
// Bài 9:
float sum(int n, float x) {
    double result;
    for(int i = 1; i <= n; i++) {

        result += ( double(pow(-1,i)) * ( pow(x,i) / giaithua(i) ) );

    }
    return result;
}

int countNum(long long n) {
    int count = 0;
    int temp = n;
    int sum = 0;
    int le, chan;
    while(temp != 0) {
         count++;
        temp = temp / 10;
        count % 2 == 0 ? chan++ : le++;
        sum += count;
    }
    cout << chan << endl;
    cout << le << endl;

    // return count;
    return sum;
}

// ------ bài 17 ----------

int  soDoiXung(int n){
    int temp = n;
    int sodaonguoc = 0;
    bool result;
    while(n != 0){
        sodaonguoc = sodaonguoc*10 + n % 10;
    }
    sodaonguoc == temp ? result = 1 : result = 0;
    
    return result;
}


bool scp(int n){
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}

int chuSoMax(int n){
    int max = 0, min = n%10, temp;
    do {
       temp = n % 10;
       if(temp < min) {
            min = temp;
       } 
    } while( n /= 10);

    for(int i = 0; i < n/10; i++){
        
    }

    return min;
}

int fibonacci(int n){

    if(n == 0 || n == 1){
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);

    }
    
}

int USCLN(int a, int b){
   while( a != b){
        if(a > b){
            a -= b;
        } else {
            b -= a;
        }
   }
   return a;
}
int BSCNN(int a, int b){
    return ((a * b) / USCLN(a, b));
}



int main() {
    // float a = 2 % 10;
    // cout << sqrt(8) << endl;
    // soDoiXung(5) == true ? cout << "true" : cout << "false";
    // scp(8) == true ? cout << "so chinh phuong" : cout << "khong phai la so chinh phuong";
    // checksnt(4) == true ? cout << "so nguyen to" : cout << "khong phai la so nguyen to";
    // cout << chuSoMax(2287);
    // for (int i = 0;  i < 1000; i++ ) {
    //     cout << fibonacci(i) << endl;
    // }
    cout << USCLN(3,4) << endl;
    cout << BSCNN(3,4);
    return 0;
}
