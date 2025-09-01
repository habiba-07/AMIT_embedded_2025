#include "STD.h"
#include "SDB.h"
#include "SDAPP.h"

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
            SDB_AddEntry(); 
            break;
        case 2 :
            printf("Used Size: %d\n",SDB_GetUsedSize());
            break;
        case 3 :
            puts("Enter ID: ");
            scanf("%d",&id);
            SDB_ReadEntry(id);
            break;
        case 4 :
            SDB_GetList (&stdcount,list);
            printf("\n");
            break;
        case 5 :
            puts("Enter ID: ");
            scanf("%d",&id);
            if(SDB_IsIdExist (id)){
                puts("ID found");
            }
            else  puts("ID not found");
            break;
        case 6 :
            puts("Enter ID: ");
            scanf("%d",&id);
            SDB_DeletEntry (id);
        break;
        case 7 :
        if(SDB_IsFull()) puts("List is full");
        else puts("List is not full");
        break;
        default:
        puts("INVALID ENTRY");
    }
}