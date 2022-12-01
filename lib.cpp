#include <iostream>
using namespace std;

// kiểm tra 1 số có đối xứng hay không
int symmetryCheck(int n){ 
    int temp = n;
    int reverseNumber  = 0;
    while(n!=0){
        reverseNumber  = reverseNumber * 10 + n % 10;
        n = n / 10;
    }
    if(reverseNumber == temp)
        return 1; // dx

    return 0; // khong dx
}
// chuyển chữ thường thành in hoa và ngược lại
int convertFont(char s) {
    int sum = 0;
    if (s >= 'a' && s <= 'z') {
        s -= 32;
    } else if (s >= 'A' && s <= 'Z') {
        s += 32;
    }
    return s;
} 
// đổi trị trí a và b cho nhau
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
};
// nhập array
void inputArray(int a[], int &n){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"Nhập phần tử thứ "<< i <<": ";
        cin>>a[i];
    }
};
// xuất array
void outputArray(int a[], int n){
    cout<<"Các phần tử của mảng: ";
    for (int i = 0; i < n; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
};
// tìm kiểm trong array
int search(int a[], int n, int x){
    for (int i= 0; i < n; i++)
        if (a[i] == x)
            return i;   
    return -1;
};
// tìm max trong array 
int max(int a[], int n) {
    int max = a[0], index;
    for( int  i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];    
        }
    }
    return max;
};
// tìm max
int maxNum(int a, int b, int c, int d) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
} 
// tìm min
int minNum(int a, int b, int c, int d) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    return min;
} 
// sắp xếp
void arrange(int a, int b, int c, int d) {
    
    if (a > b){
        swap(a,b);
    }
    if (a > c){
        swap(a,c);
    }
    if (a > d){
        swap(a,b);
    }
    if (b > c){
        swap(b,c);
    }
    if (b > d){
        swap(b,d);
    }
    if (c > d){
        swap(c,d);
    }

    cout << a << b << c << d;
}

// hàm kiểm tra năm nhuận
int checkNamNhuan(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
        return true;
    } else {
        return false;
    }
}
// hàm tính số ngày trong tháng
int soNgayTrongThang(int m, int y) {
    int numDay;  
    switch (m){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: {
            numDay = 31;       
            break;
        
        }
        case 4:
        case 6:
        case 9:
        case 11: {
            numDay = 30;
            break;
        }
        case 2: {
            checkNamNhuan(y) == true ? numDay = 29 : numDay = 28;
            break;
        }
    }
    return numDay;
}
// hàm đếm số ngày trong năm
int sttNgayTrongNam(int d, int m, int y) {
    int count = d;
    for(int i = 1; i <= m - 1 ; i++) {
            count += soNgayTrongThang(i, y);
    }
    cout << count << endl;
    return count;
}

// Kiểm tra số nguyên tố
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