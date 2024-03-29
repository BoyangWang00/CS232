#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {

node_t * x;
node_t * temp1;
temp1 = (node_t*) malloc(sizeof(node_t));
x=temp1;
temp1->value = (char*) malloc(sizeof(char));
temp1->value = "CS232 ";

node_t * temp2;
temp2 = (node_t*) malloc(sizeof(node_t));
temp1->next = temp2;
temp2->value = (char*) malloc(sizeof(char));
temp2->value = "is ";

node_t * temp3;
temp3 = (node_t*) malloc(sizeof(node_t));
temp2->next = temp3;
temp3->value = (char*) malloc(sizeof(char));
temp3->value = "awesome";

temp3->next = temp1;

    return x;//just to pass compiler, please edit as needed.
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);

    free(x);
    free(x->value);

}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
