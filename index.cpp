#include <iostream>
using namespace std;
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

int main() {
    int d,m,y;
    cout << "input day: ";  cin >> d;
    cout << "input month: "; cin >> m; 
    cout << "input year: ";  cin >> y;
    
    cout << sttNgayTrongNam(d,m,y);

    return 0;
}
