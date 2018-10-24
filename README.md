# month_name
#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */

    #define OS_Windows 0

#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or 64 bit Windows systems */

    #define OS_Windows 1

#endif

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int month_number,real_month_number;
char bufor[ 1024 ];
char data[ 255 ];
fstream file;
string language_name, polish_name[12], german_name[12];
string polish_months[12] = {"Styczeä","Luty","Marzec","Kwiecieä","Maj","Czerwiec","Lipiec","Sierpieä","Wrzesieä","Pa«dziernik","Listopad","Grudzieä"};
string german_months[12] = {"Januar","Februar","M„rz","April","Mai","Juni","Juli","August","September","Oktober","November","Dezember"};
string english_months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

string linux_polish_months[12] = {"Styczeń","Luty","Marzec","Kwiecień","Maj","Czerwiec","Lipiec","Sierpień","Wrzesień","Październik","Listopad","Grudzień"};
string linux_german_months[12] = {"Januar","Februar","März","April","Mai","Juni","Juli","August","September","Oktober","November","Dezember"};

void fun()
{
	file.open( "conf.txt", ios::in );
if( file.good() == true )
{
	file.getline( data, 255 ); //reading first line 

	file.getline( bufor, 255 ); //reading second line 

	language_name = data;
	
	month_number = stoi(bufor);

	real_month_number=month_number%12;

	if(language_name=="polski" && month_number<12)
	{
	cout << polish_months[real_month_number-1]<< endl;
	}
	else if(language_name=="polski" && month_number>=12)
	{
	cout << polish_months[real_month_number]<< endl;
	}
	else if(language_name=="niemiecki" && month_number<12)
	{
	cout << german_months[real_month_number-1]<< endl;
	}
	else if(language_name=="niemiecki" && month_number>=12)
	{
	cout <<  german_months[real_month_number]<< endl;
	}
	else if(language_name=="angielski" && month_number<12)
	{
	cout <<  english_months[real_month_number-1]<< endl;
	}
	else if(language_name=="angielski" && month_number>=12)
	{
	cout <<  english_months[real_month_number]<< endl;
	}
   
	file.close();
	} else cout << "Dostep do pliku zostal zabroniony!" << endl;
}

int main()
{  

		if(OS_Windows)
	{
		fun();
		system("PAUSE");
	}
	   else if(!OS_Windows) // if OS is unix

	   {
		  polish_months[real_month_number-1] = linux_polish_months[real_month_number-1];
		  polish_months[real_month_number] = linux_polish_months[real_month_number];
		  german_months[real_month_number-1] = linux_german_months[real_month_number-1];
		  german_months[real_month_number] = linux_german_months[real_month_number];
		  fun();
		}
	
	
    return 0;
}
