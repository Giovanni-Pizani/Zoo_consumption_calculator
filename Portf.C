#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	//declaração de variáveis para entrada de dados 
	char nome_animal[30];//um vetor de tamanho 30
	int quant_animal;
	float custo_comida_kilo;
	float quant_comida_dia;
	//declaração de variáveis para saida de dados
	float custo_dia;
	float quant_comida_mes;
	float custo_mes;
	
	setlocale(LC_ALL,"portuguese");
	printf("Informe o nome do animal : nome =");
	scanf("%s",nome_animal);
	printf("Informe a quantidade deste animal no Zoo: n =");
	scanf("%d",&quant_animal);
	printf("Informe o custo estimado por KG de comida: R$ ");
	scanf("%f",&custo_comida_kilo);
	printf("Informe a quantidade de comida que este animal Consome diáriamente (kg): ");
	scanf("%f",&quant_comida_dia);
	//Calculamos os resuiltados
	custo_dia = quant_animal * custo_comida_kilo * quant_comida_dia;
	quant_comida_mes = quant_animal * quant_comida_dia * 30;
	custo_mes = custo_dia * 30;
	//Mostrar os resultados
	printf("Para o animal %s \n",nome_animal);
	printf("Custo estimado por dia: %.2f\n",custo_dia);
	printf("Quantidade de comida consumida por mes (KG): %.2f\n",quant_comida_mes);
	printf("informe o Custo estimado por mês: R$ %.2f\n",custo_mes);
	system("pause");
	return 0;
}
