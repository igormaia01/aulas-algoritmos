package main

import (
	"fmt"
	"strconv"
)

func busca_binaria(list []int, valor int) int {
	menor := 0;
	maior := len(list) -1;

	for menor <= maior {
		meio := (menor + maior) / 2;
		valorMeio := list[meio];

		if valor == valorMeio {
			return valor;
		}

		if(valor > valorMeio) {
			menor = meio + 1;
		}

		if(valor < list[meio]) {
			maior = meio - 1;
		}

	}
	return -1;	
}

func main() {
	list := []int{1,5,8,12,20,45};

	result := busca_binaria(list,20);

	if(result == -1) {
		fmt.Println("Numero não encontrado")
	} else {
		fmt.Println(strconv.Itoa(result) + " foi encontrado");
	}

}