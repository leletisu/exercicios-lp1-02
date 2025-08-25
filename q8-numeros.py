inicio = int(input("Insira o primeiro número: "))
fim = int(input("Insira o segundo número: "))

print(f"Números entre {inicio} e {fim}:", end=" ")
for n in range(inicio+1, fim):
    print(n, end=" ")