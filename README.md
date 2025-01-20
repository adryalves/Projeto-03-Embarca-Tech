# Projeto 03: **Controle de Pinos GPIO com leitura serial**
**EMBARCATECH - UNIDADE 04**


## Créditos
**Desenvolvido pelo SubGrupo 9 - Grupo 4**
- **Adryellen Alves de Souza**  
- **Carlos Henrique Silva Lopes**
- **Graziele Coelho de Alencar**  
- **Nivaldo Rodrigues da Silva Júnior**  
- **Uriel Hapuque Barboza Santos**


## **Link do vídeo de Ensaio**
https://drive.google.com/file/d/16WRQg8hKIsRZEZ9mnBRQ4tgpFUzC58k3/view?usp=sharing

## **Funcionalidades**

1. **Controle de LEDs:**

- Comando "green": Liga o LED verde e desliga os outros LEDs.
- Comando "blue": Liga o LED azul e desliga os outros LEDs.
- Comando "red": Liga o LED vermelho e desliga os outros LEDs.
- Comando "white": Liga todos os LEDs simultaneamente, criando uma luz branca.
- Comando "off": Liga todos os LEDs simultaneamente, criando uma luz branca.

2. **Controle do Buzzer:**

Comando "buzzer": Aciona o buzzer por 2 segundos, emitindo um som contínuo durante esse período.

3. **Entrada via Serial:**

O código aguarda comandos via comunicação serial e executa as ações correspondentes para controlar os LEDs e o buzzer.

4. **Mensagens de Feedback:**
O sistema envia mensagens de confirmação para o terminal, indicando qual LED foi ligado ou se o buzzer foi acionado.
Mensagens de erro são enviadas caso o comando digitado não seja reconhecido.

5. **Extensibilidade:**

O código pode ser facilmente expandido para incluir novos comandos ou funcionalidades, como controle de intensidade de brilho ou outros dispositivos conectados.
