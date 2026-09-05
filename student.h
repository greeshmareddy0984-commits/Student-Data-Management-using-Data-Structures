#include<stdio.h>
  #include<string.h>
  #include<stdlib.h>
  #include<unistd.h>
  typedef struct student
  {
          int rollno;
          char name[20];
          float percentage;
          struct student *next;
 }stu;
  void add();
  void display();
  void delete_by_rollno();
void delete_by_name();
 void modify_by_rollno();
 void modify_by_name();
  void modify_by_percent();
  void save_stu_data();
  void sort_by_name();
  void sort_by_percentage();
  void sort_by_rollno();
  void delete_all();
  void reverse_data();
  

