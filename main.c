
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
    struct node a,b,*head,d,z,*temp ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    b.next=&d;
    d.value=head ->next->value+3;
    d.next=NULL;


   /* printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next ->next->value );*/

    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
  z.value = 2;
  z.next =p;
  head = &z;
      printf("%d\n", head ->value ); //what value for 2
    printf("%d\n", head ->next->value ); //what value for 5
    printf("%d\n", head ->next ->next->value );//what value for 8
    printf("%d\n", head ->next ->next->next ->value );//what value for 11

  printf("\n");
  
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d\n", tmp->value);
         tmp = tmp->next;
         
        }
    printf("\n");
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
        i=0;
      tmp=head;
         while(tmp!=NULL){
            printf("%3d\n", tmp->value);
            tmp = tmp->next;
           
        }
     printf("\n");
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!*/
         //use a loop to help
    struct node *p=(struct node*)malloc(sizeof(struct node)*100);
    struct node *q=(struct node*)malloc(sizeof(struct node)*100);
    struct node *r=(struct node*)malloc(sizeof(struct node)*100);
    struct node *s=(struct node*)malloc(sizeof(struct node)*100);
    p->value = c;
    p->next=q;
    head=p;
    q->value=head->value+3;
    q->next=r;
    r->value=head ->next->value+3;
    r->next=NULL;
  s->value = 2;
  s->next =p;
  head = s;
  

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    return 0;
}
