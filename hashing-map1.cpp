#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> dataKey;
    
    while(true){
        string username, password;
        cout << "Masukkan Username ('keluar' jika ingin keluar): "; cin >> username;

        if(username == "keluar"){
            break;
        }

        cout << "Masukkan Password: "; cin >> password;
        dataKey[username] = password;
    }

    string inputUser, inputPass;
    cout << "\nMasukkan Username anda: "; cin >> inputUser;
    cout << "\nMasukkan Password anda: "; cin >> inputPass;

    if (dataKey.count(inputUser) && dataKey[inputUser] == inputPass){
        cout << "Verifikasi Sukses!" << 'dataKey';
    }else{
        cout << "[!] Verifikasi Error [!]";
    }
}
