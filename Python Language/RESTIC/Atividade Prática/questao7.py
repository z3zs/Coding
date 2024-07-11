# Questão 7 - Quatro times estão disputando as semifinais de um campeonato de futebol. Leia os gols que cada time marcou em suas partidas e informe qual time saiu vencedor. Em caso de empate em uma das partidas, leia o número de pênaltis cobrados corretamente (valores entre 0 e 5) para cada time. Supondo que haverá dois times vencedores das partidas, exiba-os. Exemplo de mensagem final: “Os times A e B estão na grande final!”.

jogo1 = []
jogo2 = []

jogo1.append(int(input(f"Gols do time1: ")))
jogo1.append(int(input(f"Gols do time2: ")))

jogo2.append(int(input(f"Gols do time3: ")))
jogo2.append(int(input(f"Gols do time4: ")))

if jogo1[0] > jogo1[1]:
    vencedor1 = "time1"
else:
    vencedor1 = "time2"

if jogo2[0] > jogo2[1]:
    vencedor2 = "time3"
else:
    vencedor2 = "time4"

if jogo1[0] == jogo1[1]:
    print(f"\nEmpate na primeira partida entre time1 e time2.")
    penaltis_jogo1 = []
    penaltis_jogo1.append(int(input(f"Pênaltis corretos do time1: ")))
    penaltis_jogo1.append(int(input(f"Pênaltis corretos do time2: ")))

if jogo2[0] == jogo2[1]:
    print(f"\nEmpate na segunda partida entre time3 e time4.")
    penaltis_jogo2 = []
    penaltis_jogo2.append(int(input(f"Pênaltis corretos do time3: ")))
    penaltis_jogo2.append(int(input(f"Pênaltis corretos do time4: ")))
if jogo1[0] == jogo1[1]:
    if penaltis_jogo1[0] > penaltis_jogo1[1]:
        vencedor1 = "time1"
    else:
        vencedor1 = "time2"

if jogo2[0] == jogo2[1]:
    if penaltis_jogo2[0] > penaltis_jogo2[1]:
        vencedor2 = "time3"
    else:
        vencedor2 = "time4"

print("Vencedor 1: ", vencedor1)
print("Vencedor 2: ", vencedor2)