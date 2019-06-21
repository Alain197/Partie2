"""
Ecrit par Alain 
20/06/2019 à 20:14
"""
def crible(n):#crible d'Eratostède pour obtenir les nombres premiers
	L=[i for i in range(2,n+1)]
	for i in L:
		for j in L:
			if(j>i and j%i==0):
				L.remove(j)
	return L

def pgcd(a,b):# calcul du plus grand commun  diviseur 
	q=a//b
	r=a%b
	while r!=0:
		a=b
		b=q
		r=a%b
	return b

a=3
b=2
print(pgcd(a,b))
