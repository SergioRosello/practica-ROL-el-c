#include <stdio.h>
#include <conio.h>
main()
{
	menuDeOpciones();
	seleccionDeOpcion();
}
void menuDeOpciones()
{
	char opcion1[] = "1. Crea un guerrero:\n";								//Medio hecho!
	char opcion2[] = "2. A LA BATALLA:\n";
	char opcion3[] = "3. ver tus guerreros:\n";
	char opcion4[] = "4. Volver a empezar:\n";								//done!!
	char opcion5[] = "5. Salir del juego:\n";								//done!!
	printf("%s%s%s%s%s", opcion1, opcion2, opcion3, opcion4, opcion5);
}
void seleccionDeOpcion()
{
	int opcionSelecionada = 0;
	scanf("%d", &opcionSelecionada);
	switch (opcionSelecionada)
	{
	case 1:
	{
		char texto[] = "Vas a crear un guerrero\n";
		printf("%s", texto);
		creacionDelGuerrero();
		break;
	}
	case 2:
	{
		char texto[] = "Vas a la guerra\n";
		printf("%s", texto);
		break;
	}
	case 3:
	{
		char texto[] = "vamos a ver cuales son tus guerreros\n";
		printf("%s", texto);
		verGuerreros();																//No entiendo porque aqui no funciona: "Error, too few arguments in function call"
		break;
	}
	case 4:
	{
		char texto[] = "Volvamos a empezar la partida\n";
		printf("%s", texto);
		menuDeOpciones();
		break;
	}
	case 5:
	{
		char texto[] = "Saliendo del juego\n";
		printf("%s", texto);
		salirDelJuego();
		break;
	}
	default:
		printf("Esto no es una opcion\nVuelve a elejir.\n");
		menuDeOpciones();
		//exit(0);

	}
}
void creacionDelGuerrero()
{

	struct guerrero
	{
		char name[32];
		int ataque;
		int vida;
	};
	struct guerrero player[2];
	int x;

	for (x = 0; x < 2; x++)
	{
		printf("Introduce el nombre de tu guerrero %d: ", x + 1);
		scanf("%s", player[x].name);
		printf("Introduce su ataque: ");
		scanf("%d", &player[x].ataque);
		printf("Introduce su vida %d: ");
		scanf("%d", &player[x].vida);

	}
	menuDeOpciones();
}
void salirDelJuego()
{
	exit(0);
}
void verGuerreros()
{
	puts("Player Info\n");
	printf("#\tName\tAtaque\tVida\n");
	for (x = 0; x < 2; x++)
	{
		printf("%d\t%s\t%d\t%d\n", x + 1, player[x].name, player[x].ataque, player[x].vida);
	}
}