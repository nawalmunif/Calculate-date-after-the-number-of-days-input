#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class date2020{
	public :
			int d;
			int m;
			int days;
			
			int DATE;
			int MONTH;
			int DAY;
			
			int initial_date;
			int initial_month;
			
			int final_date;
			int final_month;
			
			string initial_day;
			string final_day;
			
			//DATE=d;
		//	date2020.m=MONTH;
		//	date2020.days=DAY;
			
			//-----------decalaration----------------//
			setDate(); //calls setDate method
			
			void plusday(int days); //plusday function
			
			void print(); //calls print method
			
			void getWeekDay();
		
		
			
			
    public:
    date2020(){ //default constructor
    m = 1;
    d = 1;
    cout <<  " " <<endl;
    cout << " :: The default date is Wednesday,1st January,2020. ::"<<endl ;
    cout <<  " " <<endl;
    return ;
    }
    
    public://one argument constructor
	date2020(int dd){
    		d = dd;
    		m=1;
    		
    		return ;
    	}
    	
    public:
    date2020(int dd, int mm){
    	d = dd;
    	m= mm;
    	return ;
	}
};
	
	void setDate(int day, int mon){ //checks if the entered date is valid w.r.t 2020 calender
		
		if( 0>mon || mon > 12 ){
			cout << " :: Invalid date entered! ::" << endl;
		}
		else if(0>day ||day>31){
			cout << " :: Invalid date entered! ::" << endl;
		}
		else if(mon == 2){
			if(0>day || day>29){
				cout << " :: Invalid date entered! ::" << endl;
			}
		}
		else if(mon==4 || mon==6 || mon==9 || mon==11 ){
			if(0>day || day>30){
				cout << " :: Invalid date entered! ::" << endl;
			}
		}
		
		return ;
		
		
	}


void date2020::plusday(int days){
	MONTH = m;
	DAY = days;
	DATE =d;
	
	if(0>days || days>100){
		cout << " :: No. of days too big! ::" << endl;
		}
		
	//case I: for date of january
	else if(m==1) {
	
	
	int janDays;
	janDays = d + days;
	
	if(m==1 && janDays> 31){
		m=2;
		int febDays;
		febDays=janDays-29;
		
		if(febDays>29){
			m=3;
			int marchDays;
			marchDays=febDays-31;
			
			if(marchDays>31){
				int aprilDays;
				m=4;
				aprilDays=marchDays-30;
				
				if(aprilDays>30){
					int mayDays;
					mayDays=aprilDays-31;
					d=mayDays;
				}
				else{
				d=aprilDays;
				}
			}
			else{
			d=marchDays;
			}
		}
		else{
			d=febDays;
		}
}
	else{ d= janDays;
	//print();
	}
}

//case II; for feb
else if(m==2){
	int FebDays;
	FebDays=d+days;
	
	if(FebDays>29){
		m=3;
		int MarchDays;
		MarchDays=FebDays-31;
		
		if(MarchDays>31){
			m=4;
			int AprilDays;
			AprilDays=MarchDays-30;
			
			if(AprilDays>30){
				m=5;
				int MayDays;
				MayDays = AprilDays-31;
				
				if(MayDays>31){
					m=6;
					int JuneDays;
					JuneDays=MayDays-30;
					d=JuneDays;
				}
				else{
					d=MayDays;
				}
				
			}
			else{
				d=AprilDays;
			}
		}
		else{
			d=MarchDays;
		}
		
	}
	else{
		d=FebDays;
	}
}

//case III: for march
else if(m==3){
	
	int march;
	march=d+days;
	
	if(march>31){
		m=4;
		int april;
		april=march-30;
		
		if(april>30){
			m=5;
			int may;
			may=april-31;
			
			if(may>31){
				m=6;
				int june;
				june = may-30;
				
				if(june>30){
					m=7;
					int july;
					july=june-31;
					d=july;
				}
				else{
					d=june;
				}
				
			}
			else{
				d=may;
			}
		}
		else{
			d=april;
		}
		
	}
	else{
		d=march;
	}
	
}

//case IV: for april
else if(m==4){
	
	
	int APRIL;
	APRIL=d+days;
	
	if(APRIL>30){
		m=5;
		int MAY;
		MAY=APRIL-31;
		
		if(MAY>31){
			m=6;
			int JUNE;
			JUNE=MAY-30;
			
			if(JUNE>30){
				m=7;
				int JULY;
				JULY = JUNE-31;
				
				if(JULY>31){
					m=8;
					int AUGUST;
					AUGUST=JULY-31;
					d=AUGUST;
				}
				else{
					d=JULY;
				}
				
			}
			else{
				d=JUNE;
			}
		}
		else{
			d=MAY;
		}
		
	}
	else{
		d=APRIL;
	}
	
	
}

//case V:for may
else if(m==5){
	
	int MAYdays;
	MAYdays=d+days;
	
	if(MAYdays>31){
		m=6;
		int JUNEdays;
		JUNEdays=MAYdays-30;
		
		if(JUNEdays>30){
			m=7;
			int JULYdays;
			JULYdays=JUNEdays-31;
			
			if(JULYdays>31){
				m=8;
				int AUGUSTdays;
				AUGUSTdays = JULYdays-31;
				
				if(AUGUSTdays>31){
					m=9;
					int SEPTdays;
					SEPTdays=AUGUSTdays-30;
					d=SEPTdays;
				}
				else{
					d=AUGUSTdays;
				}	
			}
			else{
				d=JULYdays;
			}
		}
		else{
			d=JUNEdays;
		}
		
	}
	else{
		d=MAYdays;
	}
	
	
}

//case VI :for june
else if(m==6){
	
	int June;
	June=d+days;
	
	if(June>30){
		m=7;
		int July;
		July=June-31;
		
		if(July>31){
			m=8;
			int Aug;
			Aug=July-31;
			
			if(Aug>31){
				m=9;
				int Sept;
				Sept = Aug-30;
				
				if(Sept>30){
					m=10;
					int Oct;
					Oct=Sept-31;
					d=Oct;
				}
				else{
					d=Sept;
				}	
			}
			else{
				d=Aug;
			}
		}
		else{
			d=July;
		}
		
	}
	else{
		d=June;
	}
	
	
}

//case VII :for july
else if(m==7){
	
	int july;
	july=d+days;
	
	if(july>31){
		m=8;
		int aug;
		aug=july-31;
		
		if(aug>31){
			m=9;
			int sep;
			sep=aug-30;
			
			if(sep>30){
				m=10;
				int oct;
				oct = sep-31;
				
				if(oct>31){
					m=11;
					int nov;
					nov=oct-30;
					d=nov;
				}
				else{
					d=oct;
				}	
			}
			else{
				d=sep;
			}
		}
		else{
			d=aug;
		}
		
	}
	else{
		d=july;
	}
	
	
}

//case VIII :for august
else if(m==8){
	
	int AUG;
	AUG=d+days;
	
	if(AUG>31){
		m=9;
		int SEPTEMBER;
		SEPTEMBER=AUG-30;
		
		if(SEPTEMBER>30){
			m=10;
			int OCTOBER;
			OCTOBER=SEPTEMBER-31;
			
			if(OCTOBER>31){
				m=11;
				int NOVEMBER;
				NOVEMBER = OCTOBER-30;
				
				if(NOVEMBER>30){
					m=12;
					int DECEMBER;
					DECEMBER=NOVEMBER-31;
					d=DECEMBER;
				}
				else{
					d=NOVEMBER;
				}	
			}
			else{
				d=OCTOBER;
			}
		}
		else{
			d=SEPTEMBER;
		}
		
	}
	else{
		d=AUG;
	}
	
	
}


//case IX :for september
else if(m==9){
	if(d>24){
			cout << " :: No. of days too big to be added in the date for the month of september! ::" << endl;
		
	}
	else{
	
	int SepT;
	SepT=d+days;
	
	if(SepT>30){
		m=10;
		int OcT;
		OcT=SepT-31;
		
		if(OcT>31){
			m=11;
			int NoV;
			NoV=OcT-30;
			
			if(NoV>31){
				m=12;
				int DeC;
				DeC = NoV-31;
				d=DeC;
				}
				else{
					d=NoV;
				}	
			}
			else{
				d=OcT;
			}
		}
		else{
			d=SepT;
		}
	}
		
	}
	
	
//case X :for 0ctober
else if(m==10){
	if(days>61){
		if(d>31){
		
		}	cout << " :: No. of days too big to be added in the date for the month of october! ::" << endl;
		
}
	else{
	
	int oct;
	oct=d+days;
	
	if(oct>31){
		m=11;
		int nov;
		nov=oct-30;
		
		if(nov>30){
			m=12;
			int dec;
			dec=nov-31;
			d=dec;
			
			}
			else{
				d=nov;
			}
		}
		else{
			d=oct;
		}
	}
		
	}
	
//case XI :for November
else if(m==11){
	if(days>30 && d>30){
		
		cout << " :: No. of days too big to be added in the date for the month of november! ::" << endl;
	
	}
	else{
	
	int NOVEM;
	NOVEM=d+days;
	
	if(NOVEM>30){
		m=12;
		int DECEM;
		DECEM=NOVEM-31;
		d=DECEM;
			
			}
		
		else{
			d=NOVEM;
		}
	}
		
	}
//case XII :for December
else if(m==12)
{
	int decemberDAYS;
	decemberDAYS=d+days;
	
	if(days>30){
		cout << " :: No. of days too big to be added in the date for the month of december! ::" << endl;
	}

	
	else{
	
	d=decemberDAYS;
	//cout << decemberDAYS <<"of"<< m<<endl;
		}
	
}


	
	return ;
}
	//cout << added<<endl;




void date2020::print(){	

	getWeekDay();
	
    cout <<  " " <<endl;
	//CASE I : if the entered date is of january	
	if(MONTH==1){
		
		if(m==1){
		
		std::cout << DAY << " days after, " << initial_day << ","<< DATE<< " January 2020 is " << final_day <<", "<<d <<" JANUARY 2020" << endl; 
		}
	
		else if(m==2){
			std::cout << DAY << " days after, " << initial_day << "," << DATE<< " January 2020 is " <<final_day<<", "<<d <<"  February 2020" << endl; 
		
		}
		else if(m==3){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " January 2020 is " <<final_day<<", "<<d <<"  March 2020" << endl; 
		
		}
		else if(m==4){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " January 2020 is " <<final_day<<", "<<d <<"  April 2020" << endl; 
		
		}
		else if(m==5){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " January 2020 is " <<final_day<<", "<<d <<"  May 2020" << endl; 
		
		}
	}
	
	//case II: if the enetered date is of february
	else if(MONTH ==2){
	
		if(m==2){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " February 2020 is " <<final_day<<", "<<d <<"  February 2020" << endl; 
		
		}
		else if(m==3){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " February 2020 is " <<final_day<<", "<<d <<"  March 2020" << endl; 
		
		}
		else if(m==4){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " February 2020 is " <<final_day<<", "<<d <<"  April 2020" << endl; 
		
		}
		else if(m==5){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< "  February 2020 is " <<final_day<<", "<<d <<"  May 2020" << endl; 
		
		}
		else if(m==6){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " February 2020 is " <<final_day<<", "<<d <<"  June 2020" << endl; 
		
		}
	}
	
	//case III: if the entered dte is of march
	else if(MONTH ==3){
	
		if(m==3){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " March 2020 is " <<final_day<<", "<<d <<"  March 2020" << endl; 
		
		}
		else if(m==4){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MARCH 2020 is " <<final_day<<", "<<d <<"  APRIL 2020" << endl; 
		
		}
		else if(m==5){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MARCH 2020 is " <<final_day<<", "<<d <<"  MAY 2020" << endl; 
		
		}
		else if(m==6){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< "  MARCH 2020 is " <<final_day<<", "<<d <<"  JUNE 2020" << endl; 
		
		}
		else if(m==7){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MARCH 2020 is " <<final_day<<", "<<d <<"  JULY 2020" << endl; 
		
		}
	}
		
		//case IV: if the entered date is of APRIL
	else if(MONTH ==4){
	
		if(m==4){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " APRIL 2020 is " <<final_day<<", "<<d <<"  APRIL 2020" << endl; 
		
		}
		else if(m==5){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " APRIL 2020 is " <<final_day<<", "<<d <<"  MAY 2020" << endl; 
		
		}
		else if(m==6){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " APRIL 2020 is " <<final_day<<", "<<d <<"  JUNE 2020" << endl; 
		
		}
		else if(m==7){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " APRIL  2020 is " <<final_day<<", "<<d <<"  JULY 2020" << endl; 
		
		}
		else if(m==8){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " APRIL 2020 is " <<final_day<<", "<<d <<"  AUGUST 2020" << endl; 
		
		}
	}
	
		//case V: if the entered date is of MAY
	else if(MONTH ==5){
	
		if(m==5){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MAY 2020 is " <<final_day<<", "<<d <<"  APRIL 2020" << endl; 
		
		}
		else if(m==6){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MAY 2020 is " <<final_day<<", "<<d <<"  JUNE 2020" << endl; 
		
		}
		else if(m==7){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MAY 2020 is " <<final_day<<", "<<d <<"  JULY 2020" << endl; 
		
		}
		else if(m==8){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MAY  2020 is " <<final_day<<", "<<d <<"  AUGUST 2020" << endl; 
		
		}
		else if(m==9){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " MAY 2020 is " <<final_day<<", "<<d <<"  SEPTEMBER 2020" << endl; 
		
		}
	}
	
	//case VI: if the entered date is of JUNE
	else if(MONTH ==6){
	
		if(m==6){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JUNE 2020 is " <<final_day<<", "<<d <<"  JUNE 2020" << endl; 
		
		}
		else if(m==7){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JUNE 2020 is " <<final_day<<", "<<d <<"  JULY 2020" << endl; 
		
		}
		else if(m==8){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JUNE 2020 is " <<final_day<<", "<<d <<"  AUGUST 2020" << endl; 
		
		}
		else if(m==9){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JUNE  2020 is " << final_day<<"," <<d <<"  SEPTEMBER 2020" << endl; 
		
		}
		else if(m==10){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JUNE 2020 is " <<final_day<<", "<<d <<"  OCTOBER 2020" << endl; 
		
		}
	}
	
		//case VIi: if the entered date is of JULY
	else if(MONTH ==7){
	
		if(m==7){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JULY 2020 is " <<final_day<<", "<<d <<"  JULY 2020" << endl; 
		
		}
		else if(m==8){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JULY 2020 is " <<final_day<<", "<<d <<"  AUGUST 2020" << endl; 
		
		}
		else if(m==9){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JULY 2020 is " <<final_day<<", "<<d <<"  SEPTEMBER 2020" << endl; 
		
		}
		else if(m==10){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JULY  2020 is " <<final_day<<", "<<d <<"  OCTOBER 2020" << endl; 
		
		}
		else if(m==11){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " JULY 2020 is " <<final_day<<", "<<d <<"  NOVEMBER 2020" << endl; 
		
		}
	}
	
	
	//case VIII: if the entered date is of AUGUST
	else if(MONTH ==8){
	
		if(m==8){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " AUGUST 2020 is " <<final_day<<", "<<d <<"  AUGUST 2020" << endl; 
		
		}
		else if(m==9){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " AUGUST 2020 is " <<final_day<<", "<<d <<"  SEPTEMBER 2020" << endl; 
		
		}
		else if(m==10){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " AUGUST 2020 is " <<final_day<<", "<<d <<"  OCTOBER 2020" << endl; 
		
		}
		else if(m==11){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " AUGUST  2020 is " <<final_day<<", "<<d <<"  NOVEMBER 2020" << endl; 
		
		}
		else if(m==12){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " AUGUST 2020 is " <<final_day<<", "<<d <<"  DECEMBER 2020" << endl; 
		
		}
	}
	
	//case IX: if the entered date is of SEPTEMBER
	else if(MONTH ==9){
	
		
		if(m==9){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " SEPTEMBER 2020 is " <<final_day<<", "<<d <<"  SEPTEMBER 2020" << endl; 
		
		}
		else if(m==10){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " SEPTEMBER 2020 is " <<final_day<<", "<<d <<"  OCTOBER 2020" << endl; 
		
		}
		else if(m==11){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " SEPTEMBER  2020 is " <<final_day<<", "<<d <<"  NOVEMBER 2020" << endl; 
		
		}
		else if(m==12){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " SEPTEMBER 2020 is " <<final_day<<", "<<d <<"  DECEMBER 2020" << endl; 
		
		}
	}
	
	//case X: if the entered date is of OCTOBER
	else if(MONTH ==10){
	
		if(m==10){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " OCTOBER 2020 is " <<final_day<<", "<<d <<"  OCTOBER 2020" << endl; 
		
		}
		else if(m==11){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " OCTOBER  2020 is " <<final_day<<", "<<d <<"  NOVEMBER 2020" << endl; 
		
		}
		else if(m==12){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " OCTOBER 2020 is " <<final_day<<", " <<d <<"  DECEMBER 2020" << endl; 
		
		}
	}
	
	//case Xi: if the entered date is of NOVEMBER
	else if(MONTH ==11){
	
		if(m==11){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " NOVEMBER  2020 is " <<final_day<<", "  <<d <<"  NOVEMBER 2020" << endl; 
		
		}
		else if(m==12){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " NOVEMBER 2020 is " <<final_day<<", " <<d <<"  DECEMBER 2020" << endl; 
		
		}
	}
	
	//case Xii: if the entered date is of DECEMBER
	else if(MONTH ==12){
	if(m==12){
			std::cout << DAY << " days after, " << initial_day << ","  << DATE<< " DECEMBER 2020 is " <<final_day<<", "<<d <<"  DECEMBER 2020" << endl; 
		
		}
	}
return;
}

void date2020::getWeekDay(){
	
	const char *Names[] = {"Sunday","Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
	
	
	initial_date=DATE;
	initial_month=MONTH;
	
	int initial_value =  //formula to get weekday number                                                   
		DATE                                                      
		+ ((153 * (MONTH + 12 * ((14 - MONTH) / 12) - 3) + 2) / 5) 
		+ (365 * (2020 + 4800 - ((14 - MONTH) / 12)))
		+ ((2020 + 4800 - ((14 - MONTH) / 12)) / 4)
		- ((2020 + 4800 - ((14 - MONTH) / 12)) / 100)
		+ ((2020 + 4800 - ((14 - MONTH) / 12)) / 400)
		- 32045;
	
	int initial_number_of_day = (initial_value+1)%7 ;
	initial_day=Names[initial_number_of_day];
	
	
	final_date=d;
	final_month=m;
	
	int final_value =                                                     
		d                                                     
		+ ((153 * (m + 12 * ((14 - m) / 12) - 3) + 2) / 5) 
		+ (365 * (2020 + 4800 - ((14 - m) / 12)))
		+ ((2020 + 4800 - ((14 - m) / 12)) / 4)
		- ((2020 + 4800 - ((14 - m) / 12)) / 100)
		+ ((2020 + 4800 - ((14 - m) / 12)) / 400)
		- 32045;
	
		int final_number_of_day = (final_value+1)%7 ;
		final_day=Names[final_number_of_day];
	
	return;
}


int main()
{
	cout << " :: Welcome to Week CALCULATOR for the year 2020! ::" << endl; 
	
	cout <<  " " <<endl;
	
	cout <<  " Enter date to be calculated: " <<endl;
	date2020 date;
    cin >> date.d >> date.m >> date.days;
    //date.d=date.DATE;
    //date.m=date.MONTH;
    //date.days=date.DAY;
    int x = date.d;
    int y = date.m;
    int z= date.days;
    
     setDate(date.d, date.m);
     
    
    
    
    	if(date.d==0 && date.m==0){
				date2020();
			}
			else if (date.m ==0){
				date.m=1;
				date2020(date.d);
				date.getWeekDay();
				//setDate(date.d, date.m);
				date.plusday(date.days);
   				date.print();
			}
			else{
				date.getWeekDay();
				date2020(date.d,date.m);
				date.plusday(date.days);
   				date.print();
			}
		
}
