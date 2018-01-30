#include<stdio.h>
#include<stdlib.h>

#define LIST_SIZE 5

typedef struct LIST {
	int value;
	struct LIST *next;
} LIST;

void init_list1(LIST **list, int size) {
	LIST *p = *list;
	int i;
	for(i=0;i<size-1;i++) {
		p[i].value = 2*i+1;
		p[i].next = &p[i+1];
	}
	
	p[size-1].value = 2*(size-1)+1;
	p[size-1].next = NULL;
}

void init_list2(LIST **list, int size) {
	LIST *p = *list;
	int i;
	for(i=0;i<size-1;i++) {
		p[i].value = 2*i+2;
		p[i].next = &p[i+1];
	}
	
	p[size-1].value = 2*(size-1)+2;
	p[size-1].next = NULL;
}

void print_list(LIST *list) {
	printf("+++++++++++++++++++++++++\n");
	LIST *p = list;
	while(p) {
		printf("%d\n",p->value);
		p = p->next;
	}
}

LIST *merge1(LIST *list1, LIST *list2) {
	if(NULL == list1)
		return list2;
	if(NULL == list2)
		return list1;
	

	LIST *h = NULL;
	LIST *p = list1;
	LIST *q = list2;

	if(p->value < q->value) {
		h = p;
		p = p->next;
	}else{
		h = q;
		q = q->next;
	}

	h->next = merge1(p, q);

	return h;
}

LIST *merge2(LIST *list1, LIST *list2) {
	if(NULL == list1)
		return list2;
	if(NULL == list2)
		return list1;
	

	LIST *h = NULL;
	LIST *t = NULL;

	LIST *p = list1;
	LIST *q = list2;

	if(list1->value < list2->value) {
		h = list1;
		p = list1->next;
	}else{
		h = list2;
		q = list2->next;
	}
	
	LIST *result = h;

	while(p && q) {
		if(p->value < q->value) {
			result->next = p;
			p = p->next;
		}else{
			result->next = q;
			q = q->next;
		}

		result = result->next;
	}
	if(p){
		result->next=p;
	}
	if(q){
		result->next=q;
	}

	return h;
}


int main() {
	LIST *list1 = (LIST *)malloc(LIST_SIZE * sizeof(LIST));
	if (NULL == list1)
		return -1;
	
	LIST *list2 = (LIST *)malloc(LIST_SIZE * sizeof(LIST));
	if (NULL == list2)
		return -1;
	
	init_list1(&list1, LIST_SIZE);
	print_list(list1);

	init_list2(&list2, LIST_SIZE);
	print_list(list2);

	//LIST *p = merge1(list1, list2);
	//print_list(p);

	LIST *q = merge2(list1, list2);
	print_list(q);
}

