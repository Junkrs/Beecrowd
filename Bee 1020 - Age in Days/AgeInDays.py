#Bee 1020 - Age in Days 

dias = int(input())
anos = (dias/365)
meses = ((dias%365)/30)
dias = ((dias%365)%30)

print("{} ano(s)\n{} mes(es)\n{} dia(s)".format(int(anos), int(meses), int(dias)))