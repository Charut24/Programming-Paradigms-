#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
    int roll;
    char name[25];
protected:
    void getdata()
    {
        cout<<"\n -----------------------------------------";
        cout<<"\n Enter Roll No.            : ";
        cin>>roll;
        cout<<"\n Enter Student Name        : ";
        cin>>name;
    }
    void putdata()
    {
        cout<<"\n -----------------------------------------";
        cout<<"\n ********** Student Marklist **********";
        cout<<"\n -----------------------------------------";
        cout<<"\n Roll No.             :  "<<roll;
        cout<<"\n Student Name         :  "<<name<<endl;
    }
};

class StudentExam : protected Student      //Class StudentExam derived from Class Student
{
protected:
    int marks[5];
public:
    int temp;
    int accept_data()
    {
        getdata();
        int j;
        for(j=0; j<5; j++)
        {
            cout<<"\tEnter mark "<<j+1<<":";
            cin>>marks[j];
        }
        for(j=0; j<5; j++)
        {
            if(marks[j]<30)
            {
                exit(0);
            }
        }
    }

};

class StudentResult : public StudentExam      //Class StudentResult derived from Class StudentExam
{
public:
    float per;
    int calculate ()
    {
        for(int i=0; i<5; i++)
        {
            if(marks[i]<30)
            {
                per=0;
                return per;
            }
        }
        for(int i=0; i<5; i++)
            per+=marks[i];
        per=(per/5);
        return per;

        cout<<"\n\n Total Percentage     :  "<<per;
        cout<<"\n ----------------------------------------- \n";
    }
    void display_data()
    {
        putdata();
        cout<<" \n Percentage:"<<calculate()<<endl;
        if(91<per && per<100)
        {
            cout<<" A";
        }
        else if(81<=per && per<=90)
        {
            cout<<" B";
        }
        else if(71<=per && per<81)
        {
            cout<<" C";
        }
        else if(61<=per && per<71)
        {
            cout<<" D";
        }
        else if(41<=per && per<61)
        {
            cout<<" E";
        }
        else
        {
            cout<<" F";
        }
    }

};

int main()
{
    StudentResult str;     //Object 'str' is created of derived Class StudentResult
    int cnt, i;
    cout<<"\n Enter No. of Students You Want? : ";
    cin>>cnt;
    for(i=0; i<cnt; i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }
    return 0;
}
