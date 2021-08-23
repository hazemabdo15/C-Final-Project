//https://github.com/hazemabdo15/C-Final-Project.git
#include<stdio.h>
int print_menu(void) {
	int c;
	printf("Choose one of the following options : \n");
	printf("[1] Encrypt the message \n");
	printf("[2] Decrypt the message \n");
	printf("[3] Exit the program \n");
	scanf_s("%d", &c);
	return c;
}


void encrypt(void) {
	char user_input[50];
	int i;
	printf("PLease type the message you want to encrypt : \n");
	scanf_s("%s", user_input);
	for(i = 0; (i < 50 && user_input[i] != '\0'); i++)
        user_input[i] = user_input[i] + 3;
	printf("\nEncrypted string: %s\n", user_input);

}



void decrypt() {
	char user_input2[50];
	int i;
	printf("PLease type the message you want to decrypt : \n");
	scanf_s("%s", user_input2);
	 for(i = 0; (i < 50 && user_input2[i] != '\0'); i++)
        user_input2[i] = user_input2[i] - 3;
    printf("\nDecrypted string: %s\n", user_input2);
}


int main() {
	int choice;
	choice = print_menu();
	while (choice != 3) {
		if (choice == 1) {
			encrypt();
		}
		else if (choice == 2) {
			decrypt();
		}
		choice = print_menu();
	}
	return 0 ;
}
