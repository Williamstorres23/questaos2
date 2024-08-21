Aqui está um README sobre o uso de `struct` em C, formatado em Markdown:

```markdown
# Uso de `struct` em C

## Introdução

Em C, uma `struct` (ou estrutura) é uma maneira de agrupar variáveis sob um mesmo nome. Essas variáveis, conhecidas como membros da estrutura, podem ser de tipos diferentes. As estruturas são usadas para representar dados complexos e organizá-los de forma que possam ser facilmente manipulados.

## Definindo uma `struct`

Para definir uma estrutura, usamos a palavra-chave `struct` seguida pelo nome da estrutura e uma lista de membros entre chaves `{}`. Cada membro é definido por um tipo de dado seguido por um nome. Aqui está um exemplo básico:

```c
struct Ponto {
    int x;
    int y;
};
```

Neste exemplo, `Ponto` é uma estrutura com dois membros: `x` e `y`, ambos do tipo `int`.

## Declarando Variáveis de uma `struct`

Depois de definir uma estrutura, podemos declarar variáveis desse tipo. Veja um exemplo:

```c
struct Ponto p1;
```

Isso cria uma variável `p1` do tipo `struct Ponto`. Podemos acessar os membros da estrutura usando o operador de ponto (`.`):

```c
p1.x = 10;
p1.y = 20;
```

## Inicializando uma `struct`

Também é possível inicializar uma `struct` diretamente no momento da declaração:

```c
struct Ponto p2 = {30, 40};
```

Aqui, `p2.x` será igual a 30 e `p2.y` será igual a 40.

## Passando `struct` para Funções

Estruturas podem ser passadas para funções tanto por valor quanto por referência. Quando passadas por valor, uma cópia da estrutura é feita. Quando passadas por referência, a função manipula diretamente a estrutura original.

### Passagem por Valor

```c
void imprimePonto(struct Ponto p) {
    printf("Ponto: (%d, %d)\n", p.x, p.y);
}
```

### Passagem por Referência

```c
void movePonto(struct Ponto *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}
```

Aqui, `p->x` é uma forma simplificada de escrever `(*p).x`.

## Estruturas Aninhadas

Uma `struct` pode conter outras `structs` como membros. Isso é útil para representar dados mais complexos.

```c
struct Retangulo {
    struct Ponto sup_esq;
    struct Ponto inf_dir;
};
```

Neste exemplo, `Retangulo` é uma estrutura que contém dois pontos (`sup_esq` e `inf_dir`).

## Conclusão

As `structs` são uma ferramenta poderosa em C, permitindo que você organize e manipule dados de forma eficiente. Ao entender e usar estruturas corretamente, você pode criar programas mais claros e organizados.

## Referências

- [Documentação oficial de C](https://en.cppreference.com/w/c/language/struct)
```

Esse README cobre os conceitos básicos de `struct` em C e como usá-las em diferentes contextos.
