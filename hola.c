#include <stdio.h>

int main() {
    int opcion = 0;
    int anioBase = 0;
    int anioComparar = 0;
    int cantidadAnimalesBase = 0;
    int cantidadAnimalesComparar = 0;
    int num1, num2, resultado;

    resultado = num2, num1;
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
                printf("el analizis del bosque \n");
                printf("El Bosque Basal del Pacífico es un ecosistema excepcionalmente rico y diverso que se encuentra a lo largo de la costa oeste de América del Norte, desde el sur de Alaska hasta el norte de California. Este bosque se caracteriza por su clima templado, alta pluviosidad y la presencia de una densa vegetación compuesta principalmente por árboles de hoja perenne.\n\n");
                printf("Biodiversidad: El Bosque Basal del Pacífico alberga una gran diversidad de especies de plantas y animales. Entre los árboles más emblemáticos se encuentran las secuoyas, los abetos de Douglas, los cedros y los abetos amabilis. Estas especies gigantes son fundamentales para el equilibrio del ecosistema y proporcionan hábitats vitales para numerosas especies animales. También es hogar de una variedad de arbustos, helechos y musgos que contribuyen a la riqueza de la biodiversidad del bosque.\n\n");
                printf("Importancia ecológica: El Bosque Basal del Pacífico desempeña un papel crucial en la regulación del clima regional y global. Los árboles de hoja perenne capturan grandes cantidades de dióxido de carbono (CO2) a través de la fotosíntesis, ayudando a reducir el efecto invernadero y mitigar el cambio climático. Además, actúa como una barrera natural contra la erosión costera, protegiendo el litoral de la acción de las olas y las tormentas.\n\n");
                printf("Hábitat de especies: Este ecosistema alberga una gran cantidad de especies animales, incluyendo mamíferos como osos negros, ciervos, linces, pumas y diversas especies de roedores. Además, es hogar de una amplia variedad de aves, desde águilas calvas hasta gorriones y colibríes. Los ríos y arroyos que atraviesan el bosque ofrecen un hábitat vital para diversas especies de peces, como el salmón, la trucha y el esturión.\n\n");
                printf("Amenazas: A pesar de su importancia ecológica, el Bosque Basal del Pacífico enfrenta varias amenazas. La deforestación, principalmente debido a la tala indiscriminada de árboles, ha llevado a la pérdida de hábitats críticos y a la disminución de la biodiversidad. El cambio climático también representa un desafío, ya que puede alterar los patrones de lluvia y aumentar la frecuencia e intensidad de los incendios forestales. Además, la expansión urbana y la fragmentación del hábitat ponen en peligro la supervivencia de muchas especies.\n\n");
                printf("Presione 'b' para volver al menú de opciones: ");
                char volverMenu;
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
                printf("la disminucion en animales fue la siguiente\n");
                printf("Perezoso de tres dedos %d\n",resultado);
                printf("Ocelote%d\n",resultado);
                printf("Mustela felipei%d\n",resultado);
               
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
}              //comadreja 6 xd mustela xd 2019
 // ocelote 2000 2020
