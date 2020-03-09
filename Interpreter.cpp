#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <time.h>

using namespace std;
struct var{
	
	string name;
	double deger;
	
};
	var variables[200];
	int degiskensayaci=0;
	int tamkontrol=0;
	int cumlesayaci=0;
	string globalcumle[200];
	int cumlenerede=0;
	int sayacx=0;
	string degilseeger1;
	string degilseeger2;
	string degilseeger3;

	int basla(string k1){
	int b=0;
	string tempString;
	
	for(int i=0;i<strlen(k1.c_str());i++)
	{
	//	printf("-%c-\n",k1[i]);
		if(k1[i]==' ')
		{
			b=i+1;
			break;
		}
		
	}
	for(int i=b;i<strlen(k1.c_str());i++)
	{
		tempString+=k1[i];
	}
	//cout<< "->>"<<tempString<<"<<-"<<endl;
	if(tempString!="BASLA")
	{
		return 0;
	}
	else
		return 1;
}

int bitir(string k1)
{
	int b=0;
	string tempString;
	for(int i=0;i<strlen(k1.c_str());i++)
	{
		//printf("-%c-\n",k1[i]);
		if(k1[i]==' ')
		{
			b=i+1;
			break;
		}		
	}
	for(int i=b;i<strlen(k1.c_str());i++)
	{
		tempString+=k1[i];
	}
	//cout<< "->>"<< tempString<<"<<-"<<endl;
	if(tempString!="BITIR")
	{
		return 0;
	}
	else
		return 1;
}

int sayimi(string xyz)

{
		if( xyz[0]=='0' ||xyz[0]=='1' ||xyz[0]=='2'||xyz[0]=='3'||xyz[0]=='4'||xyz[0]=='5'||xyz[0]=='6'
		||xyz[0]=='7'||xyz[0]=='8'||xyz[0]=='9')  
				{
					
					return 1;
					
				}
				else return 0;
}

int degiskenvarmi(string xyz)
{
	int sayac2=0;
	//printf("-->%c\n",xyz[0]);
	for(int x=0;x<degiskensayaci;x++)
	{
		//cout<< variables[x].name << "> " << variables[x].deger<<endl;
		
		if(xyz==variables[x].name)
		{
			return x;
		}
		
		
	
		else
		continue;
		
	}
	return 99;
	

}
	
	
	int degilsevar=0;
void starter(string cumle , int hangicumledeyiz)//BU ARKADAÞ ILK KELIMEYE GORE ISLEM YAPAR
{
	//printf("Kaçýncý Cümle: %d\n",kacincisatir);
	//cout<<"Girilen Cümle-> "<<cumle<<endl;
	int dizivar=0;
	int matrisvar=0;
	char myString[100];
	
	strcpy(myString,cumle.c_str());
	
	char *temp =strtok(myString," ");
	

	int sayac=0;
	
	while(temp)
	{
		sayac++;

	temp = strtok(NULL, " ");
	}
	
	//printf("Kelime Sayisi->%d\n",sayac);
		//cout<<cumle<<endl;
	string kelimeler[sayac];
	int sayac2=0;
	char myString2[100];
	strcpy(myString2,cumle.c_str());
	char *temp2 =strtok(myString2," ");
		//cout<<temp2<<endl;
	while(temp2)
	{
		
		//cout<<"-> "<<temp2<<endl;
		kelimeler[sayac2]=temp2;
		sayac2++;
		temp2 = strtok(NULL, " ");
	}
	
	
	//for(int x=0;x<sayac;x++)
	//cout <<x+1 <<"."<<kelimeler[x]<<endl;
	//printf("\nSayac->%d\n",sayac2);
	//cout<<kelimeler[1]<<endl;
	if(kelimeler[1]=="RASTGELESAYI" && sayac==3)
	{
		//cout<<"RAStgele var"<<endl;
		int i1, n1;
  		srand(time(NULL));
  		int randx = rand() % 20;
		if(sayac==3)
		{
			string h1;
			n1=rand() % 50;	
			string hl="99.";
			hl+=" ";
			hl+=kelimeler[2];
			hl+="=";
			hl+=" ";
			string s2=std::to_string(n1);
			hl+=s2;
			//cout<<hl<<endl;
			starter(hl,hangicumledeyiz);
			getchar();
		
		}
		return;
	

   	
	//	cout<<n1<<endl;
   
	}
	if(kelimeler[1]=="DIZI" && sayac>3)
	{
		string dizi;
		string kk;
		int dizi2=sayac-5;
		int x2=0;
		for(int x=0;x<strlen(kelimeler[2].c_str());x++)
		{
			if(kelimeler[2][x]=='[' )
			{
					x2=x;
					break;
			}
		
			else
			{
					dizi+=kelimeler[2][x];
			}
		
		}
		
		for(int y=x2+1;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				{
					break;
					
				}
				
				else
				kk+=kelimeler[2][y];
			}
			//cout<<"dizi2: "<<dizi2<<endl;
			//cout<<"sayac: "<<sayac<<endl;
			int sayac5=stoi(kk);
			//cout<<"sayac2 :"<<sayac5<<endl;
			if(dizi2<sayac5)
			cout<<"Konsol-> HATA! "<< dizi <<" dizisinde eksik tanýmlama yapýldý."<<endl;
			string p;
			string a2;
		//cout << dizi<<" "<< kk<<endl;
		
		for(int i=0;i<dizi2;i++)
		{
			auto s2 = std::to_string(i);
			
			p+="99. ";
			p+=dizi;
			p+="[";
			p+=s2;
			p+="]";
			p+="=";
			p+=" ";
			p+=kelimeler[i+4];
			//cout<<p<<endl;
			
			starter(p,hangicumledeyiz);
			p="";
		}
		
		/*for(int i=0;i<sayac;i++)
		{
			string p;
			string sayi;
			auto s2 = std::to_string(i);
			//cout<<"sayi"<<sayi<<endl;
			p+="999.";
			p+=" ";
			p+=dizi;
			p+="[";
			p+=s2;
			p+="]";
			p+="=";
			p+=" ";
			p+="0";
			//cout<<p<<endl;
			starter(p,99);
		}*/
	}
	if(kelimeler[1]=="DIZI" && sayac==3)
	{
		string dizi;
		string kk;
		int x2=0;
		for(int x=0;x<strlen(kelimeler[2].c_str());x++)
		{
			if(kelimeler[2][x]=='[' )
			{
					x2=x;
					break;
			}
		
			else
			{
					dizi+=kelimeler[2][x];
			}
		
		}
		
		for(int y=x2+1;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				break;
				else
				kk+=kelimeler[2][y];	
			}
			
		
		
		//cout << dizi<<" "<< kk<<endl;
		int sayac=stoi(kk);
		for(int i=0;i<sayac;i++)
		{
			string p;
			string sayi;
			auto s2 = std::to_string(i);
			//cout<<"sayi"<<sayi<<endl;
			p+="999.";
			p+=" ";
			p+=dizi;
			p+="[";
			p+=s2;
			p+="]";
			p+="=";
			p+=" ";
			p+="0";
			//cout<<p<<endl;
			starter(p,99);
		}
		
	}
	if(kelimeler[1]=="MATRIS" && sayac>3)
	{
		string dizi;
		string kk;
		string kk2;
		int dizi2=sayac-5;
		int x2=0;
		for(int x=0;x<strlen(kelimeler[2].c_str());x++)
		{
			if(kelimeler[2][x]=='[' )
			{
					x2=x;
					break;
			}
		
			else
			{
					dizi+=kelimeler[2][x];
			}
		
		}
		
		for(int y=x2+1;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				{
					break;
					x2=y+2;
				}
				
				else
				kk+=kelimeler[2][y];
			}
			for(int y=x2+4;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				break;
				else if(kelimeler[2][y]!='[')
				kk2+=kelimeler[2][y];

			}
			//cout<<"dizi2: "<<dizi2<<endl;
			//cout<<"sayac: "<<sayac<<endl;
			int sayac5=stoi(kk);
			//cout<<"sayac2 :"<<sayac5<<endl;
			if(dizi2<sayac5)
			cout<<"Konsol-> HATA! "<< dizi <<" dizisinde eksik tanýmlama yapýldý."<<endl;
			string p;
			string a2;
			int g1=stoi(kk);
			int g2=stoi(kk2);
			//cout<<"g1: "<<g1<<" g2: "<<g2<<endl;
			for(int i=0;i<g1;i++)
			{
			for(int j=0;j<g2;j++)
			{
			
			string p;
			string sayi;
			auto s1 = std::to_string(i);
			auto s2 = std::to_string(j);
			string g5="";
			//cout<<"sayi"<<sayi<<endl;
			
			if(g1==1 && g2==2)
			{
			if(i==0)
			g5=kelimeler[j+4];
			}
			
			if(g1==2 && g2==2)
			{
					if(i==0)
				g5=kelimeler[j+4];
				
			
				if(i==1)
				g5=kelimeler[j+7];
				
				if(i==2)
				g5=kelimeler[j+11];
			}
			if(g1==3 && g2==1)
			{
					if(i==0)
				g5=kelimeler[j+4];
				
				if(i==1)
				g5=kelimeler[j+6];

				if(i==2)
				g5=kelimeler[j+8];
				if(i==3)
				g5=kelimeler[j+10];
			}
			if(g1==3 && g2==2)
			{
					if(i==0)
				g5=kelimeler[j+4];

				if(i==1)
				g5=kelimeler[j+7];
				
				if(i==2)
				g5=kelimeler[j+10];
			}
			if(g1==3 && g2==3)
			{
					if(i==0)
				g5=kelimeler[j+4];
				
			
				if(i==1)
				g5=kelimeler[j+8];
				
				if(i==2)
				g5=kelimeler[j+12];
			}
			if(g1==3 && g2==4)
			{
				if(i==0)
				g5=kelimeler[j+4];
				if(i==1)
				g5=kelimeler[j+9];
				if(i==2)
				g5=kelimeler[j+14];
				if(i==3)
				g5=kelimeler[j+19];
			
			}
			if(g1==4 && g2==1)
			{
				if(i==0)
				g5=kelimeler[j+4];
				if(i==1)
				g5=kelimeler[j+6];
					if(i==2)
				g5=kelimeler[j+8];
					if(i==3)
				g5=kelimeler[j+10];
			
			
			}
			
		
			
				//string g6=kelimeler[i+7];
				//cout<<"->"<<g5<<endl;
				//cout<<g6<<endl;
			p+="999.";
			p+=" ";
			p+=dizi;
			p+="[";
			p+=s1;
			p+="]";
			p+="[";
			p+=s2;
			p+="]";
			p+="=";
			p+=" ";
			p+=g5;
			//g1=0,g2=0;
			//cout<<p<<endl;
			
			starter(p,99);
			}
			
		}
		//cout << dizi<<" "<< kk<<"->"<<kk2<<endl;
	
	
	}
	if(kelimeler[1]=="MATRIS" && sayac==3)
	{
		string dizi;
		string kk;
		string kk2;
		int x2=0;
		int kontrol2=0;
		for(int x=0;x<strlen(kelimeler[2].c_str());x++)
		{
			if(kelimeler[2][x]==']' )
			{
					kontrol2++;
			}
		}
		
		for(int x=0;x<strlen(kelimeler[2].c_str());x++)
		{
			if(kelimeler[2][x]=='[' )
			{
					x2=x;
					break;
			}
		
			else
			{
					dizi+=kelimeler[2][x];
			}
		
		}
		//cout<<"x2 "<<x2<<endl;
		
		for(int y=x2+1;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				{
					x2=y;
					//cout<<"y "<<y<<endl;
					break;
				
					
				}
				
				else
				kk+=kelimeler[2][y];
					
			}
			//cout<<"x2 "<<x2<<endl;
		for(int y=x2+2;y<strlen(kelimeler[2].c_str());y++)
			{
				if(kelimeler[2][y]==']')
				break;
				else
				kk2+=kelimeler[2][y];	
			}
			int g1=stoi(kk);
			int g2=stoi(kk2);
			int matr=g1*g2;
			
		//cout<<g1<<"-"<<g2<<"->"<<matr<<endl;
		
		//cout << dizi<<": "<< kk<<"-"<<kk2<<endl;
		//cout<<"SON";
	
		for(int i=0;i<g1;i++)
		{
			for(int j=0;j<g2;j++)
			{
			
			string p;
			string sayi;
			auto s1 = std::to_string(i);
			auto s2 = std::to_string(j);
			//cout<<"sayi"<<sayi<<endl;
			p+="999.";
			p+=" ";
			p+=dizi;
			p+="[";
			p+=s1;
			p+="]";
			p+="[";
			p+=s2;
			p+="]";
			p+="=";
			p+=" ";
			p+="0";
			//cout<<p<<endl;
			starter(p,99);
			}
		}
	
	}
	if(kelimeler[1]=="BITIR")
	{
		cout<< "Konsol-> Program sonu."<<endl;
				return;
	}
	if(kelimeler[1]=="DEGILSE")
	{
		//cout<<"DEGILSE VAR: "<<endl;
		
			int hangicumle=0;
			//cout<<"DEGILSE VAR"<<endl;
			if(sayac==5 && kelimeler[2]=="GIT" && degilsevar==1)
			{
				hangicumle=stoi(kelimeler[4])-1;
				//printf("Gidilecek yer->%d\n",hangicumle);
				sayacx-=(sayacx - hangicumle);
				starter(globalcumle[sayacx],sayacx);
			}
			if(sayac==4 && kelimeler[2]=="YAZ" && degilsevar==1)
			{
				string gonder;
				gonder+="99.";
				gonder+=" ";
				gonder+=kelimeler[2];
				gonder+=" ";
				gonder+=kelimeler[3];
				starter(gonder,99);
			}
		degilsevar=0;
	}
	string gonder;
	if(kelimeler[1]=="DEGILSE" && kelimeler[2]=="EGER")
	{
		string bn=to_string(hangicumledeyiz);
		gonder+=bn;
		gonder+=". ";
		gonder+="EGER";
		gonder+=" ";
		gonder+= degilseeger2;
		gonder+=" ";
		gonder+=degilseeger3;
		gonder+=" ";
		gonder+=degilseeger1;
		gonder+=" ISE ";
		if(sayac== 7 && kelimeler[3]!="YAZ" && kelimeler[3]!="GIR")
		{
			string islem="99. ";
			islem+=kelimeler[3];
			islem+=" ";
			islem+=kelimeler[4];
			islem+=" ";
			islem+=kelimeler[5];
			islem+=" ";
			islem+=kelimeler[6];
			starter(islem,hangicumledeyiz);
			//cout<<islem<<endl;
		}

		if(sayac==5&&kelimeler[3]=="YAZ")
		{
			gonder+=kelimeler[3];
			gonder+=" ";
			gonder+=kelimeler[4];
			char str[100];
		strcpy(str,gonder.c_str());
		//cout<<"str: "<<str<<endl;
		char * pch;
		int sayac3=0;
		pch = strtok (str," ");
  		while (pch != NULL)
  		{
  			sayac3++;
    	pch = strtok (NULL, " ");
  		}
  		//cout<<"sayac: "<<sayac3<<endl;
  		if(sayac3==8)
  		starter(gonder,hangicumledeyiz);
		}
		
		if(sayac==6 && kelimeler[3]=="GIT")
		{
			gonder+=kelimeler[3];
			gonder+=" ";
			gonder+=kelimeler[4];
			gonder+=" ";
			gonder+=kelimeler[5];
			char str[100];
		strcpy(str,gonder.c_str());
		//cout<<"str: "<<str<<endl;
		char * pch;
		int sayac3=0;
		pch = strtok (str," ");
  		while (pch != NULL)
  		{
  			sayac3++;
    	pch = strtok (NULL, " ");	
  		}
  		//cout<<sayac3<<endl;
  		if(sayac3==9)
  		starter(gonder,hangicumledeyiz);
		
		}
	}
	if(kelimeler[1]=="YAZ")
	{
		string a1;
		int p1=strlen(kelimeler[0].c_str());
		int p2=strlen(kelimeler[1].c_str());
		int p3=p1+p2;
		if(kelimeler[2][0]=='"')
		{
			for(int x=p3+3;x<strlen(cumle.c_str());x++)
			{
				if(x==strlen(cumle.c_str())-1)
				break;
				a1+=cumle[x];
			}	
				cout<<"Konsol-> "<<a1<<endl;
				//cout<<""<<endl;
		}
		
		/*else if(kelimeler[1][0]=='""' && kelimeler[2][strlen(kelimeler[2].c_str())]=='"')
		{
			printf("\niki tane var.\n");
		}*/	
		if(sayac==3 && kelimeler[2][strlen(kelimeler[2].c_str())-1]==']')
		{
			string kkk;
			int matris=0;
			//cout<<"ahada buldum"<<endl;
			int hk=0;
			for(int x=1;x<strlen(kelimeler[2].c_str());x++)
			{
				if(kelimeler[2][x]==']')
				{
						matris++;
				}
			
			}
			if(matris==1)
			{
		
			for(int x=1;x<strlen(kelimeler[2].c_str());x++)
			{
				if(kelimeler[2][x]=='[')
				{
						hk=x;
				}
			
			}
			//cout<<"sayac"<<hk<<endl;
			for(int h=hk+1;h<strlen(kelimeler[2].c_str())-1;h++)
			{
				kkk+=kelimeler[2][h];
			}
			int k00=degiskenvarmi(kkk);
			int k01=sayimi(kkk);
			if(k00!=99 && k01!=1)   // AB[X] gibi
			{
			string eee;
			string fff;
			int hh1;
			for(int x=0;x<strlen(kelimeler[2].c_str());x++)
			{
				if(kelimeler[2][x]=='[')
				{
						hh1=x;
						break;
						
				}
				else 
				fff+=kelimeler[2][x];
			
			}
			
			//cout<<"->>"<<fff<<endl;
			fff+='[';
			for(int h=hh1+1;h<strlen(kelimeler[2].c_str())-1;h++)
			{
				eee+=kelimeler[2][h];
			}
			
			int hy1=degiskenvarmi(eee);
			int hy2=sayimi(eee);
			//cout<<"hy1: "<<hy1<<" hy2: "<<hy2<<" eee->"<<eee<<endl; 
			if(hy1!=99 && hy2==0)
			{
				int h33=0;
				//cout<<"burada "<<h33<<"--"<<variables[hy1].deger<<endl;
				int pp=variables[hy1].deger;
				string jk=to_string(pp);
				//cout<<"**"<<jk<<endl;
				fff+=jk;
				
			}
			
			
			
			
			
			
			//fff+='2';
			fff+=']';
			//cout<<"fff-> "<<fff<<endl;
				
			int yy=degiskenvarmi(fff);
			if(yy!=99)
			{
					printf("Konsol-> %s: %.2f \n",variables[yy].name.c_str(),variables[yy].deger);
			}
			
			}
			else if(k01==1)
			{
			
				auto st1=stoi(kkk);
				//cout<<st1<<endl;
				printf("Konsol-> %s: %.2f \n",variables[st1].name.c_str(),variables[st1].deger);
			}
			else
			{
			printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
			}
		}
		if(matris==2)
		{
			string a1,a2,a3;
			int y2=0;
			//cout<<"MATRIS VAR ULAN"<<endl;
			for(int x=0;x<strlen(kelimeler[2].c_str());x++)
			{
				if(kelimeler[2][x]!='[')
				a3+=kelimeler[2][x];
				else
				break;
			}
			for(int x=1;x<strlen(kelimeler[2].c_str());x++)
			{
				if(kelimeler[2][x]=='[')
				{
						hk=x;
						break;
				}
				
			
			}
			//cout<<"sayac"<<hk<<endl;
			for(int h=hk+1;h<strlen(kelimeler[2].c_str())-1;h++)
			{
				if(kelimeler[2][h]==']')
				{	
				y2=h+1;	
				break;
			
				}
			
				else
				a1+=kelimeler[2][h];
			}
				for(int h=y2+1;h<strlen(kelimeler[2].c_str())-1;h++)
			{
				if(kelimeler[2][h]=='[')
				{	
				y2=h+1;	
				break;
				}
				else
				a2+=kelimeler[2][h];
			}
			//cout<<a1<<endl;
			//cout<<a2<<endl;
			//cout<<"a3-> "<<a3<<endl;
			int h1=degiskenvarmi(a1);
			int h12=sayimi(a1);
			int h2=degiskenvarmi(a2);
			int h22=sayimi(a2);
			//cout<<"H1: "<<h1 <<" H2: "<<h2<<endl;
			if(h1!=99&&h2!=99 && h12==0 && h22==0)
			{
				
				int y4=variables[h1].deger;
				int y5=variables[h2].deger;
				string d1=to_string(y4);
				string d2=to_string(y5);
			
				string matris2;
				matris2+=a3;
				matris2+="[";
				matris2+=d1;
				matris2+="]";
				matris2+="[";
				matris2+=d2;
				matris2+="]";
				int y6=degiskenvarmi(matris2);
				if(y6!=99)
			{
					printf("Konsol-> %s: %.2f \n",variables[y6].name.c_str(),variables[y6].deger);
		}
		
					else
			{
			printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
			}
			//cout<<matris2<<endl;	
			}
			if(h1!=99 && h2==99 && h22==1)
			{
				int y4=variables[h1].deger;
				
				string d1=to_string(y4);
				
			
				string matris2;
				matris2+=a3;
				matris2+="[";
				matris2+=d1;
				matris2+="]";
				matris2+="[";
				matris2+=a2;
				matris2+="]";
				//cout<<matris2<<endl;	
				int y6=degiskenvarmi(matris2);
				if(y6!=99)
			{
					printf("Konsol-> %s: %.2f \n",variables[y6].name.c_str(),variables[y6].deger);
				}
		
					else
			{
				printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
			}
			
		}
		if(h1==99 && h2!=99 && h12==1)
			{
				int y4=variables[h2].deger;
				
				string d1=to_string(y4);
				
			
				string matris2;
				matris2+=a3;
				matris2+="[";
				matris2+=a1;
				matris2+="]";
				matris2+="[";
				matris2+=d1;
				matris2+="]";
				//cout<<matris2<<endl;	
				int y6=degiskenvarmi(matris2);
				if(y6!=99)
			{
					printf("Konsol-> %s: %.2f \n",variables[y6].name.c_str(),variables[y6].deger);
				}
		
					else
			{
				printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
			}
			
		}
		if(h1==99 && h2==99 && h12==1 && h22==1)
		{
				string matris2;
				matris2+=a3;
				matris2+="[";
				matris2+=a2;
				matris2+="]";
				matris2+="[";
				matris2+=a1;
				matris2+="]";
				//cout<<matris2<<endl;	
				int y6=degiskenvarmi(matris2);
				if(y6!=99)
			{
					printf("Konsol-> %s: %.2f \n",variables[y6].name.c_str(),variables[y6].deger);
				}
		
					else
			{
				printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
			}
		}
		}
		if(matris==3)
		{
			//cout<<"3 BOYUT VAR"<<endl;
		}
			
	
			/*for(int x=p3+3;x<strlen(cumle.c_str());x++)d
			{
				if(x==strlen(cumle.c_str())-1)
				break;
				a1+=cumle[x];
			}	
				cout<<"Konsol-> "<<a1<<endl;*/
		}
		else 
		{
			
		int z1=degiskenvarmi(kelimeler[2].c_str());
		if(z1!=99)
		printf("Konsol-> %s: %.2f \n",variables[z1].name.c_str(),variables[z1].deger);
		else if(z1==99 && kelimeler[2][0]!='"')
		{
			//cout<<"1->"<<z1<<endl;
			printf("Hata! Yazýlacak Deðiþken Bulunamadý.\n");
				return;
		}
	
		}
	
			
	
	}
	else if(kelimeler[1]=="EGER")
	{
		
		//cout<<cumle<<endl;
		int k1,k2;
		int y1,y2;
		float sorgu;
		k1=degiskenvarmi(kelimeler[2]);
		k2=degiskenvarmi(kelimeler[4]);
		y1=sayimi(kelimeler[2].c_str());
		y2=sayimi(kelimeler[4].c_str());
		int nelabu=0;
		
		
		//printf("EGER->1. %d 2. %d \n",k1,k2);
		//printf("EGER -> Sayimi %d - %d\n",y1,y2);
		
		if(k1==99 && k2==99 && y1==0 && y2==1)
			{
			printf("Konsol-> Eðer'de Hata!.Karþýlaþtýrýlacak deðiþken bulunamadý.\n");	
			cout<<"Bulunamadi-> "<<kelimeler[2]<<endl;
				return;
			}
		if(k1==99 && k2==99 && y1==1 &&  y2==0)
		{
			printf("Konsol-> Eðer'de Hata!.Karþýlaþtýrýlacak deðiþken bulunamadý.\n");	
			cout<<"Bulunamadi-> "<<kelimeler[4]<<endl;	
			return;
			
		}
		if(k1==99 && k2!=99 && y1==0 && y2==0)
		{
			printf("Konsol-> Eðer'de Hata!.Karþýlaþtýrýlacak deðiþken bulunamadý.\n");
			cout<<"Bulunamadi-> "<<kelimeler[2]<<endl;	
				return;
		}
		if(k1==99 && k2==99 && y1==0 && y2==0)
		{
			printf("Konsol-> Eðer'de Hata!.Karþýlaþtýrýlacak deðiþken bulunamadý.\n");
			cout<<"Bulunamadi-> "<<kelimeler[2]<<endl;	
			cout<<"Bulunamadi-> "<<kelimeler[4]<<endl;	
				return;
		}
		if(k1!=99 && k2==99 && y1==0 && y2==0)
		{
			printf("Konsol-> Eðer'de Hata!.Karþýlaþtýrýlacak deðiþken bulunamadý.\n");	
			cout<<"Bulunamadi-> "<<kelimeler[4]<<endl;	
				return;
		}
		if(k1==99 && k2==99 && y1!=0 && y2!=0) 
		{
			//printf("ikiside sayi\n");
			nelabu=0;
		}
		if(k1==99 && k2==99 && y1==1 &&y2==0)
		{
			//printf("Birinci sayi ikinci degisken\n");
			nelabu=1;
		}

		if(k1!=99 && k2==99 && y1==0 && y2==1)
		{
			//printf("birinci degisken ikinci sayi\n");
			nelabu=2;
		}
		if(k1!=99 && k2!=99 && y1==0 && y2==0)
		{
			//printf("ikiside degisken\n");
			nelabu=3;
		}
		else
		{
			
		//printf("Sýkýntý yok\n");
		}
		//printf("Neymis->%d\n\n",nelabu);
		int t1,t2;
		
		int neyapcam=0;
		if(nelabu==0)//ikiside sayi
		{
			t1=stod(kelimeler[2]);
			t2=stod(kelimeler[4]);
		}
		if(nelabu==1)//birinci sayi ikinci degisken
		{
			t1=stod(kelimeler[2]);
			t2=variables[k1].deger;
		}
		if(nelabu==2)
		{
			t1=variables[k1].deger;
			t2=stod(kelimeler[4]);
		}
		if(nelabu==3)
		{
			t1=variables[k1].deger;
			t2=variables[k2].deger;
		}
		//printf("T1:%d T2: %d\n",t1,t2);
	
		{
			int hangicumle;
			if(sayac==9)
			hangicumle=stoi(kelimeler[8])-1;
			else
			hangicumle=0;
		//printf("Gidilecek yer->%d\n",hangicumle); 
		if(kelimeler[3]=="mod" && sayac >9 )
		{
			int a1=0,a2=0,a3=0;
			//cout<<"HEHE"<<endl;
			a1=t1;
			int p1=degiskenvarmi(kelimeler[4]);
			int p2=sayimi(kelimeler[4]);
			if(p1==99 && p2==1)
			{
				a2=stoi(kelimeler[4]);
			}
			
			if(p1!=99 && p2==0)
			{
				a2=variables[p1].deger;
			}
			a3=a1 % a2;
			//cout<<"a1:"<<a1<<" a2:"<<a2<<" a3:"<<a3<<endl;
			if(sayac>8)
			{
				int y9=stoi(kelimeler[6]);
				if(sayac==11)
				hangicumle=stoi(kelimeler[10])-1;
				else
				hangicumle=0;
				
				
				if(y9==a3)
				{
				if(sayac>8 && kelimeler[8]=="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac>8 && kelimeler[8]=="GIT")
				{
				sayacx-=(sayacx - hangicumle);
				starter(globalcumle[sayacx],sayacx);
				}
			
			
				}
				else
				{
					degilsevar=1;
					degilseeger1=kelimeler[2];
					degilseeger2=kelimeler[4];
					degilseeger3=kelimeler[3];
				}
			
			}
			
		
		}
		if(kelimeler[3]=="<")
		{
			if(t1<t2)
			neyapcam=2;
				if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT"&& neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
			if(t1<t2 && neyapcam==2)
			{
				
				//printf("Kucuktur var\n");
				if(kelimeler[6]=="GIT" && sayac==9)
				{

					sayacx-=(sayacx - hangicumle);
					starter(globalcumle[sayacx],sayacx);
				}
				if(kelimeler[6]=="YAZ" && sayac==8)
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				
				}
				if(sayac==8 && kelimeler[5]=="ISE" && kelimeler[6]!="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac==10 && kelimeler[5]=="ISE")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
		
				
			}
			else 
			{
			
			neyapcam=0;	

					degilsevar=1;
					degilseeger1=kelimeler[2];
					degilseeger2=kelimeler[4];
					degilseeger3=kelimeler[3];
	
		
		
			}
			
			
			
		}
		
		if(kelimeler[3]==">")
		
		{
				if(t1>t2)
				neyapcam=2;
				if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT"&& neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
				//printf("Kucuktur var\n");
				if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT" && neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
			if(t1>t2 && neyapcam==2)
			{
				if(kelimeler[6]=="GIT" && sayac==9)
				{
					//cout<<"CALISIYOM"<<endl;
					sayacx-=(sayacx - hangicumle);
					starter(globalcumle[sayacx],sayacx);
					
				}
				if(kelimeler[6]=="YAZ" && sayac==8)
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				
				}
				if(sayac==8 && kelimeler[5]=="ISE" && kelimeler[6]!="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac==10 && kelimeler[5]=="ISE")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
		
				
			}
			else 
			{
			neyapcam=0;
			degilsevar=1;
			degilseeger1=kelimeler[2];
			degilseeger2=kelimeler[4];
			degilseeger3=kelimeler[3];
			}
			
		}
		if(kelimeler[3]=="=")
		
		{
				if(t1==t2)
				neyapcam=2;
					if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT" && neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
				//printf("Kucuktur var\n");
				if(t1==t2 && neyapcam==2)
			{
				if(kelimeler[6]=="GIT" && sayac==9)
				{

					sayacx-=(sayacx - hangicumle);
					starter(globalcumle[sayacx],sayacx);
				}
				if(kelimeler[6]=="YAZ" && sayac==8)
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				
				}
				if(sayac==8 && kelimeler[5]=="ISE" && kelimeler[6]!="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac==10 && kelimeler[5]=="ISE")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
		
				
			}
			else 
			{
				neyapcam=0;
				degilsevar=1;
				degilseeger1=kelimeler[2];
			degilseeger2=kelimeler[4];
			degilseeger3=kelimeler[3];
			}
			
			
	
			
		}
			if(kelimeler[3]==">=")
		
		{
			//cout<<"BURADAYIM BUYUK EÞÝT VAR"<<endl;
			
				if(t1>=t2)
				neyapcam=2;
					if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT" && neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
			if(t1>=t2 && neyapcam==2)
			{
				if(kelimeler[6]=="GIT" && sayac==9)
				{
					//cout<<"CALISIYOM"<<endl;
					sayacx-=(sayacx - hangicumle);
					starter(globalcumle[sayacx],sayacx);
					
				}
				if(kelimeler[6]=="YAZ" && sayac==8)
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				
				}
				if(sayac==8 && kelimeler[5]=="ISE" && kelimeler[6]!="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac==10 && kelimeler[5]=="ISE")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
		
				
			}
			else 
			{
			neyapcam=0;
			degilsevar=1;
				degilseeger1=kelimeler[2];
			degilseeger2=kelimeler[4];
			degilseeger3=kelimeler[3];
			}
			
		}
		if(kelimeler[3]=="<=")
		
		{
		
			
				if(t1<=t2)
				neyapcam=2;
				if(sayac==8 &&kelimeler[5]=="ISE" && kelimeler[6]!="YAZ" &&kelimeler[6]!= "GIT" && neyapcam==2)
				{
					string d1;
				char t=kelimeler[6][strlen(kelimeler[6].c_str())-1];
				//cout<<"->"<<t<<"<-";
				if(t=='=')
				{
						d1=kelimeler[6];
						//cout<<"d1 "<<d1<<endl;
						int kk=degiskenvarmi(d1);
						if(kk!=99)
						{
							string cumlem;
							//cout<<"->"<<cumlem<<endl;
							cumlem+="99.";
							cumlem+=" ";
							cumlem+=kelimeler[6];
							cumlem+=" ";
							cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
						starter(cumlem,99);
						}
				}
			
				
				}
			if(t1<=t2 && neyapcam==2)
			{
				if(kelimeler[6]=="GIT" && sayac==9)
				{
					//cout<<"CALISIYOM"<<endl;
					sayacx-=(sayacx - hangicumle);
					starter(globalcumle[sayacx],sayacx);
					
				}
				if(kelimeler[6]=="YAZ" && sayac==8)
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				
				}
				if(sayac==8 && kelimeler[5]=="ISE" && kelimeler[6]!="YAZ")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
				if(sayac==10 && kelimeler[5]=="ISE")
				{
					string cumlem;
					//cout<<"->"<<cumlem<<endl;
					cumlem+="99.";
					cumlem+=" ";
					cumlem+=kelimeler[6];
					cumlem+=" ";
					cumlem+=kelimeler[7];
					cumlem+=" ";
					cumlem+=kelimeler[8];
					cumlem+=" ";
					cumlem+=kelimeler[9];
					//cout<<"->"<<cumlem<<endl;
					starter(cumlem,99);
				}
		
				
			}
			
			else 
			{
			neyapcam=0;
			degilsevar=1;
				degilseeger1=kelimeler[2];
			degilseeger2=kelimeler[4];
			degilseeger3=kelimeler[3];
			}
		}
		
		}
	
	
		
	}
		


	else if(kelimeler[1]=="GIR")
	{
		if(kelimeler[2][strlen(kelimeler[2].c_str())-1]!=']')
		{
		
			int y=degiskenvarmi(kelimeler[2]);
				//cout<<"-------"<<tmp<<"----------"<<endl;
				//printf("Buradayim->>%d\n",y);
				cout <<"Konsol-> "<<kelimeler[2]<<"  degerini giriniz. \n" ;
				if(y!=99)
				{
					printf(" %d ->",variables[y].deger);
					int k;
					scanf("%d",&k);
					variables[y].deger=k;
				

				}
				else
				{
					if(sayac==3)
					{
					int k;
					scanf("%d",&k);
					variables[degiskensayaci].deger=k;
					variables[degiskensayaci].name=kelimeler[2];
					degiskensayaci++;
					return ;
					}
			
				}
				return;
		}
				string hehe;
				int kontrol7=0;
				int yerbul2=0;
				string degisken2;
				string degisken3;
				string abc;
				for(int i = 0;i<strlen(kelimeler[2].c_str());i++)
				{
					if(kelimeler[2][i]=='[')
					{
						kontrol7++;
					}
					
				}
				for(int i = 0;i<strlen(kelimeler[2].c_str());i++)
				{
					if(kelimeler[2][i]=='[')
					{
						yerbul2=i;
						break;
					}
					else
					degisken2+=kelimeler[2][i];
					
				}
				for(int i = yerbul2+1;i<strlen(kelimeler[2].c_str());i++)
				{
					if(kelimeler[2][i]==']')
					{
						yerbul2=i;
						break;
					}
					else
					degisken3+=kelimeler[2][i];
					
				}
			
				if(kontrol7>1)
				{
				for(int i = yerbul2+2;i<strlen(kelimeler[2].c_str());i++)
				{
					if(kelimeler[2][i]==']')
					break;
					else
					{
						hehe+=kelimeler[2][i];
					}
					
				}
			//	cout<<hehe<<endl;
				}
				
				//cout<<kelimeler[2]<<endl;
				//cout<<"Sayac: "<<kontrol7<<endl;
				string degisken5;
				int y=degiskenvarmi(kelimeler[2]);
				int y2=degiskenvarmi(degisken3);
				
				if(kontrol7==1)
				{
					int a1=0;
					if(y2!=99)
					{
						a1=variables[y2].deger;
					}
					auto s1=to_string(a1);
					abc="99. ";
					abc+=degisken2;
					abc+="[";
					abc+=s1;
					abc+="]";
					
					degisken5+=degisken2;
					degisken5+="[";
					degisken5+=s1;
					degisken5+="]";
				}
				if(kontrol7==2)
				{
					
					int a1=0;
					if(y2!=99)
					{
						a1=variables[y2].deger;
					}
					auto s1=to_string(a1);
					
					abc="99. ";
					abc+=degisken2;
					abc+="[";
					abc+=s1;
					abc+="]";
					abc+="[";
					abc+=hehe;
					abc+="]";
					int kk1=degiskenvarmi(hehe);
					int a2=0;
					if(y2!=99)
					{
						a2=variables[kk1].deger;
					}
					auto s2=to_string(a2);
					degisken5+=degisken2;
					degisken5+="[";
					degisken5+=s1;
					degisken5+="]";
					degisken5+="[";
					
					degisken5+=s2;
					degisken5+="]";
					cout<<"->"<<degisken5<<endl;
				}
				
				//cout<<"-------"<<abc<<"----------"<<endl;
				//printf("Buradayim->>%d\n",y);
				//system("cls");
				cout <<"Konsol-> "<<degisken5 << " degerini giriniz.  \n";
				y=degiskenvarmi(degisken5);
				if(y!=99 && kontrol7==1)
				{
					cout <<"\nDeðiþken "<<degisken5<<": "<<variables[y].deger<<" ->";
					//printf("Konsol-> Uzerine Yaziliyor ->.",variables[y].deger);
					
					float k;
					cin>>k;
					variables[y].deger=k;
					//cout <<kelimeler[2]<<" -> "<<  variables[y].deger<<endl;
						int c1=k;
					string don;
					don=to_string(c1);
					abc+="="; 	
					abc+=" ";
					abc+=don;
					//cout<<"heheh"<<abc<<endl;
					starter(abc,hangicumledeyiz);
				
				}
				
				else
				{
					if(sayac==3)
					{
					float k;
					cin>>k;
					variables[degiskensayaci].deger=k;
					variables[degiskensayaci].name=degisken5;
					degiskensayaci++;
					return ;
					}
			
				}
	}
	else //DEGISKEN OLUSTURMA
	{
		string tmp;
		
		for(int x=0;x<strlen(kelimeler[1].c_str());x++)//BURADA KALDIK DEÐÝÞKEN DEÐERÝ YOK
		{
			if(kelimeler[1][x]!='=')
			tmp+=kelimeler[1][x];
			if(kelimeler[1][x]=='\n')
			break;
		}
		int c=strlen(tmp.c_str())+2;
		//printf("->Sayac:%d\n",c);
		
		for(int x=c;x<strlen(cumle.c_str());x++)
		{
			//printf("x: %d ",x);
			//cout<<cumle[x]<<endl;
		}
	

		if(sayac==3 )
		{
			int syc=0;
			int a1=0;
			int y1=0;
			int y2=0;
			string degisken1;
			string degisken2;
			string degiskenisim;
			string degiskenisim2;
			string dizi;
			string matris1;
			string matris2;
			for(int i=0;i<strlen(kelimeler[1].c_str());i++)
			{
				if(kelimeler[1][i]=='[')
				{
					syc++;
					a1=i+1;
				}

			}
			
			for(int i=0;i<strlen(kelimeler[1].c_str());i++)
			{
				if(kelimeler[1][i]=='[')
				{
					break;
				}
					else
				{
					degiskenisim+=kelimeler[1][i];
				}

			}
		
				//cout<<"sayac "<<syc<<endl;
			if(syc==1)
			{
				
				for(int i=a1;i<strlen(kelimeler[1].c_str());i++)
				{
					if(kelimeler[1][i]!=']')
					{
						degisken1+=kelimeler[1][i];
					}
					else
					{
						break;
					}
					
				}
					//cout<<degiskenisim<<"["<<degisken1<<"]"<<"= "<<kelimeler[2]<<endl;
					int y1=degiskenvarmi(degiskenisim);
					int y2=degiskenvarmi(degisken1);
					int y3=degiskenvarmi(kelimeler[2]);
					//cout<<y1<<" "<<y2<<" "<<y3<<" "<<endl;
					if(y2!=99 && y3!=99)
					{
						string abc;
						abc+="99.";
						abc+=" ";
						abc+=degiskenisim;
						abc+="[";
						int z1=variables[y2].deger;
						int z2=variables[y3].deger;
						auto s2=to_string(z1);
						auto s3=to_string(z2);
						abc+=s2;
						abc+="]";
						abc+="=";
						abc+=" ";
						abc+=s3;
						//cout<<abc<<endl;
						dizivar=1;
						starter(abc,hangicumledeyiz);
					}
					if(y2!=99 && y3!=99)
					dizivar=1;
				if(y1==99 && y2==1)
				{
					cout<<"Konsol-> Hata, deðiþken "<< degisken1<<" bulunamadi."<<endl;
				}
			}
			if(syc==2)
			{
				
				//cout<<"MATRIS"<<endl;
				for(int i=0;i<strlen(kelimeler[1].c_str());i++)
			{
				if(kelimeler[1][i]=='[')
				{
					a1=i+1;
					break;
				}
				else
				{
					degiskenisim2+=kelimeler[1][i];
				}
			}
			for(int i=a1;i<strlen(kelimeler[1].c_str());i++)
			{
				if(kelimeler[1][i]==']')
				{
					
					a1=i+2;
					break;
				}
				else
				matris1+=kelimeler[1][i];
			}
			for(int i=a1;i<strlen(kelimeler[1].c_str());i++)
			{
				if(kelimeler[1][i]==']')
				{
					break;
				}
				else
				matris2+=kelimeler[1][i];
			}
			
			//cout<<"degisken: "<<degiskenisim2<<" m1: "<<matris1<<" m2: "<<matris2<<endl;
			}
			
				
			
	
	
		
		}
		
	
		if(sayac==3 && kelimeler[1]!="DIZI"&& kelimeler[1]!="MATRIS")
		{
			
			if(strlen(kelimeler[2].c_str())>9)
			printf("HATA.\n");
			else
			{
				//cout<<"BURADA"<<kelimeler[2]<<endl;
				
				int y=degiskenvarmi(tmp);
				int y2=degiskenvarmi(kelimeler[2].c_str());
				//cout<<"-------"<<tmp<<"----------"<<endl;
				//printf("->1. %d 2. %d\n",y,y2);
				//printf("Buradayim->>%d\n",y);
				if(y!=99 && y2!=99)
				{
					//cout<<"KONTROL0"<<endl;
					int h2=sayimi(kelimeler[2]);
					//cout<<"h2: "<<h2<<endl;
					if(h2==0)
					{
						variables[y].deger=variables[y2].deger;
						//cout<<variables[y].name<<"-"<<variables[y].deger<<endl;
					}

					
				}
				else if(y==99 && y2!=99 )
				{
					
					if(dizivar==0)
					{
						//	cout<<"kontrol1"<<endl;
							variables[degiskensayaci].deger=variables[y2].deger;
							variables[degiskensayaci].name=tmp;
							degiskensayaci++;
					}
				
					
				}
				else if(y!=99 && y2==99)
				{
					//cout<<"kontrol2"<<endl;
					if(dizivar==0)
					variables[y].deger=stod(kelimeler[2]);
				}

				else 
				{
				//cout<<"kontrol3"<<endl;
				//cout<<"KONTROL2"<<endl;
					if(dizivar==0)
					{
				variables[degiskensayaci].deger=stod(kelimeler[2]);
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
		}
		
				
		if(degiskensayaci==0)
		{
				variables[0].deger=stod(kelimeler[2]);
				variables[0].name=tmp;
				degiskensayaci++;
		}
		
			}
	
		}
		
		else if(sayac!=3 )
		{
		
			string tmp;
		
		for(int x=0;x<strlen(kelimeler[1].c_str());x++)//BURADA KALDIK DEÐÝÞKEN DEÐERÝ YOK
		{
			if(kelimeler[1][x]!='=')
			tmp+=kelimeler[1][x];
			if(kelimeler[1][x]=='\n')
			break;
		}
			//cout<<tmp<<endl;
			int xy;
			int k1;
			int k2;
			int d1,d2;
			float sonuc;
			
			if(kelimeler[3]=="+")
			{
				int kt0,kt1,kt2;
				kt0=degiskenvarmi(tmp);
				kt1=degiskenvarmi(kelimeler[2].c_str());
				kt2=degiskenvarmi(kelimeler[4].c_str());
				
				//printf("->1. %d 2. %d 3. %d\n",kt0,kt1,kt2);
				if(kt1!=99 && kt2==99)  // sayi= sayi + 3
				{
					sonuc=variables[kt1].deger + stod(kelimeler[4]);
				}
				if(kt1==99 && kt2!=99)
				{
					sonuc=stod(kelimeler[2])+ variables[kt2].deger;
				}
				if(kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger + variables[kt2].deger;
				}
				if(kt0==99 && kt1==99 && kt2==99)
				{
					variables[degiskensayaci].deger=stod(kelimeler[2]) + stod(kelimeler[4]);
					variables[degiskensayaci].name=tmp;
					degiskensayaci++;
					return;
				}
			
				if(kt0!=99 && kt1==99 && kt2==99)
				{
					variables[kt0].deger=stod(kelimeler[2]) + stod(kelimeler[4]);
				}
				if(kt0!=99 && kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger + variables[kt2].deger;
					variables[kt0].deger=sonuc;
				}
				else if(kt0!=99)
				{
				variables[kt0].deger=sonuc;
				}
				else
				{
				variables[degiskensayaci].deger=sonuc;
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
			}
			
			if(kelimeler[3]=="-")
			{
				int kt0,kt1,kt2;
				kt0=degiskenvarmi(tmp);
				kt1=degiskenvarmi(kelimeler[2].c_str());
				kt2=degiskenvarmi(kelimeler[4].c_str());
				
				//printf("->1. %d 2. %d 3. %d\n",kt0,kt1,kt2);
				if(kt1!=99 && kt2==99)  // sayi= sayi + 3
				{
					sonuc=variables[kt1].deger - stod(kelimeler[4]);
				}
				if(kt1==99 && kt2!=99)
				{
					sonuc=stod(kelimeler[2])- variables[kt2].deger;
				}
				if(kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger - variables[kt2].deger;
				}
				if(kt0==99 && kt1==99 && kt2==99)
				{
					variables[degiskensayaci].deger=stod(kelimeler[2]) - stod(kelimeler[4]);
					variables[degiskensayaci].name=tmp;
					degiskensayaci++;
					return;
				}
			
				if(kt0!=99 && kt1==99 && kt2==99)
				{
					variables[kt0].deger=stod(kelimeler[2]) - stod(kelimeler[4]);
				}
				if(kt0!=99 && kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger - variables[kt2].deger;
					variables[kt0].deger=sonuc;
				}
				else if(kt0!=99)
				{
				variables[kt0].deger=sonuc;
				}
				else
				{
				variables[degiskensayaci].deger=sonuc;
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
			}
			if(kelimeler[3]=="*")
			{
				int kt0,kt1,kt2;
				kt0=degiskenvarmi(tmp);
				kt1=degiskenvarmi(kelimeler[2].c_str());
				kt2=degiskenvarmi(kelimeler[4].c_str());
				
				//printf("->1. %d 2. %d 3. %d\n",kt0,kt1,kt2);
				if(kt1!=99 && kt2==99)  // sayi= sayi + 3
				{
					sonuc=variables[kt1].deger * stod(kelimeler[4]);
				}
				if(kt1==99 && kt2!=99)
				{
					sonuc=stod(kelimeler[2])* variables[kt2].deger;
				}
				if(kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger * variables[kt2].deger;
				}
				if(kt0==99 && kt1==99 && kt2==99)
				{
					variables[degiskensayaci].deger=stod(kelimeler[2]) * stod(kelimeler[4]);
					variables[degiskensayaci].name=tmp;
					degiskensayaci++;
					return;
				}
			
				if(kt0!=99 && kt1==99 && kt2==99)
				{
					variables[kt0].deger=stod(kelimeler[2]) * stod(kelimeler[4]);
				}
				if(kt0!=99 && kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger * variables[kt2].deger;
					variables[kt0].deger=sonuc;
				}
				else if(kt0!=99)
				{
				variables[kt0].deger=sonuc;
				}
				else
				{
				variables[degiskensayaci].deger=sonuc;
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
			}
		if(kelimeler[3]=="/")
			{
				int kt0,kt1,kt2;
				kt0=degiskenvarmi(tmp);
				kt1=degiskenvarmi(kelimeler[2].c_str());
				kt2=degiskenvarmi(kelimeler[4].c_str());
				
				//printf("->1. %d 2. %d 3. %d\n",kt0,kt1,kt2);
				if(kt1!=99 && kt2==99)  // sayi= sayi + 3
				{
					sonuc=variables[kt1].deger / stod(kelimeler[4]);
				}
				if(kt1==99 && kt2!=99)
				{
					sonuc=stod(kelimeler[2])/ variables[kt2].deger;
				}
				if(kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger / variables[kt2].deger;
				}
				if(kt0==99 && kt1==99 && kt2==99)
				{
					variables[degiskensayaci].deger=stod(kelimeler[2]) / stod(kelimeler[4]);
					variables[degiskensayaci].name=tmp;
					degiskensayaci++;
					return;
				}
			
				if(kt0!=99 && kt1==99 && kt2==99)
				{
					variables[kt0].deger=stod(kelimeler[2]) / stod(kelimeler[4]);
				}
				if(kt0!=99 && kt1!=99 && kt2!=99)
				{
					sonuc=variables[kt1].deger / variables[kt2].deger;
					variables[kt0].deger=sonuc;
				}
				else if(kt0!=99)
				{
				variables[kt0].deger=sonuc;
				}
				else
				{
				variables[degiskensayaci].deger=sonuc;
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
			}
			if(kelimeler[3]=="mod")
			{
				int kt0,kt1,kt2;
				kt0=degiskenvarmi(tmp);
				kt1=degiskenvarmi(kelimeler[2].c_str());
				kt2=degiskenvarmi(kelimeler[4].c_str());
				int a1=0,a2=0;
				//printf("->1. %d 2. %d 3. %d\n",kt0,kt1,kt2);
			
				
				if(kt1!=99 && kt2==99)  // sayi= sayi + 3
				{
					a1=variables[kt1].deger;
					a2=stoi(kelimeler[4]);
					sonuc=a1 % a2;
				}
				if(kt1==99 && kt2!=99)
				{
					a1=stoi(kelimeler[2]);
					//cout<<"a1-> "<<a1<<endl;
					a2=variables[kt2].deger;
					sonuc=a1 % a2;
					
				}
				if(kt1!=99 && kt2!=99)
				{
					a1=variables[kt1].deger;
					a2=variables[kt2].deger ;
					sonuc=a1 % a2;
				}
				if(kt0==99 && kt1==99 && kt2==99)
				{
					a1=stoi(kelimeler[2]);
					a2=stoi(kelimeler[4]);
					variables[degiskensayaci].deger=a1 % a2;
					variables[degiskensayaci].name=tmp;
					degiskensayaci++;
					return;
				}
			
				if(kt0!=99 && kt1==99 && kt2==99)
				{
					a1=stoi(kelimeler[2]);
					a2=stoi(kelimeler[4]);
					
					variables[kt0].deger=a1 % a2;
				}
				if(kt0!=99 && kt1!=99 && kt2!=99)
				{
					a1=variables[kt1].deger;
					a2=variables[kt2].deger;
					sonuc=a1%a2;
					
				
					variables[kt0].deger=sonuc;
				}
				else if(kt0!=99)
				{
				variables[kt0].deger=sonuc;
				}
				else
				{
				variables[degiskensayaci].deger=sonuc;
				variables[degiskensayaci].name=tmp;
				degiskensayaci++;
				}
				cout<<sonuc<<endl;
			}
		
		

		
	}



	dizivar=0;
}
//printf("-------------------------------/\n");
}

void cagirici(int cagirici)
{
	//printf("Bana gelen bu-> %d\n",cagirici);
	//cout<<globalcumle[cagirici]<<endl;
	starter(globalcumle[cagirici],cagirici);

}




int main(int argc, const char * argv[])
{
	setlocale(LC_ALL,"Turkish");
    FILE * dosya;

    char cumleler [10][100];

       dosya = fopen (argv[1], "r");


   if (dosya == NULL) 
   {
   	cout<< "Hata! Dosya bulunamadý.";
   	return 0;
   }
   
   
   else {
   	for(int x=0;x<200;x++)
   	{
	   if (fgets (cumleler[x] , 100 , dosya) != NULL )
	   {
	   
	 	       //puts (cumleler[x]);
	 	       cumlesayaci++;
	   }
	}
}
	   //cout<<"SAYAC:"<<(cumlesayaci)<<endl;
	   //printf("-----------------------------------------------\n");
		string cumle[cumlesayaci];
	   for(int x=0;x<cumlesayaci;x++)
	   {
	   	for(int y=0;y<strlen(cumleler[x]);y++)
	   	{
	   		if(cumleler[x][y]=='\n')
	   		{
	   			//printf("/x/");
			}
			else
			{
			//printf("->%c<- ",cumleler[x][y]);
			cumle[x]+=cumleler[x][y];
			}
	   		
		}
		//printf("\n");
	   }
	  /*for(int x=0;x<cumlesayaci;x++)
	  {
	  	cout<<cumle[x]<<endl;
	  }*/
	  
	int h1=basla(cumle[0]);
	int h2=bitir(cumle[cumlesayaci-1]);
	if(h1==0)
	{
			cout<<"BASLA YAZMADINIZ"<<endl;
			return 0;
	}
	if(h2==0)
	{
			cout<<"BITIR YAZMADINIZ"<<endl;
			return 0;
	}

	
	for(int x=0;x<cumlesayaci;x++)
	{	
	globalcumle[x]=cumle[x];
	cumlenerede++;
	//cout<<x<<"->"<<globalcumle[x]<<endl; 
	}
	for(sayacx=1;sayacx<cumlesayaci;sayacx++)
	cagirici(sayacx);
	cout<<"\n-----------------------------------------------------------"<<endl;
	printf("DEÐÝÞKENLER:\n");
	if(degiskensayaci==0)
	printf("Degisken tanimlanmamis.");
	for(int x =0;x<degiskensayaci;x++)
	{
		cout<< variables[x].name << "> " << variables[x].deger<<endl;
	}
	
     fclose (dosya);
     
    getchar();
	getchar();
	getchar();
   return 0;
   
}
