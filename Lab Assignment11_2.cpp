#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class Student
{
    protected:
       char name[20], PRN[12];
       char gender;             
       bool validatePRN() const;        //checks if the user has entered PRN in right format (11 digits)
    public:
       void getStudentDetails();             //user Input
       void displayStudentDetails() const;                  //display details
};

class Marks: public Student
{
   protected:
       int UT_marks[5];                   
       bool validateMarks() const;         //checks if the user has entered marks in right format in the range 0 to 100
   public:
      void getMarks();
      void displayMarks() const;
};

class Sports: public Student
{
   protected:
      int sp_marks;
      bool validateMarks();
   public:
      void getSports();
      void displaySports();
};

class Result: public Marks, public Sports
{
     float total;
     float perc;
     char ut_grade;                       //p or f for pass or fail
     char sp_grade;
     void checkSubjectFail();              
     public:
         void calcPerc();            //calculates percentage and returns pass or fail on the basis of percentage
         void calcSportsGrade();
         void displayResult();
};

void Student::displayStudentDetails() const
{
    cout<<"\nName                        : "<<name;
    cout<<"\nPRN                         : "<<PRN;
}

bool Student::validatePRN() const
{
    int len=strlen(PRN);
    if(len!=11)
      {
          cout<<"\nInvalid PRN!\nEnter PRN again: ";
          return false;
      }
    for(int i=0;i<len;i++)
      {
          if(PRN[i]<48 || PRN[i]>57)             //ascii value for digits
            {
                cout<<"\nInvalid PRN!\nEnter PRN again: ";
                return false;
            }
      }
    return true;
}

void Student::getStudentDetails()
{
    cout<<"\nEnter name : ";
    fflush(stdin);
    gets(name);
    cout<<"\nEnter PRN (11digits) : ";
    fflush(stdin);
    gets(PRN);
    while(!validatePRN())
      {
          fflush(stdin);
          gets(PRN);
      }
    cout<<"\nEnter gender(M or F): ";
    cin>>gender;
}

void Marks::getMarks()
{
    int i;
    cout<<"\nEnter marks in five subjects(out of 100) : ";
    for(i=0;i<5;i++)
       cin>>UT_marks[i];
}

void Marks::displayMarks() const
{
    cout<<"\nMarks in five subjects(out of 100)  : ";
    for(int i=0;i<5;i++)
       cout<<UT_marks[i]<<"\t";
}

void Sports::getSports()
{
   cout<<"\nEnter marks in Sports(out of 100)  : ";
   cin>>sp_marks;
}

void Sports::displaySports()
{
   cout<<"\nMarks in Sports               : "<<sp_marks;
}

void Result::displayResult()
{
    Marks::displayStudentDetails();
    displayMarks();
    displaySports();
    cout<<"\nTotal                       : "<<total<<" / 500";
    cout<<"\n\n Percentage                : "<<perc;
    cout<<"\n\n UT Grade                  : "<<ut_grade;
    cout<<"\n\n Sports Grade              : "<<sp_grade;
    if(ut_grade=='F' || sp_grade=='F')
       cout<<"\n\n Final Result           : Fail";
    else
       cout<<"\n\n Final Result           : Pass";
}

void Result::calcPerc()
{
    for(int i=0;i<5;i++)
       total+=UT_marks[i];
    perc=(total*100.0)/500;                 //percentage = (total*100)/500 for 5 subjects
    if(perc>=90)
       ut_grade = 'A';
    else if(perc>=80 && perc<90)
       ut_grade = 'B';
    else if(perc>=65 && perc<80)
       ut_grade = 'C';
    else if(perc>=45 && perc<65)
       ut_grade = 'D';
    else if(perc>=33 && perc<45)
       ut_grade = 'E';
    else if(perc<33)
       ut_grade = 'F';
   checkSubjectFail();  
}

void Result :: checkSubjectFail()
{
   for(int i=0;i<5;i++)
     {
        if(UT_marks[i]<33) 
           {
              cout<<"\nFailed in subject "<<i+1;
              ut_grade='F';
           }
     }
}

void Result::calcSportsGrade()
{
   if(sp_marks>=90)
       sp_grade = 'A';
    else if(sp_marks>=80 && sp_marks<90)
       sp_grade = 'B';
    else if(sp_marks>=65 && sp_marks<80)
       sp_grade = 'C';
    else if(sp_marks>=45 && sp_marks<65)
       sp_grade = 'D';
    else if(sp_marks>=33 && sp_marks<45)
       sp_grade = 'E';
    else if(sp_marks<33)
       sp_grade = 'F';
}

int main()
{
    int n,i;
    cout<<"\nEnter no of students : ";
    cin>>n;
    Result R[n];
    for(i=0;i<n;i++)
      {
        cout<<"\nEnter details of Student "<<i+1;
        R[i].Marks::getStudentDetails();
        R[i].getMarks();
        R[i].getSports();
      }
    for(i=0;i<n;i++)
      {
        R[i].calcPerc();
        R[i].calcSportsGrade();
      }
    cout<<"\nDetails accepted!";
    cout<<"\n\n\n\n************************************STUDENT DETAILS ************************************************ \n";
    for(i=0;i<n;i++)
      {
        cout<<"\n\n\nDetails of Student "<<i+1;
        R[i].displayResult();
      }
    return 0;
}
