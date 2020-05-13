#include <iostream>
using namespace std;

main (){
	
	cout<<"Nama     : Ainul Hikam "<<endl;
	cout<<"Nim      : F1B019017 "<<endl;
	cout<<"Kelompok : 5"<<endl;

int x,y, mtrx [10][10];
cout<< "TRANSPOSE MATRIX" <<endl;
cout<< "Masukkan jumlah baris = ";
cin>> x;

cout<< "Masukkan jumlah kolom = ";
cin>> y;
cout<<endl;

for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<< "Masukkan nilai index " <<i<< "," << j << " = ";
cin>>mtrx [i][j];
}
}
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout <<mtrx [i][j] <<"  ";
}
cout <<endl<<endl;
}
cout <<endl;
cout <<"TRANSPOSE MATRIX  \n";
for (int i = 0; i< y; i++){
for (int j = 0; j < x; j++){
cout<<mtrx [j][i] <<"  ";
}
cout<<endl<<endl;
}
}
