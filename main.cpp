#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float sal_bruto, inss, ir, sal_liquido;
	
	printf("Digite seu salario! \n");
	scanf("%f", &sal_bruto);
	
	if(sal_bruto <= 1100)
	{ inss = sal_bruto * 0.075;
	}
	else
	if(sal_bruto >=1100.01 && sal_bruto <= 2203.49){
		inss = sal_bruto * 0.09;
	}
	else
	if(sal_bruto >=2203.50 && sal_bruto <= 3305.22){
		inss = sal_bruto * 0.12;
	}
	else
	if (sal_bruto >= 3305.23 && sal_bruto <= 6433.57){
		inss = sal_bruto * 0.14;
	}
	
	if(sal_bruto <= 1903.98){
		ir =  0.00;
	}
	else
	if(sal_bruto >= 1903.99 && sal_bruto <= 2826.65){
		ir = sal_bruto * 0.075;
	}
	else
	if(sal_bruto >= 2826.66 && sal_bruto <= 3751.05){
		ir = sal_bruto * 0.15;
	}
	else
	if(sal_bruto >= 3751.06 && sal_bruto <= 4664.68){
		ir = sal_bruto * 0.225;
	}
	else
	if(sal_bruto >= 4664.69){
		ir = sal_bruto * 0.275;
	}
	

	
	
	
	sal_liquido = (sal_bruto - inss) -ir;
		printf ("\n Seu Desconto INSS: %2.f", inss);
		printf ("\n Seu Desconto de imposto de renda: %2.f ", ir);
		printf ("\n Seu Salario Liquido: %2.f \n", sal_liquido);
	
	
	
	return 0;
}
