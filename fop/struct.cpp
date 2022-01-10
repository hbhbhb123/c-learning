#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int age;
    int score;
    string name;
}s3;

struct teacher{
    int id;
    string name ;
    int age;
    struct Student stu;
};
//值传递
void printstudent1(struct Student s){
    s.age = 24;
    cout << s.name <<" "<< s.age <<" "<< s.score <<" "<< endl;
}
//地址传递，可以节省内存空间，而且不会复制新的副本出来
void printstudent2(const struct Student * s){
    //s->age = 25;
    cout << s->name <<" "<< s->age <<" "<< s->score <<" "<< endl;
}

int main(){
    struct Student s1 ;//struct可以省略
    s1.age = 23;
    s1.score = 95;
    s1.name = "hbin";
    //cout << s1.name << s1.age << s1.score << endl;
    cout << s1.name << " " << s1.age << " " << s1.score << " " << endl;
    struct Student s2 = {21,100,"yanjie"} ;
    s3.age = 0;
    s3.score = 100;
    s3.name = "hbyj";
    cout << s3.name << " " << s3.age << " " << s3.score << " " << endl;
    //数组
    struct Student stuarray[3] = {{23,95,"hbin"},{21,100,"yanjie"},{0,100,"hbyj"}};
    stuarray[2].age = 1;
    stuarray[2].score = 94;
    //指针
    Student * p = &s1;
    p->age = 14;
    cout << s1.age << endl;
    //嵌套
    teacher t = {20221111,"renyong",50,{23,95,"huangbin"}};
    cout << t.stu.name << endl;
    //结构体做函数参数
    struct Student test = {23,95,"huangbin"};
    printstudent1(test);
    cout << test.age << endl;
    printstudent2(&test);
    cout << test.age << endl;
    struct Student test1 = {23,95,"huangbin"};


}
