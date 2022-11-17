#include <iostream>

using namespace std;

int main(){
	float a,b, hasil;
	char aritmatika;

	cout<<"selamat datang di program kalkulator\n\n";
	// masukkan input dari user
	cout<<"masukkan nilai pertama: ";
	cin>>a;
	cout<<"pilih operator +, -,/,*: ";
	cin >> aritmatika;
	cout<<"masukkan nilai kedua: ";
	cin>>b;

	cout <<"\n hasil perhitungan: ";


	cout << a << aritmatika << b ;

	// if(aritmatika == '+'){
	// 	hasil = a + b;
	// } else if (aritmatika == '-'){
	// 	hasil = a - b;
	// } else if (aritmatika == '/'){
	// 	hasil = a / b;
	// } else if (aritmatika == '*'){
	// 	hasil = a * b;
	// } else {
	// 	cout<<"operator salah"<<endl;
	// }

	switch(aritmatika){
		case '+':
		hasil = a + b;
		break;
		case '-':
		hasil = a - b;
		break;
		case '/':
		hasil = a / b;
		break;
		case '*':
		hasil = a * b;
		break;
		default:
		cout<<"operator salah"<<endl;
	}





	cout << "="<< hasil << endl;
	return 0;
}
