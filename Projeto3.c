#include "pico/stdlib.h"
#include <stdio.h>

int main()
{
    // Inicializa a comunicação serial
    stdio_init_all();

    // Define os pinos dos LEDs e buzzer
    const uint LED_VERDE_PIN = 11;
    const uint LED_AZUL_PIN = 12;
    const uint LED_VERMELHO_PIN = 13;

    const uint BUZZER_PIN = 21;

    // Inicializa os pinos
    gpio_init(LED_VERDE_PIN);
    gpio_init(LED_AZUL_PIN);
    gpio_init(LED_VERMELHO_PIN);

    gpio_init(BUZZER_PIN);

    // Define a direção dos pinos como saída
    gpio_set_dir(LED_VERDE_PIN, GPIO_OUT);
    gpio_set_dir(LED_AZUL_PIN, GPIO_OUT);
    gpio_set_dir(LED_VERMELHO_PIN, GPIO_OUT);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    printf("Sistema pronto. Use os comandos para controlar os LEDs e o buzzer.\n");

    char input[10];

    while (true)
    {
        if (scanf("%9s", input) == 1)
        {
            if (input[0] == 'g' && input[1] == 'r' && input[2] == 'e' && input[3] == 'e' && input[4] == 'n' && input[5] == '\0')
            {
                gpio_put(LED_VERDE_PIN, 1);
                gpio_put(LED_AZUL_PIN, 0);
                gpio_put(LED_VERMELHO_PIN, 0);
                printf("LED verde ligado.\n");
            }
            else if (input[0] == 'b' && input[1] == 'l' && input[2] == 'u' && input[3] == 'e' && input[4] == '\0')
            {
                gpio_put(LED_VERDE_PIN, 0);
                gpio_put(LED_AZUL_PIN, 1);
                gpio_put(LED_VERMELHO_PIN, 0);
                printf("LED azul ligado.\n");
            }

            else if (input[0] == 'r' && input[1] == 'e' && input[2] == 'd' && input[3] == '\0')
            {
                gpio_put(LED_VERDE_PIN, 0);
                gpio_put(LED_AZUL_PIN, 0);
                gpio_put(LED_VERMELHO_PIN, 1);
                printf("LED vermelho ligado.\n");
            }
            else if (input[0] == 'w' && input[1] == 'h' && input[2] == 'i' && input[3] == 't' && input[4] == 'e' && input[5] == '\0')
            {
                gpio_put(LED_VERDE_PIN, 1);
                gpio_put(LED_AZUL_PIN, 1);
                gpio_put(LED_VERMELHO_PIN, 1);
                printf("Todos os LEDs ligados (luz branca).\n");
            }

            else if (input[0] == 'o' && input[1] == 'f' && input[2] == 'f' && input[3] == '\0')
            {
                gpio_put(LED_VERDE_PIN, 1);
                gpio_put(LED_AZUL_PIN, 1);
                gpio_put(LED_VERMELHO_PIN, 1);
                printf("Todos os LEDs ligados (luz branca).\n");
            }

            else if (input[0] == 'b' && input[1] == 'u' && input[2] == 'z' && input[3] == 'z' && input[4] == 'e' && input[5] == 'r' && input[6] == '\0')
            {
                gpio_put(BUZZER_PIN, 1);
                printf("Buzzer acionado por 2 segundos.\n");
                sleep_ms(2000);
                gpio_put(BUZZER_PIN, 0);
            }
            else
            {
                printf("Comando desconhecido: %s\n", input);
            }
        }
    }

    return 0;
}
