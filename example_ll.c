/************************************************************************ 
 * Purpose: To demonstrate 'linked lists' This program will build a
 *	    linked list and place data into it. When the data is exausted
 *	    the contents of the list are O/P.
 *
 *	    This is a "First in First out" (FIFO) list.
 *
 * Author:  M. J. Leslie
 *
 * Date:    11-May-95
 ************************************************************************/

#include <stdlib.h>		/* malloc				*/

/************************************************************************/

struct x {			/* Declare a structure			*/
	char name[20]; 
	int age; 
	struct x *next_rec;
	};

/************************************************************************/

int main()
{
  struct x *start_pointer;	/* Define pointers to the structure	*/
  struct x *next_pointer;

				/* Create some data to be placed in the
				 * Linked list.				*/
  char *names[]=
  {
    "Martin",
    "John  ",
    "Alex  ",
    "Paul  ",
    "Ann   ",
    ""
  };

  int ages[]={32, 43, 29, 42,38,9 0};

  int count=0;			/* General purpose counter.		*/

   /*===================================================================*
    =									=
    = 	Build a LINKED LIST and place data into it.			=
    =									=
    *===================================================================*/
       
    /* Initalise 'start_pointer' by reserving memory and pointing to it	*/

  start_pointer=(struct x *) malloc (sizeof (struct x));

   /* Initalise 'next_pointer' to point to the same location.		*/
  next_pointer=start_pointer;


  strcpy(next_pointer->name, names[count]);
  next_pointer->age = ages[count];


  while ( ages[++count] != 0 )
  {
				/* Reserve more memory and point to it	*/

    next_pointer->next_rec=(struct x *) malloc (sizeof (struct x));

    next_pointer=next_pointer->next_rec;
    strcpy(next_pointer->name, names[count]);
    next_pointer->age = ages[count];


  }

  next_pointer->next_rec=NULL;

   /*===================================================================*
    = 	Traverse the linked list and O/P all the data within it.	=
    *===================================================================*/


  next_pointer=start_pointer;


  while (next_pointer != NULL)
  {
    printf("%s   ", next_pointer->name);
    printf("%d \n", next_pointer->age);
    next_pointer=next_pointer->next_rec;
  }
  return(0);
}

/************************************************************************ 
 *
 *	Program results.
 *
 * Martin   32 
 * John     43 
 * Alex     29 
 *
 ************************************************************************/


/*                                                                                               */
/*                                                                                               */
/*   *===================================================================*                      */
/*    =									=                                                        */
/*    = 	Build a LINKED LIST and place data into it.			=                                */
/*    =									=                                                        */
/*    *===================================================================*                      */
/*                                                                                               */
/*				* Initalise 'start_pointer' by reserving                                        */
/*				 * memory and pointing to it		*                                           */
/*                                                                                               */
/*  start_pointer=(struct x *) malloc (sizeof (struct x));                                       */
/*                                                                                               */
/*				* Initalise 'next_pointer' to point                                             */
/*				 * to the same location.		*                                               */
/*  next_pointer=start_pointer;                                                                  */
/*                                                                                               */
/*   *********************************************************************                      */
/*    *                                                                                          */
/*    *     start_pointer ---                                                                    */
/*    *                     |                                                                    */
/*    *                     |                                                                    */
/*    *                     V                                                                    */
/*    *			  -----------------                                                              */
/*    *			 |        |    |   |                                                             */
/*    *			  -----------------                                                              */
/*    *                     A                                                                    */
/*    *                     |                                                                    */
/*    *                     |                                                                    */
/*    *      next_pointer ---                                                                    */
/*    *                                                                                          */
/*    *********************************************************************                     */
/*                                                                                               */
/*				* Put some data into the reserved                                               */
/*				 * memory.				*                                                       */
/*                                                                                               */
/*  strcpy(next_pointer->name, names[count]);                                                    */
/*  next_pointer->age = ages[count];                                                             */
/*                                                                                               */
/*   *********************************************************************                      */
/*    *                                                                                          */
/*    *     start_pointer ---                                                                    */
/*    *                     |                                                                    */
/*    *                     |                                                                    */
/*    *                     V                                                                    */
/*    *			  -----------------                                                              */
/*    *			 |Martin  | 32 |   |                                                             */
/*    *			  -----------------                                                              */
/*    *                     A                                                                    */
/*    *                     |                                                                    */
/*    *                     |                                                                    */
/*    *      next_pointer ---                                                                    */
/*    *                                                                                          */
/*    *********************************************************************                     */
/*                                                                                               */
/*                                                                                               */
/*				* Loop until all data has been read	*                                       */
/*                                                                                               */
/*  while ( ages[++count] != 0 )                                                                 */
/*  {                                                                                            */
/*				* Reserve more memory and point to it	*                                       */
/*                                                                                               */
/*    next_pointer->next_rec=(struct x *) malloc (sizeof (struct x));                            */
/*                                                                                               */
/*                                                                                               */
/*      ******************************************************************                      */
/*       *                                                                                       */
/*       *     start_pointer ---                                                                 */
/*       *                     |                                                                 */
/*       *                     |                                                                 */
/*       *                     V                                                                 */
/*       *	             -----------------                                                       */
/*       *		    |Martin  | 32 | | |                                                          */
/*       *		     ---------------|-                                                           */
/*       *                     A		    |                                                    */
/*       *                     |		    V                                                    */
/*       *                     |		    ---------------                                      */
/*       *      next_pointer ---             |               |                                   */
/*       *				    ---------------                                                      */
/*       *                                                                                       */
/*       ******************************************************************                     */
/*                                                                                               */
/*    next_pointer=next_pointer->next_rec;                                                       */
/*                                                                                               */
/*      ******************************************************************                      */
/*       *                                                                                       */
/*       *     start_pointer ---                                                                 */
/*       *                     |                                                                 */
/*       *                     |                                                                 */
/*       *                     V                                                                 */
/*       *	             -----------------                                                       */
/*       *		    |Martin  | 32 | | |                                                          */
/*       *		     ---------------|-                                                           */
/*       *                      		    |                                                    */
/*       *                      		    V                                                    */
/*       *                      		    ---------------                                      */
/*       *      next_pointer --------------->|               |                                   */
/*       *				    ---------------                                                      */
/*       *                                                                                       */
/*       ******************************************************************                     */
/*                                                                                               */
/*    strcpy(next_pointer->name, names[count]);                                                  */
/*    next_pointer->age = ages[count];                                                           */
/*                                                                                               */
/*      ******************************************************************                      */
/*       *                                                                                       */
/*       *     start_pointer ---                                                                 */
/*       *                     |                                                                 */
/*       *                     |                                                                 */
/*       *                     V                                                                 */
/*       *	             -----------------                                                       */
/*       *		    |Martin  | 32 | | |                                                          */
/*       *		     ---------------|-                                                           */
/*       *                      		    |                                                    */
/*       *                      		    V                                                    */
/*       *                      		    ----------------                                     */
/*       *      next_pointer --------------->|John   | 43 |   |                                  */
/*       *				    ----------------                                                     */
/*       *                                                                                       */
/*       ******************************************************************                     */
/*                                                                                               */
/*  }                                                                                            */
/*                                                                                               */
/*  next_pointer->next_rec=NULL;                                                                 */
/*                                                                                               */
/*   *===================================================================*                      */
/*    =									=                                                        */
/*    = 	Traverse the linked list and O/P all the data within it.	=                        */
/*    =									=                                                        */
/*    *===================================================================                       */                     
/*                                                                                               */
/*                                                                                               */
/*  next_pointer=start_pointer;                                                                  */
/*                                                                                               */
/*   ******************************************************************                         */
/*    *                                                                                          */
/*    *     start_pointer ---                                                                    */
/*    *                     |                                                                    */
/*    *                     |                                                                    */
/*    *                     V                                                                    */
/*    * 	                  -----------------                                                  */
/*    *		         |Martin  | 32 | | |                                                         */
/*    *		          ---------------|-                                                          */
/*    *                     A	         |                                                       */
/*    *                     |		 V                                                           */
/*    *                     |		 ----------------                                            */
/*    *      next_pointer ---             |John   | 43 |   |                                     */
/*    *				         ----------------                                                    */
/*    *                                                                                          */
/*    ******************************************************************                        */
/*                                                                                               */
/*  while (next_pointer != NULL)                                                                 */
/*  {                                                                                            */
/*    printf("%s   ", next_pointer->name);                                                       */
/*    printf("%d \n", next_pointer->age);                                                        */
/*    next_pointer=next_pointer->next_rec;                                                       */
/*                                                                                               */
/*      ******************************************************************                      */
/*       *                                                                                       */
/*       *     start_pointer ---                                                                 */
/*       *                     |                                                                 */
/*       *                     |                                                                 */
/*       *                     V                                                                 */
/*       *	             -----------------                                                       */
/*       *		    |Martin  | 32 | | |                                                          */
/*       *		     ---------------|-                                                           */
/*       *                      		    |                                                    */
/*       *                      		    V                                                    */
/*       *                      		    ----------------                                     */
/*       *      next_pointer --------------->|John   | 43 |   |                                  */
/*       *				    ----------------                                                     */
/*       *                                                                                       */
/*       ******************************************************************                     */
/*  }                                                                                            */
/*                                                                                               */
/*}                                                                                              */
/*                                                                                               */
/*************************************************************************                      */
/* *                                                                                             */
/* *	Program results.                                                                         */
/* *                                                                                             */
/* * Martin   32                                                                                 */
/* * John     43                                                                                 */
/* * Alex     29                                                                                 */
/* *                                                                                             */
/* ************************************************************************                     */
