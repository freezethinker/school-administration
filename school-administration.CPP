/*
Program Name    - School Administation System
Year            - 2015-2016
Last Updated on - 05/03/2016
File Name       - school-administration.cpp
Developers      - Karan Uppal
College Name    - RV College of Engineering, Bangalore
*/

#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>

fstream afile,bfile,;

class student
{
	int s_rno, s_adm;
	char s_name[50], s_tel[10];
	char s_add[100], s_stream;
	int s_1,s_2,s_3,s_4,s_5;  //marks of five subjects

	public:
	void enter()
	  {
		cout<<endl<<"Enter admission number                              : ";cin>>s_adm;
		cout<<"Enter roll number                                   : ";cin>>s_rno;
		cout<<"Enter name                                          : ";gets(s_name);
		cout<<"Enter telephone number                              : ";gets(s_tel);
		cout<<"Enter address                                       : ";gets(s_add);
		cout<<"Enter stream (M=Medial, N=Non-Medical, C=Commerce)  : ";cin>>s_stream;
		if(s_stream=='M'||s_stream=='m')
		{	cout<<"Enter marks in ";maths();cout<<" : ";cin>>s_1;
			cout<<"Enter marks in ";eng();cout<<"     : ";cin>>s_2;
			cout<<"Enter marks in ";phy();cout<<"     : ";cin>>s_3;
			cout<<"Enter marks in ";chem();cout<<"   : ";cin>>s_4;
			cout<<"Enter marks in ";bio();cout<<"     : ";cin>>s_5;
		}

		if(s_stream=='N'||s_stream=='n')
		{	cout<<"Enter marks in ";maths();cout<<" : ";cin>>s_1;
			cout<<"Enter marks in ";eng();cout<<"     : ";cin>>s_2;
			cout<<"Enter marks in ";phy();cout<<"     : ";cin>>s_3;
			cout<<"Enter marks in ";chem();cout<<"   : ";cin>>s_4;
			cout<<"Enter marks in ";comp();cout<<"    : ";cin>>s_5;
		}

		if(s_stream=='C'||s_stream=='c')
		{	cout<<"Enter marks in ";maths();cout<<"     : ";cin>>s_1;
			cout<<"Enter marks in ";eng();cout<<"         : ";cin>>s_2;
			cout<<"Enter marks in ";acc();cout<<"        : ";cin>>s_3;
			cout<<"Enter marks in ";bst();cout<<": ";cin>>s_4;
			cout<<"Enter marks in ";eco();cout<<"       : ";cin>>s_5;
		}
	  }


	  void display()
	  {
		cout<<endl<<endl<<"Admission number                 : ";cout<<s_adm<<endl;
		cout<<"Roll number                      : ";cout<<s_rno<<endl;
		cout<<"Name                             : ";puts(s_name);
		cout<<"Telephone number                 : ";puts(s_tel);
		cout<<"Address                          : ";puts(s_add);
		if(s_stream=='m'||s_stream=='M')
			cout<<"Stream                           : Medical";
		else if(s_stream=='c'||s_stream=='C')
			cout<<"Stream                           : Commerce";
		else if(s_stream=='n'||s_stream=='N')
			cout<<"Stream                           : Non Medical";
		cout<<endl<<"============================================";
	  }

	  void report_m()
	  {
		clrscr();
		cout<<endl<<endl<<endl;
		cout<<"              ____________________________________________________"<<endl;
		cout<<"             |             MONTFORT SCHOOL, NEW DELHI             |"<<endl;
		cout<<"             |                  --REPORT CARD--                   |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  Name:                       Roll number:          |"<<endl;
		cout<<"             |  Admission Number:           Stream: Medical       |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";eng();cout<<" -                                         |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";maths();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";phy();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";chem();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";bio();cout<<" -				          |"<<endl;
		cout<<"             |____________________________________________________|"<<endl;
		delay(500);
		gotoxy(23,9);
		puts(s_name);
		gotoxy(58,9);
		cout<<s_rno;
		gotoxy(35,10);
		cout<<s_adm;
		/*gotoxy(53,10);
		cout<<s_stream;*/
		gotoxy(27,14);
		cout<<s_1;
		gotoxy(31,16);
		cout<<s_2;
		gotoxy(27,18);
		cout<<s_3;
		gotoxy(29,20);
		cout<<s_4;
		gotoxy(27,22);
		cout<<s_5;
		getch();
	  }

	  void report_n()
	  {
		clrscr();
		cout<<endl<<endl<<endl;
		cout<<"              ____________________________________________________"<<endl;
		cout<<"             |             MONTFORT SCHOOL, NEW DELHI             |"<<endl;
		cout<<"             |                  --REPORT CARD--                   |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  Name:                       Roll number:          |"<<endl;
		cout<<"             |  Admission Number:           Stream: Non Medical   |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";eng();cout<<" -                                         |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";maths();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";phy();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";chem();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";comp();cout<<" -			                  |"<<endl;
		cout<<"             |____________________________________________________|"<<endl;
		delay(500);
		gotoxy(23,9);
		puts(s_name);
		gotoxy(58,9);
		cout<<s_rno;
		gotoxy(35,10);
		cout<<s_adm;
		/*gotoxy(53,10);
		cout<<s_stream;*/
		gotoxy(27,14);
		cout<<s_1;
		gotoxy(31,16);
		cout<<s_2;
		gotoxy(27,18);
		cout<<s_3;
		gotoxy(29,20);
		cout<<s_4;
		gotoxy(28,22);
		cout<<s_5;
		getch();
	  }

	  void report_c()
	  {
		clrscr();
		cout<<endl<<endl<<endl;
		cout<<"              ____________________________________________________"<<endl;
		cout<<"             |             MONTFORT SCHOOL, NEW DELHI             |"<<endl;
		cout<<"             |                  --REPORT CARD--                   |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  Name:                       Roll number:          |"<<endl;
		cout<<"             |  Admission Number:           Stream: Commerce      |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |====================================================|"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";eng();cout<<" -                                         |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";maths();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";acc();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";bst();cout<<" -				          |"<<endl;
		cout<<"             |                                                    |"<<endl;
		cout<<"             |  ";eco();cout<<" -				          |"<<endl;
		cout<<"             |____________________________________________________|"<<endl;
		delay(500);
		gotoxy(23,9);
		puts(s_name);
		gotoxy(58,9);
		cout<<s_rno;
		gotoxy(35,10);
		cout<<s_adm;
		/*gotoxy(53,10);
		cout<<s_stream;*/
		gotoxy(27,14);
		cout<<s_1;
		gotoxy(31,16);
		cout<<s_2;
		gotoxy(28,18);
		cout<<s_3;
		gotoxy(36,20);
		cout<<s_4;
		gotoxy(29,22);
		cout<<s_5;
		getch();
	  }


	  int r_s_adm()
		{return s_adm;}

	  char r_s_stream()
		{return s_stream;}

	  void eng()
	  { cout<<"English";}

	  void maths()
	  { cout<<"Mathematics";}

	  void phy()
	  { cout<<"Physics";}

	  void chem()
	  { cout<<"Chemistry";}

	  void comp()
	  { cout<<"Computer";}

	  void bst()
	  { cout<<"Business Studies";}

	  void acc()
	  { cout<<"Accounts";}

	  void eco()
	  { cout<<"Economics";}

	  void bio()
	  { cout<<"Biology";}

};

class teacher
{	int t_no;
	char t_name[50], t_tel[10];
	char t_add[100];

	public:
	void enter()
	  {
		cout<<endl<<"Enter teacher number                                : ";cin>>t_no;
		cout<<"Enter name                                          : ";gets(t_name);
		cout<<"Enter telephone number                              : ";gets(t_tel);
		cout<<"Enter address                                       : ";gets(t_add);
	  }

	void display()
	  {
		cout<<endl<<endl<<"Teacher number                   : ";cout<<t_no<<endl;
		cout<<"Name                             : ";puts(t_name);
		cout<<"Telephone number                 : ";puts(t_tel);
		cout<<"Address                          : ";puts(t_add);
	  }

	int r_t_no()
	{
		return t_no;
	}
};


main()
{
	clrscr();
	gotoxy(28,5);
	cout<<"SCHOOL ADMINISTRATION SYSTEM";
	gotoxy(30,10);
	cout<<"Created by - Karan Uppal";
	gotoxy(1,20);
	cout<<"Hit any key to continue...";
	getch();

	int opt,opt1;
	student s;
do{
	clrscr();
	cout<<"Select your choice - \n1. Student \n2. Teacher \n3. Quit";
	cout<<endl<<endl<<"OPTION - ";
	cin>>opt;
	if(opt==1)
	{
		clrscr();
		cout<<endl<<"======= STUDENT =======";
		cout<<endl<<"1. Add a student to new file.";
		cout<<endl<<"2. Add a student to existing file.";
		cout<<endl<<"3. Delete a student.";
		cout<<endl<<"4. Edit details of a student.";
		cout<<endl<<"5. Search for a student.";
		cout<<endl<<"6. Display details of all students.";
		cout<<endl<<"7. Generate report card.";
		cout<<endl<<"8. Previous.";
		cout<<endl<<endl<<"OPTION - ";
		cin>>opt1;

		if(opt1==1)
		{
			afile.open("studsss.dat",ios::out);
			s.enter();
			afile.write((char *)&s, sizeof(student));
			afile.close();

			/*mfile.open("marksss.dat",ios::out);
			s.menter();
			mfile.write((char *)&s, sizeof(student));
			mfile.close();*/
		}

		if(opt1==2)
		{
			afile.open("studsss.dat",ios::app);
			s.enter();
			afile.write((char *)&s, sizeof(student));
			afile.close();

			/*mfile.open("marksss.dat",ios::app);
			s.menter();
			mfile.write((char *)&s, sizeof(student));
			mfile.close();*/
		}

		if(opt1==3)
		{
			afile.open("studsss.dat",ios::in);
			bfile.open("temp.dat",ios::out);
			int temp_adm;
			cout<<endl<<"Enter the admission number of the student you want to delete from the records : ";
			cin>>temp_adm;
			while(afile)
			{
				afile.read((char *)&s, sizeof(student));
				if(s.r_s_adm()!=temp_adm)
				{
					bfile.write((char *)&s, sizeof(student));

				}

				else if(s.r_s_adm()==temp_adm)
				{
					cout<<endl<<endl<<"STUDENT DELETED!!";
					getch();

				}
			}
			afile.close();
			bfile.close();
			remove("studsss.dat");
			rename("temp.dat","studsss.dat");
		}

		if(opt1==4)
		{
			afile.open("studsss.dat",ios::in);
			bfile.open("temp.dat",ios::out);
			dfile.open("mtemp.dat",ios::out);
			mfile.open("marksss.dat",ios::in);
			int temp_adm;
			cout<<endl<<"Enter the admission number : ";
			cin>>temp_adm;
			while(afile)
			{
				afile.read((char *)&s, sizeof(student));
				if(temp_adm!=s.r_s_adm())
				{
					bfile.write((char *)&s, sizeof(student));
				}
				else
				{
					s.enter();
					bfile.write((char *)&s, sizeof(student));
					cout<<endl<<endl<<"EDITED RECORD IS AS FOLLOWS:"<<endl<<endl;
					s.display();
					getch();
				}
			}

			afile.close();
			bfile.close();
			remove("studsss.dat");
			rename("temp.dat","studsss.dat");
		}

		if(opt1==5)
		{
			afile.open("studsss.dat",ios::in);
			int temp_adm;
			cout<<endl<<"Enter the admission number : ";
			cin>>temp_adm;
			while(afile)
			{       afile.read((char *)&s, sizeof(student));
				if(temp_adm==s.r_s_adm())
				{
					s.display();
					getch();
				}
			}
			afile.close();
		}

		if(opt1==6)
		{
			afile.open("studsss.dat",ios::in);
			while(afile)
			{       afile.read((char *)&s, sizeof(student));
				s.display();
				getch();
			}
			afile.close();
		}

		if(opt1==7)
		{
			afile.open("studsss.dat",ios::in);
			int temp_adm;
			cout<<"Enter admission number for which you want to see the report card - ";
			cin>>temp_adm;
			while(afile)
			{       afile.read((char *)&s, sizeof(student));
				if(temp_adm==s.r_s_adm())
				{
					if(s.r_s_stream()=='m'||s.r_s_stream()=='M')
					{	s.report_m();
					}

					if(s.r_s_stream()=='n'||s.r_s_stream()=='N')
					{       s.report_n();
					}

					if(s.r_s_stream()=='c'||s.r_s_stream()=='C')
					{	s.report_c();
					}
				}
				getch();
			}
			afile.close();
			s.report_m();
		}

		if(opt1==8)
		{
			//previous
		}
	}

	if(opt==2)
	{
		teacher t;
		clrscr();
		cout<<endl<<"======= TEACHER =======";
		cout<<endl<<"1. Add a teacher to new file.";
		cout<<endl<<"2. Add a teacher to existing file.";
		cout<<endl<<"3. Delete a teacher.";
		cout<<endl<<"4. Edit details of a teacher.";
		cout<<endl<<"5. Search for a teacher.";
		cout<<endl<<"6. Display details of all teachers.";
		cout<<endl<<"7. Previous.";
		cout<<endl<<endl<<"OPTION - ";
		cin>>opt1;

		if(opt1==1)
		{
			afile.open("teach.dat",ios::out);
			t.enter();
			afile.write((char *)&t, sizeof(teacher));
			afile.close();
		}

		if(opt1==2)
		{
			afile.open("teach.dat",ios::app);
			t.enter();
			afile.write((char *)&t, sizeof(teacher));
			afile.close();
		}

		if(opt1==3)
		{
			afile.open("teach.dat",ios::in);
			bfile.open("temp.dat",ios::out);
			int temp_no;
			cout<<endl<<"Enter the teacher number you want to delete from the records : ";
			cin>>temp_no;
			while(afile)
			{
				afile.read((char *)&t, sizeof(teacher));
				if(t.r_t_no()!=temp_no)
				{
					bfile.write((char *)&t, sizeof(teacher));

				}

				else if(t.r_t_no()==temp_no)
				{
					cout<<endl<<endl<<"TEACHER DELETED!!";
					getch();

				}
			}
			afile.close();
			bfile.close();
			remove("teach.dat");
			rename("temp.dat","teach.dat");
		}

		if(opt1==4)
		{
			afile.open("teach.dat",ios::in);
			bfile.open("temp.dat",ios::out);
			int temp_no;
			cout<<endl<<"Enter the teacher number : ";
			cin>>temp_no;
			while(afile)
			{
				afile.read((char *)&t, sizeof(teacher));
				if(temp_no!=t.r_t_no())
				{
					bfile.write((char *)&t, sizeof(teacher));
				}
				else
				{
					t.enter();
					bfile.write((char *)&t, sizeof(teacher));
					cout<<endl<<endl<<"EDITED RECORD IS AS FOLLOWS:"<<endl<<endl;
					t.display();
					getch();
				}
			}

			afile.close();
			bfile.close();
			remove("teach.dat");
			rename("temp.dat","teach.dat");
		}

		if(opt1==5)
		{
			afile.open("studsss.dat",ios::in);
			int temp_adm;
			cout<<endl<<"Enter the teacher number : ";
			cin>>temp_adm;
			while(afile)
			{       afile.read((char *)&s, sizeof(student));
				if(temp_adm==t.r_t_no())
				{
					t.display();
					getch();
				}
			}
			afile.close();
		}

		if(opt1==6)
		{
			afile.open("teach.dat",ios::in);
			while(afile)
			{       afile.read((char *)&t, sizeof(teacher));
				t.display();
				getch();
			}
			afile.close();
		}

		if(opt1==7)
		{
			//previous
		}
	}

}while(opt<3);
getch();
}