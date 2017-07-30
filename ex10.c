#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("ERROR: You need at least one argument.\n");
		// this is how you abort a program
		return 1;
	}
	
	for (int j = 1; j < argc; j++) {

		for (int i = 0; argv[j][i] != '\0'; i++) {
			char letter = argv[j][i];
		
			switch(letter) {
				case 'a':
				case 'A':
					printf("%d: 'A'\n", i);
					break;
			
				case 'e':
				case 'E':
					printf("%d: 'E'\n", i);
					break;
			
				case 'i':
				case 'I':
					printf("%d: 'I'\n", i);
					break;		
			
				case 'o':
				case 'O':
					printf("%d: 'O'\n", i);
					break;
			
				case 'u':
				case 'U':
					printf("%d: 'U'\n", i);
					break;

				case 'y':
				case 'Y':
					// why i >2? is this a bug?	
					if (i > 2) {
						// its only sometimes Y
						printf("%d: 'Y'\n", i);
					}
					break;
			
				default:
					printf("%d: %c is not a vowel.\n", i, letter);
			}
		}
	}	
	return 0;
}
