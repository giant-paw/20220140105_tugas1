// Nama : Giant Prakoso Amukti Wibowo
// NIM : 20220140105
// Kelas : C

#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double c){
    if(c >= 60)
    return "lulus";
    else
        return "gagal";
}

int main(){
    double nilM, nilB;
    cout << "masukkan nilai mat : " ;
    cin >> nilM;
    cout << "masukkan nilai Bahasa Indo : " ;
    cin >> nilB;

    // status 1
    cout << "status kelulusan : " << status(rerata(nilM, nilB));
    return 0;
}