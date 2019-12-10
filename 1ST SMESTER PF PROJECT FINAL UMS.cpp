#include <iostream>
#include<iomanip>
using namespace std;

struct stumarks      // marks data structure body
{
string name;
int roll,Q1,A1,MID,Q2,A2,FINAL;
};

struct attendence     //attendence data structure body
{
int roll;
char status;	
};

struct studentdata        //student data structure body
{
	string name,fname,program;
	int rollnum;
	
	char gender;
	string date,address,formNumber;
};

void screenheader();           // welcome screen function declaration
void welcomenote();            // welcome note function declaration
void load();                  //loading function declaration
void nextline();              //line space function declaration
void Attendence();            //attendence function declaration
void Teacher();              //teacher function declaration
void Data();                 //student data function declaration
void Admin();                //admin function declaration
void classTimeT();          //teachers time table function declaration
void studentsMarks();
void classTimeS();          //student time table.
void marks2();
void student_portal();


int main()                      // main  function body start
{
    
char op,op2;
again:
screenheader();
welcomenote();

cout<<"1-Enter 'T' for Teacher Portal."<<endl;
cout<<"2-Enter 'S' for Student Portal."<<endl;
cout<<"3-Enter 'A' for Admin Portal."<<endl;
cout<<"4-Enter 'E' for exit."<<endl;

cout<<"You Select:";

cin>>op;
if(op=='T')
{
	load();
	//system("CLS");
	Teacher();
}

else
if(op=='S')
{
	system("CLS");
    student_portal();
}

else
if(op=='A')
{
	Admin();
}
if(op=='E')
{
	system("CLS");
	cout<<"1-Enter 'Y' for exit."<<endl;
	cout<<"2-Enter 'N' for Home Page."<<endl;
	cout<<"You Select:";
	cin>>op2;
	
	if(op2=='Y')
	{
		system("CLS");
		cout<<" "<<setw(117)<<"Thank you..........";
		exit(0);
	}
	else
		if(op2=='N')
	{
		system("CLS");
		goto again;
	}
	
}
	
	

	return 0;
} // main function body close

// functions bodies start

// welcome screen function body
 void screenheader()                    
 {
 	
   cout<<"\n"<<setw(118)<<"::::::::::::::::::::::::::::::::::::::::::::::::::::";
   cout<<"\n"<<setw(118)<<"::                                                ::";
   cout<<"\n"<<setw(118)<<"::      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @               WELCOME             @     ::";
   cout<<"\n"<<setw(118)<<"::      @                 TO                @     ::";
   cout<<"\n"<<setw(118)<<"::      @         SUPERIOR UNIVERSITY       @     ::";
   cout<<"\n"<<setw(118)<<"::      @          MANAGEMENT SYSTEM        @     ::";
   cout<<"\n"<<setw(118)<<"::      @                 FOR               @     ::";
   cout<<"\n"<<setw(118)<<"::      @             CLASS BSCS-1B         @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(118)<<"::      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n"<<setw(118)<<"::                                                ::";
   cout<<"\n"<<setw(124)<<"::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n\n\n";  
   //return 0;
   
}

// welcome note function body 
void welcomenote()
{

cout<<"Assalam-u-Alaikum! Welcome to Superior University Management System. In this system respected\nteachers can add student's attendances their marks and see their class time table and location.";
cout<<"\nStudents can see their marks, percentage, GPA ,CGPA,  class time table and location."<<endl;

cout<<"\nKindly share your feedback with us it's very important for us for further improvement.\nHope you like......"<<endl<<endl;
//return 0;
	
}
void load()         //loading function
{
	for(int x=1;x<=100;x++)
	{
		cout<<" "<<setw(118)<<"LOADING............."<<x<<"%";
		system("cls");
	}
	
}

void Attendence()        //Attendence portal function
{
	int numStu=4; // numStu value change
    string date;
    
    attendence stu[numStu];
	load();
	
	cout<<" "<<setw(118)<<"Your Class Attendence start from Roll#57 to Roll#110."<<endl<<endl;
	cout<<"For Present students select 'P' and for Absent select  'A'."<<endl;
	
	cout<<"\n"<<setw(96)<<"Enter Class Date (DD/MM/YYYY):";
	cin.ignore();
	getline(cin,date);
	
	int row=0;
	while(row<numStu)
	{
		reproll:	
		cout<<"\n"<<"Enter Student Roll Number:";
		cin>>stu[row].roll;
		
		if(stu[row].roll<=110&&stu[row].roll>=57)
		{
		cout<<"\n"<<"Enter his/her Atendence status:";
		cin>>stu[row].status;
    	}
    	else 
        {
		cout<<" "<<setw(110)<<"\aYou Enter wrong Roll Number.\n";
        goto reproll;
        
		}
		
		row++;
		cout<<"\n-----------------------------------------------------------"<<endl;
		system("CLS");
		
	}
}

void Teacher()        //Teacher portal function
{   int cho,numStu=4,existed=0;                //numStu value change    
    studentdata student[numStu];
    
    attendence stu[numStu];
    again:
    	
	nextline();
	cout<<"\n"<<setw(123)<<"1-Enter '1' for Entering student's Attendence."<<endl;
	
    cout<<"\n"<<setw(118)<<"2-Enter '2' for Entering student's Marks."<<endl;
    cout<<"\n"<<setw(110)<<"3-Enter '3' for Class Time Table."<<endl;
    
    cout<<"\n"<<setw(98)<<"4-Enter '4' for exit."<<endl<<endl;
    cout<<" "<<setw(87)<<"You Select:";

cin>>cho;
if(cho==1)
{
Attendence() ;
}
else
if(cho==2)
{
 studentsMarks();
}
if(cho==3)
{
 classTimeT();
}

else
if(cho==4)
{
	char op2;
	system("CLS");
	
	cout<<"1-Enter 'Y' for exit."<<endl;
	cout<<"2-Enter 'N' for Teacher's Page."<<endl;
	
	cout<<"You Select:";
	cin>>op2;
	
	if(op2=='Y')
	{
		system("CLS");
		cout<<" "<<setw(117)<<"Thank you..........";
		exit(0);
	}
	else
	{
		if(op2=='N')
    	{
		system("CLS");
		goto again;
    	}
   }	
}

	
}
void nextline()
{
	for(int w=1;w<=15;w++)
	cout<<endl;	

}

void Data()     //student data function
{
	load();
	int n,row=0;
	int existed=0;
	
	cout<<"HOW MANY STUDENT'S DATA YOU WANT TO ENETER:\t";
	cin>>n;
	studentdata student[n];
	cout<<"Roll Number should be between 57 to 110."<<endl;
		
	while(row<n)
	{
		reproll:
			
		cout<<"Enter Student's Roll Number:\t";
		cin>>student[row].rollnum;
		
		if(student[row].rollnum<=110&&student[row].rollnum>=57)
		{
			
		for(int x=0;x<=n;x++)
		{
			for(int j=x+1;j<n;j++)
			{
	    	if(student[x].rollnum==student[j].rollnum)
	    	existed++;
		    }
		}
		cin.ignore();
		if(existed==0)
		{
		cout<<"Enter Student's Name:\t\t";
		getline(cin,student[row].name); 
		
		cout<<"Enter Student's Father Name:\t";
		getline(cin,student[row].fname); 
		
		cout<<"Enter Student's Program:\t";
		getline(cin,student[row].program); 
	
		cout<<"Enter Student's Joining Date:\t";
		getline(cin,student[row].date); 
		
		cout<<"Enter Student's Permanent Address:";
		getline(cin,student[row].address);
		
	    cout<<"Enter Student's Gender:\t\t";
    	cin.get(student[row].gender); 
        }
        else
        {
		cout<<"YOU CAN ENTER ROLL NUMBER WHICH IS ENTERED PREVOUSLY.\n";
		existed=0;
        goto reproll;
        
		}
		}
		
        else
        {
        	
        cout<<"Roll Number should be between 57 to 110."<<endl;
        goto reproll;
        
        }
    	
		cout<<"--------------------------------------------------------------------------\n";
		system("CLS");
		row++;
	}

}

void Admin()         // admin function
{
	int cho;
	load();
	
	nextline();
	again:
		
	cout<<"\n"<<setw(104)<<"1-Enter '1' for Entering Students Record."<<endl;
	cout<<"\n"<<setw(84)<<"2-Enter '2' for Exit."<<endl;
	
	cout<<"\n"<<setw(74)<<"You Select:";
	cin>>cho;
		
	if(cho==1)
	{
		Data();
	}
	else
	if(cho==2)
	{
	char op2;
	system("CLS");
	
	cout<<"1-Enter 'Y' for exit."<<endl;
	cout<<"2-Enter 'N' for Admin Page."<<endl;
	
	cout<<"You Select:";
	cin>>op2;
	
	if(op2=='Y')
	{
		system("CLS");
		cout<<" "<<setw(117)<<"Thank you..........";
		exit(0);
	}
	else
	{
		if(op2=='N')
    	{
		system("CLS");
		goto again;
    	}
   }
		
		
	}
}

void classTimeT()   // teacher time table function
{
	int cho;
	string nameT;
	load();
	nextline();
	
	cout<<"\n"<<setw(107)<<"Please Provide Your Name:";
	cin.ignore();
	getline(cin,nameT);
	
	cout<<"\n"<<setw(107)<<"Select Your Subject code:"<<endl;
	cout<<"\n"<<setw(106)<<"Select '1' for CALCULUS."<<endl;
	
	cout<<"\n"<<setw(123)<<"Select '2' for INTRODUCTION TO COMPUTING."<<endl;
	cout<<"\n"<<setw(124)<<"Select '3' for PROGRAMMING FUNDAMENTALS 1."<<endl;
	
	cout<<"\n"<<setw(119)<<"Select '4' for ISLAMIYAT/PAK.STUDIES."<<endl;
	cout<<"\n"<<setw(118)<<"Select '5' for FUNCTIONAL ENGLISH 1."<<endl;
	
	cout<<"\n"<<setw(115)<<"Select '6' for BASIC ELECTRONICS."<<endl;
	cout<<"\n"<<setw(93)<<"You Select:";
	
	cin>>cho; cout<<endl;
	load();
	if(cho==1)
	{
		cout<<"\nClass:Twice a week."<<endl;
		cout<<"\nSubject:CALCULUS."<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay1:TUESDAY."<<endl;
		
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2 ."<<endl;
	    
		cout<<"\nDay2:WEDNESDAY."<<endl;
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
		
	}
	else
	if(cho==2)
	{
		cout<<"\nClass:Twice a week."<<endl;
		cout<<"\nSubject:INTRODUCTION TO COMPUTING."<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay1:TUESDAY."<<endl;
		
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
		cout<<"\nDay2:FRIDAY."<<endl;
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
	else
	if(cho==3)
	{
		cout<<"\nClass:Twice a week."<<endl;
		cout<<"\nSubject:PROGRAMMING FUNDAMENTALS 1"<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay1:MONDAY."<<endl;
		
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
		cout<<"\nDay2:WEDNESDAY."<<endl;
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
	else
	if(cho==4)
	{
		cout<<"\nClass:Twice a week."<<endl;
		cout<<"\nSubject:ISLAMIYAT/PAK.STUDIES."<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay1:MONDAY."<<endl;
		
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
		cout<<"\nDay2:FRIDAY."<<endl;
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
	else
	if(cho==5)
	{
		cout<<"\nClass:Once a week."<<endl;
		cout<<"\nSubject:FUNCTIONAL ENGLISH 1"<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay:THURSDAY."<<endl;
		
		cout<<"\nTime:8:00 to 11:00 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
	else
	if(cho==6)
	{
		cout<<"\nClass:Once a week."<<endl;
		cout<<"\nSubject:BASIC ELECTRONICS."<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay:THURSDAY."<<endl;
		
		cout<<"\nTime:11:00 to 2:00 Pm."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
}

void studentsMarks()
{
	int numStu=2,cho,row=0,ob=0;             // change value of numStu
	stumarks marks[numStu];
	string nameT;
	repeat:
	load();
	nextline();
	
	cout<<"\n"<<setw(107)<<"Please Provide Your Name:";
	cin.ignore();
	getline(cin,nameT);
	
	cout<<"\n"<<setw(107)<<"Select Your Subject code:"<<endl;
	cout<<"\n"<<setw(106)<<"Select '1' for CALCULUS."<<endl;
	
	cout<<"\n"<<setw(123)<<"Select '2' for INTRODUCTION TO COMPUTING."<<endl;
	cout<<"\n"<<setw(124)<<"Select '3' for PROGRAMMING FUNDAMENTALS 1."<<endl;
	
	cout<<"\n"<<setw(119)<<"Select '4' for ISLAMIYAT/PAK.STUDIES."<<endl;
	cout<<"\n"<<setw(118)<<"Select '5' for FUNCTIONAL ENGLISH 1."<<endl;
	
	cout<<"\n"<<setw(115)<<"Select '6' for BASIC ELECTRONICS."<<endl;
	cout<<"\n"<<setw(93)<<"You Select:";
	
	cin>>cho; cout<<endl;
	system("CLS");

	
		
	if(cho==1)
	{
		cout<<"\n"<<setw(107)<<"Hi! Sir Abdul Manan."<<endl;
		
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll1again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q11again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q11again;
		}
	    
	    q21again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q21again;
		}
	    
	    a11again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a11again;
		}
	    
	    a21again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a21again;
		}
	    
	    mid1again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid1again;
		}
	    
	    final1again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final1again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll1again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else
    if(cho==2)
	{
		cout<<"\n"<<setw(107)<<"Hi! Mam Rabia Younas."<<endl;
		
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll2again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q12again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q12again;
		}
	    
	    q22again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q22again;
		}
	    
	    a12again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a12again;
		}
	    
	    a22again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a22again;
		}
	    
	    mid2again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid2again;
		}
	    
	    final2again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final2again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll2again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else	
	if(cho==3)
	{
		cout<<"\n"<<setw(107)<<"Hi! Sir Farrukh Ehsan."<<endl;
		
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll3again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q13again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q13again;
		}
	    
	    q23again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q23again;
		}
	    
	    a13again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a13again;
		}
	    
	    a23again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a23again;
		}
	    
	    mid3again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid3again;
		}
	    
	    final3again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final3again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll3again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else	
	if(cho==4)
	{
		cout<<"\n"<<setw(107)<<"Hi! Sir Haji Usman."<<endl;
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll4again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q14again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q14again;
		}
	    
	    q24again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q24again;
		}
	    
	    a14again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a14again;
		}
	    
	    a24again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a24again;
		}
	    
	    mid4again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid4again;
		}
	    
	    final4again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final4again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll4again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else
	if(cho==5)
	{
		cout<<"\n"<<setw(107)<<"Hi! Mam Anila."<<endl;
		
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll5again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q15again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q15again;
		}
	    
	    q25again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q25again;
		}
	    
	    a15again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a15again;
		}
	    
	    a25again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a25again;
		}
	    
	    mid5again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid5again;
		}
	    
	    final5again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final5again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll5again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else
	if(cho==6)
	{
		cout<<"\n"<<setw(107)<<"Hi! Sir SM Junaid Zadii."<<endl;
		
		char ch;
		while(row<numStu)
		{
		cout<<"\n\nEnter Student Name."<<endl;
		cout<<"You Enter:";
		cin.ignore();
		getline(cin,marks[row].name);

		roll6again:
	    cout<<"\n\nEnter Student Roll Number."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].roll;
	    if(marks[row].roll>=57&&marks[row].roll<=110)
	    {
	    		    
	    q16again:
	    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q1;
	    if(marks[row].Q1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q16again;
		}
	    
	    q26again:
	    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].Q2;
	    if(marks[row].Q2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto q26again;
		}
	    
	    a16again:
	    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A1;
	    if(marks[row].A1>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a16again;
		}
	    
	    a26again:
	    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].A2;
	    if(marks[row].A2>5)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto a26again;
		}
	    
	    mid6again:
	    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].MID;
	    if(marks[row].MID>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto mid6again;
		}
	    
	    final6again:	    
	    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
	    cout<<"You Enter:";
	    cin>>marks[row].FINAL;
	    if(marks[row].FINAL>40)
	    {
	    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
	    	goto final6again;
		}
	    
	   ob=marks[row].Q1+marks[row].Q2+marks[row].A1+marks[row].A2+marks[row].MID+marks[row].FINAL;
	    
	    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
	    cout<<"\n"<<setw(94)<<marks[row].name<<" Obtained Marks:"<<ob;
		
	    cout<<"\n\n"<<setw(120)<<"Press 'N' to Enter Next Roll Number:";
		cin>>ch;
		}
		else
		{
			cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
			goto roll6again;
		}

	    
	    system("CLS");
	    row++;
			
	}
	}
	else
	{
		char ch;
		cout<<"\n"<<setw(107)<<"Incorrect Selection"<<endl;
		cout<<"\n"<<setw(115)<<"Enter 'R' for Select again:";
		cin>>ch;
		system("CLS");
		goto repeat;
	}
		
}

void marks2() //students marks function
{
again7roll:
load();
nextline();
float cal,pf,itc,eng,be,pak;

float percent,total;
int roll;

cout<<"\n"<<setw(108)<<"Enter Roll Number(57 to 110)."<<endl;
cout<<"\n"<<setw(89)<<"You Enter:";
cin>>roll;
if(roll>=57&&roll<=110)
{
	system("CLS");
cout<<"\n"<<setw(107)<<"Enter Your Marks out of 100."<<endl;

cout<<"\n\nEnter Your Calculus Marks:";
cin>>cal;

cout<<"\n\nEnter Your PF Marks:";
cin>>pf;

cout<<"\n\nEnter Your ITC Marks:";
cin>>itc;

cout<<"\n\nEnter Your English Marks:";
cin>>eng;

cout<<"\n\nEnter Your Basic Electronics Marks:";
cin>>be;

cout<<"\n\nEnter Your Islamiyat/Pak.studies Marks:";
cin>>pak;

total=cal+pf+itc+eng+be+pak;
percent=(total/600)*100;

cout<<"\n"<<setw(107)<<"Your Total Marks:"<<total<<endl;
cout<<"\n"<<setw(115)<<"Your Marks in Percentage:"<<percent<<"%"<<endl;
if(percent>=90)
cout<<"\n"<<setw(107)<<"Your Grade is A+.";
else
if(percent>=80&&percent<90)
cout<<"\n"<<setw(107)<<"Your Grade is A.";
else
if(percent>=70&&percent<80)
cout<<"\n"<<setw(107)<<"Your Grade is B+.";
else
if(percent>=60&&percent<70)
cout<<"\n"<<setw(107)<<"Your Grade is B.";
else
if(percent>=50&&percent<60)
cout<<"\n"<<setw(107)<<"Your Grade is C.";
else
if(percent<50)
cout<<"\n"<<setw(107)<<"Sorry!Your Failed the Smester.";
}
else
{
	char t;
	cout<<"\n"<<setw(105)<<"Enter Correct Roll Number."<<endl;
	cout<<"\n"<<setw(116)<<"Enter 'R' for Reentering Roll Number:";
	cin>>t;
	goto again7roll;
}

}

void classTimeS()
{
	int roll;
	againroll:
		
	load();
    nextline();
	
	cout<<"\n"<<setw(102)<<"Enter Your Roll Number."<<endl;
	cout<<"\n\n"<<setw(90)<<"Your Enter:";
	cin>>roll;
	
	if(roll>=57&&roll<=110)
	{
		load();
    	cout<<"\n"<<setw(95)<<"CALCULUS"<<endl;
		cout<<"\nClass:Twice a week."<<endl;
		
		cout<<"\nInstructor:Sir Abdul Manan."<<endl;
		cout<<"\nSection:BSCS-1B."<<endl;
		
		cout<<"\nDay1:TUESDAY."<<endl;
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2 ."<<endl;
	    cout<<"\nDay2:WEDNESDAY."<<endl;
	    	
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
		cout<<"\nLocation:Dental Hospital Room#2."<<endl;
		
	    cout<<"\n"<<setw(107)<<"INTRODUCTION TO COMPUTING"<<endl;
	    cout<<"\nClass:Twice a week."<<endl;
	    
	    cout<<"\nInstructor:Mam Rabia Younas."<<endl;
		cout<<"\nSection:BSCS-1B."<<endl;
		
		cout<<"\nDay1:TUESDAY."<<endl;
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    cout<<"\nDay2:FRIDAY."<<endl;
	    
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
		cout<<"\n"<<setw(107)<<"PROGRAMMING FUNDAMENTALS 1"<<endl;
		cout<<"\nClass:Twice a week."<<endl;
		
		cout<<"\nInstructor:Sir Farruk Ehsan."<<endl;
		cout<<"\nSection:BSCS-1B."<<endl;
		
		cout<<"\nDay1:MONDAY."<<endl;
		cout<<"\nTime:8:00 to 9:30 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
		cout<<"\nDay2:WEDNESDAY."<<endl;
		
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
		cout<<"\n"<<setw(107)<<"ISLAMIYAT/PAK.STUDIES"<<endl;
		cout<<"\nClass:Twice a week."<<endl;
		
		cout<<"\nInstructor:Sir Haji Usman."<<endl;
		cout<<"\nSection:BSCS-1B."<<endl;
		
		cout<<"\nDay1:MONDAY."<<endl;
		cout<<"\nTime:9:30 to 11:00 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
		cout<<"\nDay2:FRIDAY."<<endl;
		
		cout<<"\nTime:8:00 to 9:30 am."<<endl;	
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	    
	    cout<<"\n"<<setw(107)<<"FUNCTIONAL ENGLISH 1"<<endl;
		cout<<"\nClass:Once a week."<<endl;
		
		cout<<"\nInstructor:Mam Anila."<<endl;
		cout<<"\nSection:BSCS-1B."<<endl;
		
		cout<<"\nDay:THURSDAY."<<endl;
		cout<<"\nTime:8:00 to 11:00 am."<<endl;
		
	    cout<<"\nLocation:Dental Hospital Room#2."<<endl; 
		cout<<"\n"<<setw(107)<<"BASIC ELECTRONICS"<<endl;
		
		cout<<"\nClass:Once a week."<<endl;
		cout<<"\nInstructor:Sir SM junaid zadii."<<endl;
		
		cout<<"\nSection:BSCS-1B."<<endl;
		cout<<"\nDay:THURSDAY."<<endl;
		
		cout<<"\nTime:11:00 to 2:00 Pm."<<endl;
		cout<<"\nLocation:Dental Hospital Room#2."<<endl;
	}
	else
	{
		char t;
	cout<<"\n"<<setw(101)<<"Incorrect Roll Number."<<endl;
	cout<<"\n"<<setw(116)<<"Enter 'R' for Reentering Roll Number:";
	cin>>t;
	goto againroll;
	}

}

void student_portal()      // student portal
{
	int cho;
	againcho:
	load();
	 
	again:
	nextline(); 
	
	cout<<"\n"<<setw(121)<<"1-Enter '1' for Time Table for Your Class."<<endl;
	cout<<"\n"<<setw(107)<<"2-Enter '2' for Your Result."<<endl;
	cout<<"\n"<<setw(100)<<"3-Enter '3' for exit."<<endl;
	
	cout<<"\n"<<setw(91)<<"Your Select:";
	cin>>cho;
	if(cho==1)
	{
		classTimeS();
	}
	else
	if(cho==2)
	{
		marks2();
	}
	else
	if(cho==3)
	{
		char op2;
	    system("CLS");
	
    	cout<<"1-Enter 'Y' for exit."<<endl;
    	cout<<"2-Enter 'N' for Admin Page."<<endl;
	
    	cout<<"You Select:";
    	cin>>op2;
	
    	if(op2=='Y')
    	{
		system("CLS");
		cout<<" "<<setw(117)<<"Thank you..........";
		exit(0);
    	}
    	else
    	{
		if(op2=='N')
    	{
		system("CLS");
		goto again;
    	}
    }
	}
	else
	{
	cout<<"\n"<<setw(107)<<"Incorrect Selection."<<endl;
	goto againcho;
		
	}
	
}

