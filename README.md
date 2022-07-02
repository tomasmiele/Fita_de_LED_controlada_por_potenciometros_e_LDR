# Fita_de_LED_controlada_por_potenciometros_e_LDR

Esse projeto consiste em personalizar uma fita de LED, no caso de 114 cm (totalizando 76 LEDs). 

A personalização consiste em duas partes, a primeira sendo a cor dos LEDs, sendo assim, utiliza-se três potenciômetros um para a cor vermelha, outro para a cor verde e o último para o azul, ou seja, eles estão configurados para respeitarem o padrão RGB. Já a outra parte, são os LDRs (a quantidade vai a sua escolha no meu caso eu utilizei 3), esses determinaram a intensidade do brilho emitido pela fita de LED, para isso o arduino recebe a luminosidade ambiente e "inverte" ela enviando um valor para a fita, com isso se o local estiver claro a luz emitida pelos LEDs será fraca, já se o ambiente estiver escuro o brilho será forte.

Materiais:
- 1 arduino UNO
- 3 potenciômetros
- 3 LDRs 
- 3 resistores de 10k ohms
- 1 resistor de 330 ohms
- 1 protoboard
- Diversos jumpers
