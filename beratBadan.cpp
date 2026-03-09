#include <iostream>
using namespace std;

float Rata_rata(float a, float b)
{
    return a / (b * b) ;
}

string BMI(float r)
{
    if (r <=25 )
        return "berat badan normal";
    else if(r <=18.5)
        return "berat badan kurang";
    else if (r <= 30)
        return "berat badan berlebihan";
    else
        return "Obesitas";
}

int main()
{
    float bb, tb, rerata;
    string status;

    cout << "-- SELAMAT DATANG MAHASISWA A 2025 -- " << endl;
    cout << "masukan berat badan anda (kg): ";
    cin >> bb;
    cout << "masukan tinggi badan anda (meter): ";
    cin >> tb;

    rerata = Rata_rata(bb, tb);
    
    cout << "--------------- HASIL ---------------- " << endl;
    cout << "BMI anda : " << rerata << endl;
    cout << "status   : " << BMI(rerata) << endl;
}