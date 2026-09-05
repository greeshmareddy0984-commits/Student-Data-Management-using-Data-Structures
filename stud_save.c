#include"student.h"
extern stu *head;
void save_stu_data()
{
        FILE *fp=fopen("student_marks_file.txt","w");
        stu *p=head;

        if(fp==0)
        {
                printf("file not present\n");
                return;
        }
        while(p)
        {
                fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->percentage);
                p=p->next;
        }
        fclose(fp);
}
