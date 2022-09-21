#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string Name;
        string ID;
        string Mail_ID;
        string Blood_Group;
        string Address;
        string Gender;
        string Contact_No;
        string Reserved_Catagory;
        string Semester;
        string Department;
        int Annual_Income;
        string a;

    public:
        void getName(void);
        void getID(void);
        void getMail_ID(void);
        void getBlood_Group(void);
        void getAddress(void);
        void getGender(void);
        void getContact_No(void);
        void getSemester(void);
        void getDepartment(void);
        void getReserved_Catagory(void);
        void getAnnual_Income(void);
        void EligibleforScholarship(void);
        void PrintIDCard(void);
        void showName();
        void showID();
};
void Student::getName(){
    cout<<"Enter your Name"<<endl;
    getline(cin,Name);
    }
void Student::getID(){
    cout<<"Enter your id number"<<endl;
    getline(cin,ID);
    }
void Student::getMail_ID(){
    cout<<"Enter your mail id"<<endl;
    getline(cin,Mail_ID);
    }
void Student::getBlood_Group(){
    cout<<"Enter your Blood Group"<<endl;
    getline(cin,Blood_Group);
    }
void Student::getAddress(){
    cout<<"Enter your Address"<<endl;
    getline(cin,Address);
    }
void Student::getGender(){
    cout<<"Enter your Gender"<<endl;
    getline(cin,Gender);
    }
void Student::getContact_No(){
    cout<<"Enter your Contact Number"<<endl;
    getline(cin,Contact_No);
    }
void Student::getSemester(){
    cout<<"Enter your Semester"<<endl;
    getline(cin,Semester);
    }
void Student::getDepartment(){
    cout<<"Enter your Department"<<endl;
    getline(cin,Department);
    }
void Student::getReserved_Catagory(){
    cout<<"Enter YES if you belong to Reserved_Catagory else enter NO"<<endl;
    getline(cin,a);
    }
void Student::getAnnual_Income(){
    cout<<"Enter your Annual income in digits"<<endl;
    cin>>Annual_Income;
    }
void Student::EligibleforScholarship(){
    if(a=="YES\0" && Annual_Income<800000)
    {
        cout<<"Your Eligible For Scholarship"<<endl<<endl;
    }
    else{
        cout<<"Your NOT Eligible For Scholarship"<<endl<<endl;
    }
}
void Student::PrintIDCard(){
    cout<<"------------ ID CARD -----------------------"<<endl;
    cout<<"     Vivekanand Education Society     "<<endl;
    cout<<"NAME: "<<Name<<"\t"<<"ID No "<<ID<<endl;
    cout<<"CONTACT NO: "<<Contact_No<<"\t"<<"BLOOD GROUP: "<<Blood_Group<<endl;
    cout<<"DEPARTMENT: "<<Department<<"\t"<<"SEMESTER: "<<Semester<<endl;
}
void Student::showName(){
    cout<<Name<<endl;
}
void Student::showID(){
    cout<<ID<<endl;
}
int main()
{
    Student s[5],*p;  //s[0 1 2 3 4]
    for(int i=0;i<5;i++){
      cout<<"Enter Name details of "<<i+1<<" student"<<endl;
             s[i].getName();
             s[i].getID();
             s[i].getMail_ID();
             s[i].getBlood_Group();
             s[i].getAddress();
             s[i].getGender();
             s[i].getSemester();
             s[i].getDepartment();
             s[i].getContact_No();
             s[i].getReserved_Catagory();
    }
          //Accessing directly
    cout<<"Accessing directly"<<endl;
    s[4].showName();
    s[4].showID();
    //Accessing By pointers
    cout<<"Accessing By pointers"<<endl;
    p= &s[3];
    p->showName();
    p->showID();
    p++; //increament pointers
    p->showID();
    return 0;
}
