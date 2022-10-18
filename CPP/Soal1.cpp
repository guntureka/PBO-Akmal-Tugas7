/*
Nama program        : Soal1
Nama                : Luthfi Ramadhan 140810210018
                      Guntur Eka Putra 140810210026
                      Sultan Ali Ilyasa 140810210066
Kelas               : B
Tanggal             : 18 Oktober 2022
Deskripsi           : Menentukan Nilai output
*/

#include <iostream>

using namespace std;


class Grade{
    private:
        string nama,npm;
        int nilai;

    public:
        Grade(){
            this->nama = " ";
            this->npm = " ";
            this->nilai = " ";

        }
        void setNama(string nama){
            this->nama = nama;
        }
        string getNama(){
            return nama;
        }
        void setNpm(string npm){
            this->npm = npm;
        }
        string getNpm(){
            return npm;
        }
        void setNilai(int nilai){
            this->nilai = nilai;
        }
        int getNilai(){
            return nilai;
        }
};

class Waktu{
    private jam,menit,detik;
};