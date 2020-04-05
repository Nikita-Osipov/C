#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island * next;
} island;

void display(island *start){
	island *i = start;
	for ( ; i != NULL; i=i->next){
		printf("Name %s, open %s, close %s\n", i->name, i->opens, i->closes);
	}
}

void release(island *start){
	island *i = start;
	island *next = NULL;
	for ( ; i != NULL ; i = next){
		next = i->next;
		free(i->name);
		free(i->opens);
		free(i->closes);
		free(i->next);
		free(i);
	}
}

void menu()
{
    char s[7][60] = {
        "1)To create the first element of the singly linked list.",
        "2)Add the element to the end of a singly linked list.",
        "3)Delete the element from the end of a singly linked list.",
        "4)To view a singly linked list.",
        "5)Delete a singly linked list.",
        "6)Search of the element in the singly linked list.",
        "7)Exit."};
    int i;
    printf("\n%s","To choose the element of the list: (1,..,7).\n");
    for(i=0;i<7;i++)
        printf("%s\n",s[i]);
}


int main()
{
    int a, N=1, mode = 0, n;
    char t;
    char name[40][50];
    char opens[40][50];
    char closes[40][50];
    island *arr = (island*)malloc(sizeof(island));
    do{
        do{
            menu();
            scanf("%s",&t);
        }while(t<'1' || t>'7');
        if(t == '1'){
            if(mode == 0){
                mode = 1;
                printf("\n%s","Name:");
                scanf("%s",&name[0]);
                printf("\n%s","Opens:");
                scanf("%s",&opens[0]);
                printf("\n%s","Closes:");
                scanf("%s",&closes[0]);
                arr[0].name = name[0];
                arr[0].opens = opens[0];
                arr[0].closes = closes[0];
                arr[0].next = NULL;
            }
            else
                printf("\n%s","The first element was created.\n");
            }
        if(t == '2'){
            if(mode != 0){
                printf("\n%s","Name:");
                scanf("%s",&name[N]);
                printf("\n%s","Opens:");
                scanf("%s",&opens[N]);
                printf("\n%s","Closes:");
                scanf("%s",&closes[N]);
                arr = (island*)realloc(arr, sizeof(island)*(N+1));
                arr[N].name = name[N];
                arr[N].opens = opens[N];
                arr[N].closes = closes[N];
                arr[N].next = NULL;
                arr[N-1].next = &arr[N];
                N += 1;
            }
            else
                printf("\n%s","To create the first element.\n");
        }
        if(t == '3'){
            if(N>1){
                arr[N-2].next = NULL;
                N--;
            }
            else{
                free(&arr[0]);
                island *arr = (island*)malloc(sizeof(island));
                mode = 0;
            }
        }
        if(t == '4')
            if(mode == 0)
                printf("\n%s\n","The list is empty.");
            else
                display(&arr[0]);
        if(t == '5'){
            if(mode != 0){
                release(&arr[0]);
                N = 1;
                island *arr = (island*)malloc(sizeof(island));
                mode = 0;
            }
        }
        if(t == '6'){
            printf("\n%s","Key word:");
            char word[50];
            scanf("%s",&word);
            for(a = 0; a < N; a++){
                if (strcmp (arr[a].name, word)==0 || strcmp (arr[a].opens, word)==0 || strcmp (arr[a].closes, word)==0)
                    printf("\n%s %d\n","Struct #:",a);
            }
        }
    }while(t != '7');
    return 0;

}
