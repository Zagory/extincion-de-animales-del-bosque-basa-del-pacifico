#include <stdio.h>
#include <stdlib.h> // Necesario para la función system()

void mostrarTabla() {
    printf("---- TABLA DE DATOS ----\n");
    printf("|              | 2018 | 2019 | 2020 |\n");
    printf("|--------------|------|------|------|\n");
    printf("| Comadreja    | 17   | 6    | 11   |\n");
    printf("| Ocelote      | 7598 | 7471 | 7519 |\n");
    printf("| Perezoso     | 1871 | 1840 | 1827 |\n");
}

int main() {
    int opcion = 0;
    int anioBase = 0;
    int anioComparar = 0;
    int cantidadAnimalesBase = 0;
    int cantidadAnimalesComparar = 0;
    int num1, num2;
    char volverMenu;

    while (opcion != 6) {
        system("clear"); // En sistemas UNIX
        //system("cls"); // En sistemas Windows

        printf("---- MENU DE OPCIONES ----\n");
        printf("1. Analizar el bosque\n");
        printf("2. Elegir año base a comparar\n");
        printf("3. Elegir año a comparar\n");
        printf("4. Disminución en número de especies animales\n");
        printf("5. Mostrar tabla de datos\n");
        printf("6. Salir del programa\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("---- CANTIDAD DE POBLACION QUE HABITAN ----\n");
                printf("El análisis del bosque:\n");
                printf("El Bosque Basal del Pacífico es un ecosistema excepcionalmente rico y diverso que se encuentra a lo largo de la costa oeste de América del Norte, desde el sur de Alaska hasta el norte de California. Este bosque se caracteriza por su clima templado, alta pluviosidad y la presencia de una densa vegetación compuesta principalmente por árboles de hoja perenne.\n\n");
                printf("Biodiversidad: El Bosque Basal del Pacífico alberga una gran diversidad de especies de plantas y animales. Entre los árboles más emblemáticos se encuentran las secuoyas, los abetos de Douglas, los cedros y los abetos amabilis. Estas especies gigantes son fundamentales para el equilibrio del ecosistema y proporcionan hábitats vitales para numerosas especies animales. También es hogar de una variedad de arbustos, helechos y musgos que contribuyen a la riqueza de la biodiversidad del bosque.\n\n");
                printf("Importancia ecológica: El Bosque Basal del Pacífico desempeña un papel crucial en la regulación del clima regional y global. Los árboles de hoja perenne capturan grandes cantidades de dióxido de carbono (CO2) a través de la fotosíntesis, ayudando a reducir el efecto invernadero y mitigar el cambio climático. Además, actúa como una barrera natural contra la erosión costera, protegiendo el litoral de la acción de las olas y las tormentas.\n\n");
                printf("Hábitat de especies: Este ecosistema alberga una gran cantidad de especies animales, incluyendo mamíferos como osos negros, ciervos, linces, pumas y diversas especies de roedores. Además, es hogar de una amplia variedad de aves, desde águilas calvas hasta gorriones y colibríes. Los ríos y arroyos que atraviesan el bosque ofrecen un hábitat vital para diversas especies de peces, como el salmón, la trucha y el esturión.\n\n");
                printf("Amenazas: A pesar de su importancia ecológica, el Bosque Basal del Pacífico enfrenta varias amenazas. La deforestación, principalmente debido a la tala indiscriminada de árboles, ha llevado a la pérdida de hábitats críticos y a la disminución de la biodiversidad. El cambio climático también representa un desafío, ya que puede alterar los patrones de lluvia y aumentar la frecuencia e intensidad de los incendios forestales. Además, la expansión urbana y la fragmentación del hábitat ponen en peligro la supervivencia de muchas especies.\n\n");
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 2:
                printf("---- ELEGIR AÑO BASE A COMPARAR ----\n");
                printf("Lista de años disponibles: 2018, 2019, 2020\n");
                printf("Ingrese el año base: ");
                scanf("%d", &num1);
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 3:
                printf("---- ELEGIR AÑO A COMPARAR ----\n");
                printf("Lista de años disponibles: 2018, 2019, 2020\n");
                printf("Ingrese el año a comparar: ");
                scanf("%d", &num2);
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 4:
                printf("---- DISMINUCIÓN EN NÚMERO DE ESPECIES ANIMALES ----\n");
                printf("Comparando el año %d con el año %d:\n", num1, num2);

                int diferenciaComadreja = 0;
                int diferenciaOcelote = 0;
                int diferenciaPerezoso = 0;
                int oceloteBase = 0;
                int perezosoBase = 0;
                int oceloteComparar = 0;
                int perezosoComparar = 0;

                switch (num1) {
                    case 2018:
                        cantidadAnimalesBase = 17;
                        oceloteBase = 7598;
                        perezosoBase = 1871;
                        break;
                    case 2019:
                        cantidadAnimalesBase = 6;
                        oceloteBase = 7471;
                        perezosoBase = 1840;
                        break;
                    case 2020:
                        cantidadAnimalesBase = 11;
                        oceloteBase = 7519;
                        perezosoBase = 1827;
                        break;
                    default:
                        printf("Año base no válido.\n");
                        break;
                }

                switch (num2) {
                    case 2018:
                        cantidadAnimalesComparar = 17;
                        oceloteComparar = 7598;
                        perezosoComparar = 1871;
                        break;
                    case 2019:
                        cantidadAnimalesComparar = 6;
                        oceloteComparar = 7471;
                        perezosoComparar = 1840;
                        break;
                    case 2020:
                        cantidadAnimalesComparar = 11;
                        oceloteComparar = 7519;
                        perezosoComparar = 1827;
                        break;
                    default:
                        printf("Año a comparar no válido.\n");
                        break;
                }

                diferenciaComadreja = cantidadAnimalesComparar - cantidadAnimalesBase;
                diferenciaOcelote = oceloteComparar - oceloteBase;
                diferenciaPerezoso = perezosoComparar - perezosoBase;

                printf("Comadreja: %d\n", diferenciaComadreja);
                printf("Ocelote: %d\n", diferenciaOcelote);
                printf("Perezoso: %d\n", diferenciaPerezoso);

                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;

            case 5:
                mostrarTabla();
                printf("Presione 'b' para volver al menú de opciones: ");
                scanf(" %c", &volverMenu);
                break;
                
            case 6:
                printf("Saliendo del programa...\n");
                break;
                
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }
    }

    return 0;
}