
/* At this function we receive the matrix values from the user*/
void set_values(int (*matrix)[10]);

/* At this function we receive from the user the values of i,j 
and print "True" if there is path from i to j, otherwise it prints "False" */
int path_exists(int (*matrix)[10],int i,int j);