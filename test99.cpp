#include<iostream>
#include<cctype>
using namespace std;

struct data{
    string depan, tengah, belakang, full;
};

string name;
data nama[100];

void database(){
    nama[0].depan = "Muhammad";
    nama[0].tengah = "Arfan";
    nama[0].belakang = "Salamun";
    nama[0].full = "Muhammad Arfan Salamun";


    nama[1].depan = "Muhammad";
    nama[1].tengah = "Irfan";
    nama[1].belakang = "Sihehe";
    nama[1].full = "Muhammad Irfan Sihehe";

    nama[2].depan = "Muhammad";
    nama[2].tengah = "Berli";
    nama[2].belakang = "Mehehe";
    nama[2].full = "Muhammad Berli Mehehe";


    nama[3].depan = "Hello";
    nama[3].tengah = "Arfan";
    nama[3].belakang = "Hiehe";
    nama[3].full = "Hello Arfan Hiehe";

    nama[4].depan = "Muhammad";
    nama[4].tengah = "Hehehe";
    nama[4].belakang = "Salamun";
    nama[4].full = "Muhammad Hehehe Salamun";

    nama[5].depan = "Sihehe";
    nama[5].tengah = "Arfan";
    nama[5].belakang = "Sal";
    nama[5].full = "Sihehe Arfan Sal";

    nama[6].depan = "Bohoho";
    nama[6].tengah = "Arfan";
    nama[6].belakang = "Lehie";
    nama[6].full = "Bohoho Arfan Lehie";

    nama[7].depan = "Nonono";
    nama[7].tengah = "Tono";
    nama[7].belakang = "Budi";
    nama[7].full = "Nonono Tono Budi";

    nama[8].depan = "Jokowi";
    nama[8].tengah = "Hehehe";
    nama[8].belakang = "Kuylah";
    nama[8].full = "Jokowi Hehehe Kuylah";
}

//Kapital-Nonkapital
void lowercase(){
    for(int x;x<8;x++){
        tolower(nama[x].depan);
        tolower(nama[x].tengah);
        tolower(nama[x].belakang);
    }
}
//
void findFriend(name){
    for(int x;x<8;x++){
        switch name{
            case nama[x].depan:
            cout << nama[x].full;
            break;
            case nama[x].tengah;
            cout << nama[x].full;
            case name[x].belakang;
            cout << nama[x].full;
        }
    }
}
void namasaya(){
    cout << "HEHEHEHEHEH";
cout<<"GAMA VISION";
}
int main(){
    lowercase();
    do{
        cout << "FRIEND NAME: ";
        cin >> name;
        findFriend(name);

    }while(true);
}
