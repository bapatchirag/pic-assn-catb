#define ITEM_LEN 25
#define MOTD "Have a nice day!"
#define MAX_ITEM_LIST 150


// Objective 1
int set_profitper(float*);

// Objective 2
int make_invoice();

//Objective 3


//Objective 4


typedef struct{
	char name[50];
	char rest_code[10];		//Business id?
	float taxp;
	
}cat_details;




typedef struct{
	int date[3];
	int time[2];
} datetime;


typedef struct{
	int item_number;
	char name[25];
	float sprice;
	float profit;
} inventory_piece;

typedef struct{
	char recep[25];
	datetime ptime;
	int item_numbers[100][2];
	int pieces_len;
} invoice;
