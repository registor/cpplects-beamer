#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string Name;
    Person(string _name, string _gender, int _age);
    ~Person();
protected:
    string Gender;
    int Age;
};

Person::Person(string _name, string _gender, int _age):
    Name(_name), Gender(_gender), Age(_age)
{
    cout << "Person" << Name << "constructed" << endl;
}
Person::~Person()
{
    cout << "Person" << Name << "destructed" << endl;
}

class StudentRecord : virtual public Person
{
public:
    string Number;// 学号
    string ClassName;// 班级
    static int TotalCount;// 静态成员，记录学生总人数
    StudentRecord(string _name, string _gender, int _age,
                  string _num, string _className, double _score);
    ~StudentRecord();
protected:
    double Score;//平均成绩
};

int StudentRecord::TotalCount = 0;

StudentRecord::StudentRecord(string _name, string _gender, int _age,
                             string _num, string _className, double _score)
    : Person(_name, _gender, _age),
      Number(_num), ClassName(_className), Score(_score)
{
    TotalCount++;
    cout << "Student" << Name << "constructed" << endl;
}
StudentRecord::~StudentRecord()
{
    cout << "Student" << Name << "destructed" << endl;
}

class TeacherRecord : virtual public Person
{
public:
    string CollegeName;//学院
    string DepartmentName;//系
    TeacherRecord(string _name, string _gender, int _age,
                  string _colname, string _dpname, int _year);
    ~TeacherRecord();
protected:
    int Year;//教龄
};
TeacherRecord::TeacherRecord(string _name, string _gender, int _age,
                             string _colname, string _dpname, int _year)
    : Person(_name, _gender, _age),
      CollegeName(_colname), DepartmentName(_dpname), Year(_year)
{
    cout << "teacher" << Name << "constructed" << endl;
}
TeacherRecord::~TeacherRecord()
{
    cout << "teacher" << Name << "destructed" << endl;
}

//使用虚基类
class TeachingAssistant : public StudentRecord, public TeacherRecord
{
public:
    string LectureName;//辅导课程
    TeachingAssistant(string _name, string _gender, int _age,
                      string _num, string _className, double _score,
                      string _colname, string _dpname, int _year,
                      string _lecture):
        Person(_name, _gender, _age),
        StudentRecord(_name, _gender, _age, _num, _className, _score),
        TeacherRecord(_name, _gender, _age,  _colname, _dpname, _year),
        LectureName(_lecture)
    {
        cout << "teachingassistant" << Name << "constructed" << endl;
    }
    ~TeachingAssistant();
    void Show();
    void SetName(string _name);
};
TeachingAssistant::~TeachingAssistant()
{
    cout << "teachingassistant" << Name << "destructed" << endl;
}
void TeachingAssistant::Show()
{
    cout << "Name:" << Name << " Gender:" << Gender << " Age:" << Age;
    cout << " Number:" << Number << " ClassName:" << ClassName << " TotalCount:";
    cout << TotalCount << " Score:" << Score << " CollegeName:" << CollegeName;
    cout << " DepartmentName:" << DepartmentName << " Year:" << Year << " LectureName:";
    cout << LectureName << endl;
}
void TeachingAssistant::SetName(string _name)
{
    Name = _name;
}

int main()
{
    string name = "郑七";
    string gender = "男";
    int age = 22;
    string number = "2010123";
    string classname = "软20101";
    double score = 89;
    string collegename = "信息";
    string departname = "软件";
    int year = 1;
    string lecture = "数据结构";
    TeachingAssistant ta(name, gender, age, number, classname, score,
                         collegename, departname, year, lecture);
    ta.Show();
    ta.SetName("郑八");
    ta.Show();
    return 0;
}
