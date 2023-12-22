class Caracteristica {
  nome
  possui

  constructor(nome, possui) {
    this.nome = nome;
    this.possui = possui;
  }

  returnMe() {
    return {
      nome: this.nome,
      possui: this.possui,
    }
  }
}

class Animal {
  idade;
  peso;
  nome;
  caracteristicas = [];

  constructor(idade, peso, nome) {
    this.idade = idade;
    this.peso = peso;
    this.nome = nome;
  }


  anda() {
    console.log('estou andando')
  }

  dorme() {
    console.log('estou dormindo');
  }

  addCaracteristica(nome, possui) {
    const novaCaracteristica = new Caracteristica(nome, possui)
    this.caracteristicas.push(novaCaracteristica)
  }

  retornaCaracteristicas() {
    console.log(this.caracteristicas);
  }
}

class Gato extends Animal {
  engolePelo;

  constructor(idade, peso, nome, engolePelo) {
    super(idade, peso, nome);

    this.engolePelo = engolePelo;
  }

  anda() {
    console.log('Anda que nem gato')
  }
}

class Cachorro extends Animal {
  constructor(idade, peso, nome) {
    super(idade, peso, nome);
  }
}

const cachorro = new Cachorro(22, 15, 'lulu');
const gato = new Gato(23, 60, 'yandri');

cachorro.addCaracteristica('carinhoso', true);
cachorro.addCaracteristica('esfomeado', true);

cachorro.retornaCaracteristicas();

cachorro.addCaracteristica('raivoso', false);

cachorro.retornaCaracteristicas();
