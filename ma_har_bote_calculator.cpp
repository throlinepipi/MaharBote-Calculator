#include <iostream>
using namespace std;
int main()
{      
    char y_or_n;
    do{
       int day;
	   int month;
       int year;
		cout<<" Ma Ha Bote Calculator for you!"<<endl;
		cout<<"\n Please type your English birthday: ";
		cin>>day>>month>>year;
		
		int mm_year;
		if(month<=3)
		{mm_year=year-639;
		 cout<<"Your Myanmar Traditional Birth year is : "<<mm_year;}
		else if(month==3 && day<=15)
		{mm_year=year-639;
	    cout<<"Your Myanmar Traditional Birth year is : "<<mm_year;}
	    else
	    {mm_year=year-638;
	    cout<<"Your Myanmar Traditional Birth year is : "<<mm_year;}
	    
	    char born_day;
	    cout<<endl<<"\n Enter your born day \n 1 for Monday ; 2 for Tuesday ; 3 for Wednesday ; 4 for Thursday ; 5 for Friday ; 6 for Saturday ; 7 for Sunday: "<<endl;
	    cin>>born_day;
	    
	    if (mm_year%7==0)
	    {switch (born_day)
	    {case '1':
	     cout<<"\n You are Theik born.";
	     break;
	     case '2':
	     cout<<"\n You are Marana born.";
	     break;
	     case '3':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '4':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '5':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '6':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}
	     	
	    else if (mm_year%7==1)
	    {switch (born_day)
	    {case '2':
	     cout<<"\n You are Theik born.";
	     break;
	     case '3':
	     cout<<"\n You are Marana born.";
	     break;
	     case '4':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '5':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '6':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '7':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}
			 
		else if (mm_year%7==2)
	    {switch (born_day)
	    {case '3':
	     cout<<"\n You are Theik born.";
	     break;
	     case '4':
	     cout<<"\n You are Marana born.";
	     break;
	     case '5':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '6':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '7':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '1':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}
			 
		else if (mm_year%7==3)
	    {switch (born_day)
	    {case '4':
	     cout<<"\n You are Theik born.";
	     break;
	     case '5':
	     cout<<"\n You are Marana born.";
	     break;
	     case '6':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '7':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '1':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '2':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}
			 
		else if (mm_year%7==4)
	    {switch (born_day)
	    {case '5':
	     cout<<"\n You are Theik born.";
	     break;
	     case '6':
	     cout<<"\n You are Marana born.";
	     break;
	     case '7':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '1':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '2':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '3':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}	 
			 
		else if (mm_year%7==5)
	    {switch (born_day)
	    {case '6':
	     cout<<"\n You are Theik born.";
	     break;
	     case '7':
	     cout<<"\n You are Marana born.";
	     break;
	     case '1':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '2':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '3':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '4':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}
			 
		else
	    {switch (born_day)
	    {case '7':
	     cout<<"\n You are Theik born.";
	     break;
	     case '1':
	     cout<<"\n You are Marana born.";
	     break;
	     case '2':
	     cout<<"\n You are A Di Pa Ti born.";
	     break;
	     case '3':
	     cout<<"\n You are Yarza born.";
	     break;
	     case '4':
	     cout<<"\n You are A Htun born.";
	     break;
	     case '5':
	     cout<<"\n You are Binga born.";
	     break;
	     default:
	     	cout<<"\n You are Pu Ti born";}}	 
			 	
	    cout<<"\n------------------------------------------------------------------------------------------------------------------"<< endl;
	    cout<<endl<<"\n Do you want to calculate again?(y for YES & n for NO)"<<endl;
	    cin>>y_or_n;
		cout<<"\n\n*****************************************************************************************************************"<< endl;}
	    while(y_or_n=='y');
		
	
	
	
}
