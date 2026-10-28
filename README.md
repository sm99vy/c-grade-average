# Validação de notas e cálculo de média em C

Exercício em C que lê três notas, define nota mínima e máxima com constantes e calcula a média.

## Compilação

Com GCC:

```bash
gcc media_notas.c -o media_notas
```

## Execução

Linux/macOS:

```bash
./media_notas
```

Windows:

```bash
media_notas.exe
```

## Conceitos praticados

- Constantes com `const`
- Variáveis do tipo `float` e `int`
- Entrada e saída com `scanf()` e `printf()`
- Operadores relacionais e lógicos (`<`, `>`, `||`)
- Laço `while`
- Cálculo de média

**Importante:** o código foi preservado exatamente como compartilhado, sem correções. Ele contém um problema de escopo no `while` por não usar chaves e usa `%i` para exibir constantes `float`; revise esses pontos antes de considerar o exercício concluído.
