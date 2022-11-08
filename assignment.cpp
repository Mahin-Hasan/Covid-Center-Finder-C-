#include <iostream>
using namespace std;

//using struct to store custom data for a person.
struct personInfo
{
    int nid;
    string name;
    int age;
    double phoneNumber;
    int registrationNumber;
    string vaccineName;
    string centerName;
    string firstDose;
    string secondDose;
    string boosterDose;
};


int main() {
    //1st patient information
    personInfo patients[5];
    patients[0].nid=101;
    patients[0].name="Mahin";
    patients[0].age=21;
    patients[0].phoneNumber=123456;
    patients[0].registrationNumber=70775;
    patients[0].vaccineName="Fizer";
    patients[0].centerName="CMH";
    patients[0].firstDose="03-Feb-2022";
    patients[0].secondDose="12-Apr-2022";
    patients[0].boosterDose="22-Sept-2022";

    cout<<"Details of 1st patient\nNID: "<<patients[0].nid<<"\nName: "<<patients[0].name<<"\nAge: "<<patients[0].age<<"\nPhone Number: "<<patients[0].phoneNumber<<"\nRegistration Number: "<<patients[0].registrationNumber<<"\nName of Vaccine: "<<patients[0].vaccineName<<"\nName of Center: "<<patients[0].centerName<<"\nDate of 1st dose: "<<patients[0].firstDose<<"\nDate of 2nd Dose: "<<patients[0].secondDose<<"\nDate of Booster dose: "<<patients[0].boosterDose;
    cout<<"\n__________________________________________________________________________\n"<<endl;
    //2nd patient information
    patients[1].nid=102;
    patients[1].name="Mahdy";
    patients[1].age=20;
    patients[1].phoneNumber=112233;
    patients[1].registrationNumber=80885;
    patients[1].vaccineName="Moderna";
    patients[1].centerName="DMC";
    patients[1].firstDose="15-Jan-2022";
    patients[1].secondDose="27-May-2022";
    patients[1].boosterDose="04-Aug-2022";
    cout<<"Details of 2nd patient\nNID: "<<patients[1].nid<<"\nName: "<<patients[1].name<<"\nAge: "<<patients[1].age<<"\nPhone Number: "<<patients[1].phoneNumber<<"\nRegistration Number: "<<patients[1].registrationNumber<<"\nName of Vaccine: "<<patients[1].vaccineName<<"\nName of Center: "<<patients[1].centerName<<"\nDate of 1st dose: "<<patients[1].firstDose<<"\nDate of 2nd Dose: "<<patients[1].secondDose<<"\nDate of Booster dose: "<<patients[1].boosterDose;

    cout<<"\n__________________________________________________________________________\n"<<endl;
    //declaring a string search and Setting DMC as default for using conditional operators if else.
    string search = "DMC";

    //declaring a for loop for iterating to the patients array
    for(int i=0;i<2;i++)
    {
        cout<<"\nIdentifying person whose center is in DMC for person no:"<<i+1<<endl;
        if(search == patients[i].centerName)
        {
            cout<<"\nPerson details found for patient:"<<patients[i].name<<endl;

        }
        else{
            cout<<"\nPerson details not found for patient:"<<patients[i].name<< endl;

        }

    }
    return 0;
}
