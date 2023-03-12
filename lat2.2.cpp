#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double rata){
    if(rata >= 60)
    return "lulus";
    else
        return "gagal";
}
string status2 (double rata, double nil){
    if(rata >= 60 || nil >= 70)
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
    
    // status 2
    cout << "\nstatus kelulusan kedua: " << status2(rerata(nilM, nilB), nilM);
    return 0;
}