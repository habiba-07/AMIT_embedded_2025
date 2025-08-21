#include <stdio.h>

typedef struct studentinfo{
    char name[50];
    int age;
    int degree;
    int section;
}STUDENT;

int main(){
   STUDENT class[5];
   printf("enter students info: name, age, degree, section");
   for( int i =0; i<5; i++){
        scanf("%s",&class[i].name);
        scanf("%d",&class[i].age);
        scanf("%d",&class[i].degree);
        scanf("%d",&class[i].section);
    }
    for( int i =0; i<5; i++){
        printf("student %d\n",i+1);
        printf("Name : %s\n",class[i].name);
        printf("age :  %d\n",class[i].age);
        printf("degree : %d\n",class[i].degree);
        printf("Section : %d\n",class[i].section);
    }

}