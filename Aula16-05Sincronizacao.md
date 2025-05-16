# Mecanismos de Sincronização

## Conceitos

- Processos cooperativos  
- Seção crítica  
- Condição de corrida  
- Proteção da seção crítica (condições para)

## Semáforos = tipo de dado abstrato

- Um valor inteiro  
- Fila de processos  
- (operações atômicas) duas operações:

→ P (testar)
```
valor--;  
if(valor < 0) {  
  bloquear a thread  
  inserir na fila de S  
}
```
→ V (incrementar)

```
valor++;  
if(valor <= 0) {  
  acordar o 1 processo da fila  
}
```

### Exemplo Uso de semáforos para proteção da seção crítica

```
semaforo S;  
S.valor = 0;
```

**Thread 1**
```
S.P();  
secao_critica();  
S.V();
```
**Thread 2**  
```
S.P();  
secao_critica();  
S.V();
```
### Exemplo Uso de semáforos para proteção da seção crítica

**Variáveis**
```
semaforo S, X;  
S.valor = 0;
X.valor = 0;
```

**Thread 1**
```
S.P();  
calculo_folha();  
S.V();
```
**Thread 2**  
``` 
consultaBD();  
S.V();
```


**Thread 3**
```
X.P();  
transmitir_Folha();  
```

# Exercício:
[SOLista6.pdf](https://github.com/user-attachments/files/20244308/SOLista6.pdf)

![{6A2D7ADC-7CA1-4478-BCA8-04AF4B55B871}](https://github.com/user-attachments/assets/05083cdc-b9a2-43d0-a825-827beffe9512)




