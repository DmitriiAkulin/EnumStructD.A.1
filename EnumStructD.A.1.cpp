//EnumStructD.A.1
#include <string>
#include <iostream>

 using std::cin;
 using std::cout;
 using std::endl;

 enum class months {
	 January = 1,
	 February,
	 March, 
	 April, 
	 May, 
	 June,
	 July, 
	 August,
	 September,
	 October,
	 November,
	 December
	 };

int main()
{
   setlocale(LC_ALL, "russian");
  int month = 0;
  months month_enum;
  while (true) {
	  cout << "Введите номер месяца (0 выход): ";
	  cin >> month;

	  if(month < 0 || month > 12)cout << "Неправильный номер!\n";
	    else if(month == 0) {cout << "До свидания!\n"; return 0;}	  
          else{
              month_enum = static_cast<months>(month);
  
              switch (month_enum){
	          case months::January:  cout << "январь\n";
	           break;
	          case months::February: cout <<"февраль" << endl;
		       break;
	          case months::March:    cout << "март" << endl;
		       break;
	           case months::April:    cout <<  "апрель" << endl;
		       break;
	          case months::May:      cout << "май" << endl;
		       break;
	           case months::June:     cout << "июнь" << endl;
		       break;
	          case months::July:     cout << "июль" << endl;
		       break;
	          case months::August:   cout << "август" << endl;
		       break;
	          case months::September:cout << "сентябрь" << endl;
		       break;
	          case months::October:  cout << "октябрь" << endl;
		       break;
	          case months::November: cout << "ноябрь" << endl;
		       break;
	          case months::December: cout << "декабрь" << endl;
		       break;
		   }
       }
   }   
   return 0;
}


