#Bee 1018 - Banknotes

#this problem is wrong. I'm looking for a way to fix it

valor = int(input())

total = valor
    
ncem = total / 100
total = total - (ncem * 100)
    
ncinquenta = total / 50
total = total - (ncinquenta * 50)
    
nvinte = total / 20
total = total - (nvinte * 20)
    
ndez = total / 10
total = total - (ndez * 10)
    
ncinco = total / 5
total = total - (ncinco * 5)
    
ndois = total / 2
total = total - (ndois * 2)
    
num = total / 1
total = total - (num * 1)

print("{}\n{} nota(s) de R$ 100,00\n{} nota(s) de R$ 50,00\n{} nota(s) de R$ 20,00\n{} nota(s) de R$ 10,00\n{} nota(s) de R$ 5,00\n{} nota(s) de R$ 2,00\n{} nota(s) de R$ 1,00\n".format(int(valor), int(ncem), int(ncinquenta), int(nvinte), int(ndez), int(ncinco), int(ndois), int(num)))