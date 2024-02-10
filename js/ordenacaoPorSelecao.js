function buscaMenor(array) {
  let menor = array[0];
  let menorIndice = 0;

  for (let i = 0; i < array.length; i++) {
    if (array[i] < menor) {
      menor = array[i];
      menorIndice = i;
    }
  }

  return menorIndice;
}

function ordenacaoPorSelecao(array) {
  const novoArray = [];

  for (const _element of array) {
    const menorIndice = buscaMenor(array);
    novoArray.push(array[menorIndice]);
    console.log(`antes`, array)
    array = array.slice(0, menorIndice).concat(array.slice(menorIndice + 1));
    console.log(`depois`, array)
  }

  return novoArray;
}

const arrayDeTeste = [10, 5, 1, 12, 3, 19, 15, 9];
console.log(ordenacaoPorSelecao(arrayDeTeste));
