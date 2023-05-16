#include <stdio.h>

int main() {
    int opcion = 0;
    int anioBase = 0;
    int anioComparar = 0;
    int cantidadAnimalesBase = 0;
    int cantidadAnimalesComparar = 0;
    
    while (opcion != 5) {
        printf("---- MENU DE OPCIONES ----\n");
        printf("1. Analizar el bosque\n");
        printf("2. Elegir año base a comparar\n");
        printf("3. Elegir año a comparar\n");
        printf("4. Disminución en número de especies animales\n");
        printf("5. Salir del programa\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("---- CANTIDAD DE POBLACION QUE HABITAN ----\n");
                // Código para analizar el bosque
                printf("Presione 'b' para volver al menú de opciones: ");
                char volverMenu;
                scanf(" %c", &volverMenu);
                break;
                
            case 2:
                printf("---- ELEGIR AÑO BASE A COMPARAR ----\n");
                printf("Lista de años disponibles: 2000, 2005, 2010, 2015, 2020\n");
                printf("Ingrese el año base: ");
                scanf("%d", &anioBase);
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 3:
                printf("---- ELEGIR AÑO A COMPARAR ----\n");
                printf("Lista de años disponibles: 2000, 2005, 2010, 2015, 2020\n");
                printf("Ingrese el año a comparar: ");
                scanf("%d", &anioComparar);
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 4:
                printf("---- DISMINUCIÓN EN NÚMERO DE ESPECIES ANIMALES ----\n");
                if (anioBase == 0) {
                    printf("Primero seleccione el año base en la opción 2.\n");
                    break;
                }
                if (anioComparar == 0) {
                    printf("Primero seleccione el año a comparar en la opción 3.\n");
                    break;
                }
                printf("Ingrese la cantidad de animales en el año base: ");
                scanf("%d", &cantidadAnimalesBase);
                printf("Ingrese la cantidad de animales en el año a comparar: ");
                scanf("%d", &cantidadAnimalesComparar);
                if (cantidadAnimalesComparar < cantidadAnimalesBase) {
                    printf("Los siguientes animales han disminuido en cantidad:\n");
                    // Código para listar los animales que han disminuido
                } else {
                    printf("La cantidad de animales no ha disminuido.\n");
                }
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 5:
                printf("Saliendo del programa...\n");
                break;
                
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    }
}              