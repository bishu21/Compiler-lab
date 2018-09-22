#include <stdio.h>
#include "main.h"

extern int yylex();
extern int yylineno;
extern char* yytext;


char* names[] = {
					"NULL", "PROCESSOR", "ISA", "ARM", "AMD", "CDC", "MIPS", "CLOCK_SPEED", "L1_MEMORY", "L2_MEMORY", 
					"NAME", "MEMORY", "MEMORY_TYPE", "PRIMARY", "SECONDARY", "CACHE", "MEM_SIZE", "LINK", "START_POINT", 
					"END_POINT", "BANDWIDTH", "CHANNEL_CAPACITY", "JOB", "JOB_ID", "FLOPS_REQUIRED", "DEADLINE", 
					"MEM_REQUIRED", "AFFINITY", "CLUSTER", "PROCESSORS", "TOPOLOGY", "STAR", "TREE", "BUS", "RING", "MESH", 
					"LINK_BANDWIDTH", "LINK_CAPACITY", "IS_RUNNING", "SUBMIT_JOBS", "GET_CLOCK_SPEED", "RUN", "DISCARD_JOB", 
					"GET_AVAILABLE_MEMORY", "GET_MEMORY", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "CASE", "DEFAULT", 
					"INT", "FLOAT", "STRING_LITERAL", "ID", "COLON", "OPEN_CURLY", "CLOSED_CURLY", "EQUAL_TO", "OPEN_SQUARE", 
					"CLOSED_SQUARE", "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "COMMA", "SEMI", "IF", "ELSE", "SWITCH", "WHILE", 
					"DO", "FOR", "OPEN_BRACKET", "CLOSED_BRACKET", "CONTINUE", "BREAK", "RETURN", "DOT", "PLUS_PLUS", 
					"MINUS_MINUS", "NOT", "MULTIPLY", "ADD", "SUB", "DIV", "MOD", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", 
					"GREATER_THAN_EQUAL", "NOT_EQUAL", "EQUAL_EQUAL", "AND", "OR", "QUE_MARK", "QUOTE", "GLOBAL_SCHEDULER", "JOBS",
					"POLICY","LOCAL_SCHEDULER","PID","FIFO","RR","LIFO","SJF","PRIORITY","GET_ASSIGNED_JOBS","GET_PROCESSOR",
					"GET_EXEC_ORDER","GET_UNSCHEDULED_JOBS"
				};


// int main(void) 
// {
// 	int ntoken, vtoken;
// 	ntoken = yylex();
// 	while(ntoken) {
// 		printf("%d\n", ntoken);
// 		ntoken = yylex();
// 	}
// 	return 0;
// }

int main()
{
	int j;
	FILE* fp = fopen("output.txt","w");
	int ntoken; 
	ntoken = yylex(); 
	while(ntoken)
	{
		fprintf(fp,"%s\t",yytext);
		fprintf(fp,"%s\n\n",names[ntoken]); 
		ntoken = yylex(); 		
	}
	fclose(fp); 
	return 0; 
}
