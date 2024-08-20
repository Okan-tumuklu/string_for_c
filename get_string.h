#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef char* string;

string get_string(string msg){
	printf("%s",msg);
	
	char ch;
	int length = 0;
	int size = 2;
	string str = (string) malloc(size);
	
	if (str == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
	
	while((ch=getchar()) != EOF && ch != '\n'){
		if(length + 1 >= size){
			size+=1;
			str = (char*) realloc(str, size*sizeof(char));
			if (str == NULL) {
                printf("Memory allocation failed!\n");
                exit(1);
            }
			}
		str[length++] = ch;
		}
		
	str[length] = '\0';
	return str;
	}


