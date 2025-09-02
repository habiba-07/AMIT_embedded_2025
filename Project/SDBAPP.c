#include "STD.h"
#include "SDB.h"
#include<stdio.h>

void SDB_APP (){
while(1){
    uint8 option;
    printf("enter option from 0-7: ");
    scanf("%d",&option);
    SDB_action(option);
    }
}
void SDB_action (uint8 choice){
    uint32 id;
    uint8 stdcount;
    uint32 list[10];
switch(choice){
        case 0 :  
            return;
        case 1 : 
        printf("Add Entry\n");
            SDB_AddEntry(); 
            break;
        case 2 :
        printf("Get Used Size\n");
        printf("Used Size: %d\n",SDB_GetUsedSize());
        break;
        case 3 :
        printf("Read Entry\n");
            puts("Enter ID: ");
            scanf("%d",&id);
            SDB_ReadEntry(id);
            break;
        case 4 :
        printf("Get List of IDs\n");
            SDB_GetList (&stdcount,list);
            printf("\n");
            break;
        case 5 :
        printf("Check ID exist\n");
            puts("Enter ID: ");
            scanf("%d",&id);
            if(SDB_IsIdExist (id)){
                puts("ID found");
            }
            else  puts("ID not found");
            break;
        case 6 :
        printf("Delete Entry\n");
            puts("Enter ID: ");
            scanf("%d",&id);
            SDB_DeletEntry (id);
        break;
        case 7 :
        printf("Check List is Full\n");
        if(SDB_IsFull()) puts("List is full");
        else puts("List is not full");
        break;
        default:
        puts("INVALID ENTRY");
    }
}