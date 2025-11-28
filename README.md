# Tensorflow lite micro em um SoC litex

#### Repositório criado para portar o tensorflow lite micro para uma placa FPGA colorlight i9 com um SoC Litex.

## Preparação do ambiente

Primeiramente clonamos o repositorio tflite-micro: `git clone https://github.com/tensorflow/tflite-micro/tree/main`
Em seguida foi baixado e instalado o script de criação das pastas com os exemplos, bibliotecas e modelo treinado (hello_world) do tflmicro, o script usado se encontra abaixo e foi retirado da documentação oficial do tflmicro:  https://github.com/tensorflow/tflite-micro/blob/main/tensorflow/lite/micro/docs/new_platform_support.md

Script: `python3 tensorflow/lite/micro/tools/project_generation/create_tflm_tree.py 
  -e hello_world 
  [seu path da pasta destino]`

## Build da biblioteca estática lib.a

Para fazer a build da lib.a usamos o makefile disponibilizado nesse repositório na pasta __/firmware/tflm/Makefile__, os compiladores CXX e AR foram instalados com a ferramenta xPack, os compiladores originais eram riscv64-elf-g++ e riscv64-elf-ar. Com o makefile na pasta gerada pelo script rode o comando `make` e a biblioteca começara a ser construída.

## Códidigo do firmware FPGA

O próximo passo foi criar o firmware __main.cc__ onde será feita a inferência e controle de 8 leds que simulam uma onda senoidal. 
