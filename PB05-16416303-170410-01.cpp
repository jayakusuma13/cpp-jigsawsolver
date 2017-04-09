// NIM/Nama : 16416303 / M.Qodir Ibrahim
// Nama File: PB05-16416303-170410-01
// Tanggal  : 10 April 2017
// Deskripsi: Program jigsaw

#include <iostream>
using namespace std;

int main(){
//kamn\us
int x,y,m,n,i,j;
int a[50][50], b[50][50];
int s = 0,t = 0;

//input solusi
cout << "Masukkan M solusi : ";
cin >> m;
cout << "Masukkan N solusi : ";
cin >> n;
cout << "masukkan solusi Jigsaw" << endl;
for(x=0;x<m;x++){
    for(y=0;y<n;y++){
        cin >> a[x][y];
    }
    cout << endl;
};
cout << "Solusi jigsaw : " << endl;
for(x=0;x<m;x++){
    for(y=0;y<n;y++){
        cout << a[x][y] << " ";
    }
    cout << endl;
};

//input jigsaw acak
cout << "Masukkan jigsaw teracak : " << endl;
for(x=0;x<m;x++){
    for(y=0;y<n;y++){
        cin >> b[x][y];
    }
    cout << endl;
};
cout << "Jigsaw teracak: " << endl;
for(x=0;x<m;x++){
    for(y=0;y<n;y++){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(b[i][j] == a[m][n] && i != x){
                    s = x+1;
                    t = i+1;
                    break;
                }
            }
        }
    }

};

cout << "Baris yang di swap adalah baris" << s << " dan " << t << endl;
return 0;

}
