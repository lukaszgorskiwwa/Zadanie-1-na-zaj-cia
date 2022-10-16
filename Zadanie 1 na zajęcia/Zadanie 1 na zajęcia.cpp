#include <iostream>
#include <string>
using namespace std;

char koduj(char znak, int klucz){
	znak=toupper(znak);
	if(znak+klucz<=90) return znak+klucz;
	else return znak+klucz-26;
}

char rozszyfruj(char znak, int klucz){
	znak=toupper(znak);
		if (znak-klucz>=65) return znak-klucz;
		else znak-klucz+26;
}


int main(){
	int k;
	string jawny;
	cout << "podaj wyraz do zaszyfrowania: "; getline(cin,jawny);
	cout << "podaj klucz szyfrujacy: "; cin>>k;

//kodowanie
string szyfer="";
cout << "tekst jawny: " << jawny <<endl;
for (int i=0; i < jawny.length(); i++) {
if(jawny[i]!=' ') szyfer += koduj(jawny[i], k);
else szyfer+=' ';
}
	
cout << "szyfrogram:  " << szyfer;

//dekodowanie
jawny = "";
for (int i=0; i<szyfer.length(); i++) {
	if(szyfer[i]!=' ') jawny += rozszyfruj(szyfer[i], k);
	else jawny+= ' ';
}
cout<<"\ntekst rozszyfrowany: "<<jawny;

}