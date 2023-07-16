/*
ENEMBE VERINE ICHUMBEI	FE20A033
AMNGINYUWEPNJE CLINTON MBURLI	FE20A010
NGI KEVIN AYUK	FE20A076
NDALEGH NOELA LUM MBAH	FE20A070
NGI  KEVIN  AYUK	FE20A076
*/
#include <stdio.h>
#include <stdlib.h>
//data Structure to handel linked list polynomial
struct poly_Node
//@Alkaloid Wells

{
 int coef;
 int exp;
 struct poly_Node *next;  };
// power function
int Pow(int base, int a) {
    if (a != 0)
        return (base * Pow(base, a - 1));
    else
        return 1;
}
//all function decleration
void Create_Poly(struct poly_Node **,int,int);
void Display_poly(struct poly_Node *);
void Add_poly(struct poly_Node **,struct poly_Node **,struct poly_Node**);
void Multiply_poly(struct poly_Node **,struct poly_Node **,struct poly_Node **);
void Dgree_poly(struct poly_Node *);
void Evaluate_poly(struct poly_Node *start1, int x);

int main()

{

struct poly_Node *start_p=NULL,*start_q=NULL,*start_r=NULL;
int i,n,c,e;
//collection first polinomial
printf("Enter first polynomial!\n");
printf("Enter no of terms:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    int o = i+1;
printf("Enter coefficient %d:  ", o);
scanf("%d",&c);
printf("Enter exponent: ");
scanf("%d",&e);
Create_Poly(&start_p,c,e); // function to crate node and store pollynomial
}
printf("First polynomial: ");
Display_poly(start_p);  // display first polynomial
printf("\n");
Dgree_poly(start_p); //display the dgree the first pollynomial

printf("\n");
Evaluate_poly(start_p, 2); // evaluationg the firt polynomial
printf("\n");
// collection the second pollynomial
printf("Enter second polynomial!\n");
printf("Enter no of terms:");
scanf("%d",&n); //collecting the number of terms of the pollynomial
for(i=0;i<n;i++)
{
   int o = i+1;
 printf("Enter coefficient %d:  ", o);
 scanf("%d",&c);
 printf("Enter exponent: ");
 scanf("%d",&e);
 Create_Poly(&start_q,c,e);
}
printf("Second polynomial: ");
Display_poly(start_q);

printf("\n");
Dgree_poly(start_p);

printf("\n");

printf("First polynomial: ");
Display_poly(start_p);
printf("\n");
printf("\n");
printf("Second polynomial: ");
Display_poly(start_q);
printf("\n");
// adding firt and second pollynomial
Add_poly(&start_p,&start_q,&start_r);
printf("Sum of two polynomial:\n");
Display_poly(start_r);
printf("\n");
start_r=NULL;
// multiplying firt and second pollynomial
Multiply_poly(&start_p,&start_q,&start_r);
printf("Product of the two polynomial:\n");
Display_poly(start_r);
printf("\n");
//printf(" %d ", y);
//getch();
 return 0;
}
// defination of create and sore pollynomial terms in sorted oder
//taking not of all condithion to be meet
void Create_Poly(struct poly_Node **start,int c,int e)

{
 struct poly_Node *temp,*temp1,*prev;

 if (*start==NULL)
 {
    temp=(struct poly_Node*)malloc(sizeof(struct poly_Node));

if (temp==NULL)
printf("Node is not created, Term cannot be inserted\n");

else

{
   temp->coef=c;
   temp->exp=e;
   temp->next=NULL;
   *start=temp;

  }}

else

{ temp1=*start;

  while (temp1!=NULL && temp1->exp>e)

  {
   prev=temp1;
   temp1=temp1->next;
  }

  if(temp1==NULL)
  {
   temp=(struct poly_Node *)malloc(sizeof(struct poly_Node));

   if (temp==NULL)
    printf("Node is not created\n");
   else

   {
    temp->coef=c;
    temp->exp=e;
    temp->next=NULL;
    prev->next=temp;

   }

  }

  else

  {
      if(temp1->exp==e)
      temp1->coef=temp1->coef+c;

   else

   {
       if(temp1==*start)
    {
        temp=(struct poly_Node *)malloc (sizeof (struct poly_Node));
        if(temp==NULL)
            printf("Node is not created\n");
     else

     {
         temp->coef=c;
         temp->exp=e;
         temp->next=*start;
        *start=temp;

     }
     }

    else

    {
        temp=(struct poly_Node *)malloc(sizeof(struct poly_Node));
        if (temp==NULL)
         printf("Node is not created\n");

     else

     {
      temp->coef=c;
      temp->exp=e;
      temp->next=temp1;
      prev->next=temp;

     }}}

  }}}
//defing how we display a pollynomial
void Display_poly(struct poly_Node *start)
{
   struct poly_Node *temp;
   temp=start;
 if (temp==NULL)
  printf("Empty polynomial\n");
 else

 {
     while(temp!=NULL)
  {
      printf("%d x^%d",temp->coef,temp->exp);
      temp=temp->next;

   if(temp!=NULL)
   printf(" + ");

   else
   printf("\n");

  }}}
//adding two pollynomials
void Add_poly(struct poly_Node** start_p,struct poly_Node **start_q,struct poly_Node** start_r)
{
    int c,e;
    struct poly_Node *pptr,*qptr;
    *start_r=NULL;
    pptr=*start_p;
    qptr=*start_q;

 while(pptr!=NULL && qptr!=NULL)

 {
     if (pptr->exp==qptr->exp)
  {

   c=pptr->coef+qptr->coef;
   e=pptr->exp;
   Create_Poly(start_r,c,e);
   pptr=pptr->next;
   qptr=qptr->next;

  }

  else

  {
      if (pptr->exp>qptr->exp)
   {
    c=pptr->coef;
    e=pptr->exp;
    Create_Poly(start_r,c,e);
    pptr=pptr->next;

   }

 else

   {
    c=qptr->coef;
    e=qptr->exp;
    Create_Poly(start_r,c,e);
    qptr=qptr->next;

   } } }

 while(pptr!=NULL)

 {

  c=pptr->coef;
  e=pptr->exp;
  Create_Poly(start_r,c,e);
  pptr=pptr->next;

 }

 while (qptr!=NULL)

 {

  c=qptr->coef;
  e=qptr->exp;
  Create_Poly(start_r,c,e);
  qptr=qptr->next;

 }}

void Multiply_poly(struct poly_Node ** start_p,struct poly_Node **start_q,struct poly_Node** start_r)

{
 int c,e;
 struct poly_Node *pptr,*qptr;
 *start_r=NULL;
  pptr=*start_p;
  qptr=*start_q;

 if (*start_p==NULL && *start_q==NULL)

  printf("\nMultiplication of polynomial is not possible!\n");

else

 { while(pptr!=NULL)

  {
   qptr=*start_q;

   while(qptr!=NULL)

   {

    c=pptr->coef*qptr->coef;
    e=pptr->exp+qptr->exp;
    Create_Poly(start_r,c,e);
    qptr=qptr->next;

   }

   pptr=pptr->next;

   }
   }
   }
  void Dgree_poly(struct poly_Node *start)
   {
       struct poly_Node *temp2;
       temp2 = start;
       //temp2 = *start;
       int bb = 0;
       while(temp2->next != NULL)
       {
            if(temp2->exp > temp2->next->exp)
       {
           bb = temp2->exp;
       }
       else
       {
           bb = temp2->next->exp;
       }
        temp2 = temp2->next;
       }
     printf("The Degree of the pollinomil is %d: ", bb);

   }
   void Evaluate_poly(struct poly_Node *start1, int x)
   {
      struct poly_Node *temp1;
      temp1 = start1;
      int y = 0;
        while(temp1 != NULL)
        {
           y = y + ((Pow(x, temp1->exp))* temp1->coef);

           temp1 = temp1->next;
        }
        printf("the value of  P(%d)  = %d:  ", x, y);

   }
