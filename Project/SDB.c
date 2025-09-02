#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"

#define TRUE    1
#define FALSE    0
#define MAX_STUDENTS    10
#define MIN_STUDENTS    3

//Create empty linked list
NODE_t * head = NULL;
//counter for students in list
static uint8 student_count = 0;


bool SDB_IsFull(){
    if(student_count>=MAX_STUDENTS) return TRUE;
    else return FALSE;
}
uint8 SDB_GetUsedSize(){
    return student_count;
}
bool SDB_AddEntry(){
    //check if list is full
    if(SDB_IsFull()) return FALSE;
    //create new object type student
    STUDENT_t newStudent;
    puts("Enter Student ID: ");
    scanf("%d",&newStudent.Student_ID);
    puts("Enter Student year: ");
    scanf("%d",&newStudent.Student_year);
    puts("Enter course1 grade and ID: ");
    scanf("%d %d",&newStudent.Course1_grade,&newStudent.Course1_ID);
    puts("Enter course2 grade and ID: ");
    scanf("%d %d",&newStudent.Course2_grade,&newStudent.Course2_ID);
    puts("Enter course3 grade and ID: ");
    scanf("%d %d",&newStudent.Course3_grade,&newStudent.Course3_ID);
    //create new node in linked list
    NODE_t * newnode = (NODE_t *) malloc(sizeof(NODE_t));
    newnode->student_data = newStudent;
    newnode->next = head;
    head = newnode;
    //increment student count by 1
    student_count++;
    return TRUE;
}
void SDB_DeletEntry (uint32 id){
    NODE_t * tmp = head;
    NODE_t * prev = NULL;
    // Traverse to find the node with the matching ID
    while (tmp != NULL && tmp->student_data.Student_ID != id) {
        prev = tmp;
        tmp = tmp->next;
    }
    // If the node wasn't found
    if (tmp == NULL) {
        printf("Student ID %u not found.\n", id);
        return;
    }
    // If the node to delete is the head
    if (prev == NULL) {
        head = tmp->next;
    } else {
        prev->next = tmp->next;
    }
    student_count--;
}
bool SDB_ReadEntry (uint32 id){
    NODE_t * tmp = head;
    //traverse if ID is true it will return true
    while(tmp != NULL){
        if(tmp->student_data.Student_ID == id){
            printf("student ID: %d\n",tmp->student_data.Student_ID);
            printf("student year: %d\n",tmp->student_data.Student_year);
            printf("course1 ID and Grade: %d    %d\n",tmp->student_data.Course1_ID,tmp->student_data.Course1_grade);
            printf("course2 ID and Grade: %d    %d\n",tmp->student_data.Course2_ID,tmp->student_data.Course2_grade);
            printf("course3 ID and Grade: %d    %d\n",tmp->student_data.Course3_ID,tmp->student_data.Course3_grade);
            return TRUE;
        }
        tmp = tmp->next;
    }
    //if id not found it will return false
    printf("ID not Found");
    return FALSE;

}
void SDB_GetList (uint8 * count, uint32 * list){
    NODE_t *tmp = head;
    uint8 counter = 0;
    //traverse till end of list
    while(tmp != NULL && counter < 10){
        list[counter++] = tmp->student_data.Student_ID;
        tmp = tmp->next;
    }
    //count = counter in loop
    *count = counter;
    //function to print array
    printArray(list, *count);
}

bool SDB_IsIdExist (uint32 id){
    NODE_t * tmp = head;
    while(tmp != NULL){
        if(tmp->student_data.Student_ID == id){
            return TRUE;
        }
        tmp = tmp->next;
    }
    return FALSE;
}
/****************helping functions **************/
void printArray(int arr[], int size){
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
}