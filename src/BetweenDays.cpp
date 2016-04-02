/*
Q4: Two dates are given in a 8 node single linked list form,where each node
has one digit only, dates 01-31, months 01-12, year 0000-9999.

Find the number of days in between those two dates .[Exclusive]

Ex : Date1:  0->1->0->1->2->0->0->4 .
     Date2 : 0->5->0->1->2->0->0->4 should return 3 .
As there are 3 days between Jan1st 2004 and Jan 5th 2004.

Ex 2 : Date1 : 3->1->1->2->2->0->1->2.
       Date2 : 0->2->0->1->2->0->1->3 should return 1 .
(There is only one day between 31st Dec 2012 and 2nd  Jan 2013 .)

Note : Consecutive Days and Same Days should return 0;
->Return -1 for NULL Inputs .
->Between Days have to be calculated by not including start and end date .
->The SLL will have 8 Nodes in all cases . Month 9 will be represented as 09.

Difficulty : Hard 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node{
	int data;
	struct node *next;
};
int checkValid(node * dob){
	if (dob == NULL)return -1;
	int dd=0, mm=0, yy=0, i=3;
	dd = dob->data;
	dob = dob->next;
	dd = dd * 10 + dob->data;
	mm = dob->data;
	dob = dob->next;
	mm = mm * 10 + dob->data;
	dob = dob->next;
	while (dob!=NULL){
		yy = yy * 10 + dob->data;
		dob = dob->next;
	}
	if (yy % 4 == 0){
		if (mm == 2){
			if (dd <= 0 || dd>29)return -1;
		}
	}
	else{
		if (mm = 2){
			if (dd <= 0 || dd>28)return -1;
		}
	}
	if (dd <= 0 || dd>31 || mm <= 0 || mm>12 || yy <= 0 || yy>9999)
		return -1;
	else return 0;

}

int between_days(struct node *date1head, struct node *date2head){
	int res1, res2;
	int dd = 0, mm = 0, yy = 0, i = 3;
	res1 = checkValid(date1head);
	res2 = checkValid(date2head);
	if (res1 == -1 || res2 == -1)return -1;
	dd = date1head->data;
	date1head = date1head->next;
	dd = dd * 10 + date1head->data;
	mm = date1head->data;
	date1head = date1head->next;
	mm = mm * 10 + date1head->data;
	date1head = date1head->next;
	while (date1head != NULL){
		yy = yy * 10 + date1head->data;
		date1head = date1head->next;
	}
	
}