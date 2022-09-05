
#include <cstdio>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	char a;
	float numer;
	int numer1, numer2, elo;
	
	do{
		
		printf("MENU \n\n" "Nacisnij odpowiednia cyfre od 1 do 4 \n");
		printf("1. Zaokraglij (2 cyfry) \n");
		printf("2. System szesnastkowy \n");
		printf("3. Liczba z zerami (6 cyfr) \n");
		printf("4. Wyjscie \n\n");
		printf("Wybierz operacje:");	
	a = getch();
	switch(a){
		
		case '1':
			printf("\n Podaj a:");
			scanf("%2lf, &numer");
			printf("%.2lf", numer);
			system("pause");
		break;
		
		case '2':
			printf("\n Podaj a:");
			scanf("%d, &numer1");
			printf("%x \n\n\n\n", numer1);
			system("pause");
		break;
		
		case '3':
			printf("Podaj a:");
			scanf("%d, &numer2");
			printf("%06d", numer2);
			system("pause");
		break;
		
		case '4':
			return 0;
		break;
	}
}while(true);
}
