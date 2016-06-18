s=raw_input()
x=s.replace(" ","")
x=x.upper()
y=len(x)
c=x[y-2]
if c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'	or c == 'Y':
	print "YES"
else:
	print "NO"
