
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
int main(int argc, const char * argv[]) {
    int c=5;
  int i,n=4;
    struct node /*a,b,d,*/z,*head,*tmp ;
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->value = 2;
    head = p;
    for(i=0;i<4;i++){
      p->next = (struct node*)malloc(sizeof(struct node));
       p = p->next;
      p->value = 2+(i*3); 
       printf("%3d\n", p ->value ); 
      p->next=NULL;
         
    }
/*  struct node *head=(struct node*)malloc(sizeof(struct node));
  struct node *tmp=(struct node*)malloc(sizeof(struct node));*/
   /* a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    b.next=&d;
    d.value=head ->next->value+3;
    d.next=NULL;*/


   /* printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next ->next->value );*/

    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
  /*z.value = 2;
  z.next =&a;
  head = &z;
      printf("%3d\n", head ->value ); //what value for 2
    printf("%3d\n", head ->next->value ); //what value for 5
    printf("%3d\n", head ->next ->next->value );//what value for 8
    printf("%3d\n", head ->next ->next->next ->value );//what value for 11
*/
  printf("\n");

  tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        
        for(i=0;i<n;i++){
            printf("%3d\n", tmp->value);
         tmp = tmp->next;
         
        }
    printf("\n");
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
        i=0;
      tmp=head;
         while(i<4){
            printf("%3d\n", tmp->value);
            tmp = tmp->next;
           i++;
        }
     printf("\n");
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!*/
         //use a loop to help
   
  
    /*  Exercise VI Free all node !!*/
         //use a loop to help
     tmp=head;
      p=head;
       while(tmp!=NULL){
        p=tmp->next;
         printf("Del %d\n",tmp->value);
                       free(tmp); 
      tmp=p;
          }

    
    return 0;
}
