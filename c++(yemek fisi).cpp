#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream dosya;
	dosya.open("siparisler.txt");
	
	string yemek, s1 ,s2, s3, s4, s5, s6, s7, tatli, t1, t2, t3, t4, t5, t6, t7, a;

	s1="Iskender";
	s2="Tost";
	s3="Sandvic";
	s4="Corba";
	s5="Makarna";
	s6="Pizza";
	s7="Kebap";
	t1="Kunefe";
	t2="Revani";
	t3="Kek";
	t4="Muhallebi";
	t5="Sutlac";
	t6="Baklava";
	t7="Kazandibi";
	
	float kisi,yemek_ucreti=0,toplam=0,garsoniye,topkdv,tatli_ucreti=0;
	string s="------------------",y="||||||||||||||||||";
	
	cout.width(15);cout<<internal<<"YEMEK MENUSU"<<endl;
    cout<<"Iskender     20tl"<<endl<<"Tost         10tl"<<endl<<"Sandvic       8tl"<<endl<<"Corba         8tl"<<endl;
    cout<<"Makarna      15tl"<<endl<<"Pizza        24tl"<<endl<<"Kebap        25tl"<<endl;
    cout<<y<<endl;
    cout.width(15);cout<<internal<<"TATLI MENUSU"<<endl;
    cout<<"Kunefe      15tl"<<endl<<"Revani      12tl"<<endl<<"Kek          8tl"<<endl<<"Muhallebi    8tl"<<endl;
    cout<<"Sutlac      10tl"<<endl<<"Baklava     20tl"<<endl<<"Kazandibi   12tl"<<endl;
	cout<<"\n\n";
	cout<<"Kac kisi oldugunuzu giriniz:"<<endl;
	cin>>kisi;

	for(int i=0;i<kisi;i++) {

	cout<<"Istediginiz yemekleri giriniz:"<<endl;
	cin>>yemek;

	if(yemek == s1) {
		yemek_ucreti=20;
	}
	if(yemek == s2) {
		yemek_ucreti=10;
	}
	if(yemek == s3) {
		yemek_ucreti=8;
	}
	if(yemek == s4) {
		yemek_ucreti=8;
	}
	if(yemek == s5) {
		yemek_ucreti=15;
	}
    if(yemek == s6) {
		yemek_ucreti=24;
	}
	if(yemek == s7) {
		yemek_ucreti=25;
	}
		toplam = toplam + yemek_ucreti;
		
	dosya<<yemek<<"           %8   "<<yemek_ucreti<<" "<<endl;
	
}

    for(int j=0; j<kisi ;j++) {

    	cout<<"Istediginiz tatlilari giriniz:"<<endl;
    	cin>>tatli;
   
    	if(tatli == t1) {
    		tatli_ucreti=15;
		}
		if(tatli == t2) {
    		tatli_ucreti=12;
		}
		if(tatli == t3) {
    		tatli_ucreti=8;
		}
		if(tatli == t4) {
    		tatli_ucreti=8;
		}
		if(tatli == t5) {
    		tatli_ucreti=10;
		}
		if(tatli == t6) {
    		tatli_ucreti=20;
		}
		if(tatli == t7) {
    		tatli_ucreti=12;
		}
		toplam = toplam + tatli_ucreti;
		
    	dosya<<tatli<<"        %8   "<<tatli_ucreti<<" "<<endl;
	}
	
	system("CLS");
    topkdv = toplam*8/100;
	garsoniye = toplam*10/100;
	
	
	ifstream  dosyaoku("siparisler.txt");

	cout.width(15);cout<<internal<<"RND RESTORAN"<<endl<<"Tarih:14/10/2010"<<endl<<"Saat:12:45"<<endl;
	cout.width(20);cout<<internal<<s<<endl;

	while(getline(dosyaoku,a)) {
	cout<<a<<endl;
    }

	cout.width(20);cout<<internal<<s<<endl;
	cout<<"garsoniye: "<<garsoniye<<endl;
	cout<<"toplam kdv: "<<topkdv<<endl;
	cout<<"toplam:"<<toplam;
}
	
