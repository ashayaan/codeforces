n=raw_input()
n=int(n)
count=0
l=['ABSINTH', 'BEER', 'BRANDY', 'CHAMPAGNE', 'GIN', 'RUM', 'SAKE', 'TEQUILA', 'VODKA', 'WHISKEY', 'WINE']
for i in range(n):
	x=raw_input()
	try:
		x=int(x)
		if x < 18:
			count+=1
	except:
		if x in l:
			count+=1
print count
	
	
