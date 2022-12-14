#include <iostream>
#include <math.h>
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

// **********************array*****************************

// Nhập mảng
void inputArray(int a[], int &n){
    cout<<"nhap so phan tu trong mang: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"Nhap phan tu thu "<< i+1 <<": ";
        cin>>a[i];
    }
};

// xuất mảng
void outputArray(int a[], int n){
    cout<<"Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
         cout<<a[i] << " "; 
    }

};


// tìm kiếm phần tử trong mảng
int findElement(int arr[], int n, int vt){
    for( int i = 0; i < n; i++){
        if(arr[i] == vt) {
            return i;
        }
    }
    return false;
}

// xoá một phần tử trong mảng
void deleteOneElement(int array[], int &length, int position){
    for(int i = position; i < length - 1; i++ ){
        array[i] = array[i+1];
    }
    length--;
}

// xoá một giá trị trong mảng
void deleteOneValue(int array[], int &length, int value) {
    for(int i = 0 ; i < length; i++) {
        if(array[i] == value) {
            deleteOneElement(array, length, i);
        }
    }
}         

// tìm kiếm phần tử trong mảng
int timKiem(int a[], int length, int position){
    for( int i = 0; i < length; i++) {
        if(a[i] == position) {
            return i;
        }
    }
    return -1;
}

// thêm phần tử vào mảng
void insertElement(int array[], int &length, int location, int position){ 
        for(int i = length; i > location; i--) {
            array[i] = array[i-1];
        }
        array[location] = position;
        length++;
    
}

int fibonacci_dequy(int n){
    if(n <= 1){
        return n;
    } else {
        return fibonacci_dequy(n-1) + fibonacci_dequy(n-2);
    }
}

int fibonacci_not_dequy(int n) {
    int a = 0, b = 1, fibo;

    for( int i = 1; i <= n; i++) {
        fibo = a + b;
        b = a;
        a = fibo;
    }

    return fibo;
}
