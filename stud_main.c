#include"student.h"
int main()
{
        char op,subop;
        while(1)
        {
        printf("****STUDENT RECORD MENU*****\n");
        printf("\na/A: Add new entry\nd/D: Delete a data\ns/S: Show the data\nm/M: Modify a list\nv/V: Save data into a file\ne/E: Exit\nt/T: Sort the data\nl/L: Delete all the records\nr/R: Reverse the data\n\n");
        printf("enter your choice:\n");
        scanf(" %c",&op);
        if(op>='a' && op<='z')
                op=op-32;
        switch(op)
        {
                case 'A':add();
                         break;
                case 'S':printf("-----------------------------\n");
                         printf("Rollno.  Name  Percentage\n");
                         printf("-----------------------------\n");
                         display();
                         printf("-----------------------------\n\n");
                         break;
                case 'D':printf("r/R: enter roll number to delete\nn/N: enter name to delete\n");
                         scanf(" %c",&subop);
                         if(subop>='a' && subop<='z')
                                 subop=subop-32;
                         switch(subop)
                         {
                                 case 'R':delete_by_rollno();break;
                                 case 'N':delete_by_name();break;
                                 default:printf("invalid option\n");
                         }
                         break;
                case 'M':printf("modification purpose select:\nr/R: search by rollno \n n/N: search by name\n p/P: search by percentage\n");
                         scanf(" %c",&subop);
                         if(subop>='a'&&subop<='z')
                                 subop=subop-32;
                         switch(subop)
                         {
                                 case 'R':modify_by_rollno();break;
                                 case 'N':modify_by_name();break;
                                 case 'P':modify_by_percent();break;
                                 default:printf("invalid choice\n");
                         }
                         break;
                case 'V':save_stu_data();break;
                case 'E':printf("s/S: save and exit\ne/E: exit without saving\n\n");
                         scanf(" %c",&subop);
                         if(subop>='a' && subop <='z')
                                 subop=subop-32;
                         switch(subop)
                         {
                                 case 'S':save_stu_data();exit(0);
                                 case 'E':exit(0);
                                 default:printf("invalid choice\n");
                         }
                         break;
                case 'T':printf("n/N: sort with name\nr/R: sort with rollno\np/P: sort with percentage\n\n");
                         scanf(" %c",&subop);
                         if(subop>='a' && subop <='z')
                                 subop=subop-32;
                         switch(subop)
                         {
                                 case 'N':sort_by_name();break;
			                     case 'R':sort_by_rollno();break;
                                 case 'P':sort_by_percentage();break;
                                 default:printf("invalid choice\n");
                         }
                         break;
                case 'L':delete_all();break;
                case 'R':reverse_data();break;
                default:printf("invalid\n");
        }
        }

}
