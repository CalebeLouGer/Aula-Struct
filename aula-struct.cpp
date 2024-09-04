/* Struct - Registro

* Struct(Registro) é um tipo de dado que agrupa variáveis
de tipos diferentes sob um mesmo nome.

* Como definir uma Struct.
	- Definição de um tipo de Struct para armazenar
	dados de nome, idade e altura de uma pessoa.
	Ex: 
		struct Pessoa{
			char nome[50];
			int idade;
			float altura;
		}

* Declaração de um varirável TIPO Struct.
	- struct Pessoa pessoa1;
	
* Inicialização de MEMBROS de uma ESTRUTURA.
	-	pessoa1.idade = 19;
		strcpy(pessoa1.nome, "Calebe");
		pessoa1.altura = 1.72;
		
* Acesso aos MEMBROS da STRUCT
	- Usando o Operador Ponto(.)
	printf("Nome: %s\n", pessoa1.nome);
	printf("Idade: %d\n", pessoa1.idade);
	printf("Altura: %.2f\n", pessoa1.altura);
	
* Definiçao de Tipos com 'typedef'.
	- É possível criar um nome mais curto para um TIPO STRUCT
	usando 'typedef'.
	Ex:
		typedef struct Pessoa Entidade;
		Entidade p;
		p = {"Calebe",19,1.72};
		
* Vetor de STRUCT:
	É possi´vel criar Array(vetor) de Struct
	para gerenciar várias instâncias.
	
	struct Pessoa p1[3]={{"Rodrigo",19,1.70},{"Bryan",10,1.68},{"Rosenildo",20,1.74}};
	
	- Acessando elementos das instâncias um vetor de STRUCT:
	
		- Dados do Primeiro Objeto dentro do vetor:
		printf("Nome: %s\n", p1.[1].nome);
		printf("Idade: %d\n", p1.[1].idade);
		printf("Altura: %.2f\n", p1.[1].altura);
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	struct Pessoa{
		char nome[50];
		int idade;
		float altura;
	};
	
	struct Pessoa pessoa1;
	
	pessoa1.idade = 19;
	strcpy(pessoa1.nome, "Calebe");
	pessoa1.altura = 1.72;
	
	printf("Nome: %s\n",pessoa1.nome);
	printf("Idade: %d\n",pessoa1.idade);
	printf("Altura: %.2f\n",pessoa1.altura);
}
