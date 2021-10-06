# Hacktober Fest Ascii Icon

# Author : Arghya Sahoo
# Github : https://github.com/arghyasahoo

import sys

n = int(input("Size of Pattern: "))

# Up
for i in range(n):
	if i == 0:
		sys.stdout.write(" "*(n*2+2) + " "*(n-i) + '*\n')
	else:
		sys.stdout.write(" "*(n*2+2) + " "*(n-i) + '*' + " "*((i*2)-1) + '*\n')

# sys.stdout.write(" "*(n*2+2) + '* '*(n) + '*\n')

# Left & Right
sys.stdout.write('\033[1A')
sys.stdout.write('* '*(n+1) + f"\033[{n*2+2}C" + '* '*n + '*\n')
for i in range(n):
	sys.stdout.write(" "*(i+1) + '*' + " "*(((n-i)*2)-1) + f"  \033[{(n+i)*2}C" + " "*(n-i)*2 + '*\n')

# sys.stdout.write(" "*(n+1) + '*' + " "*(n*4+1) + '*\n')

# Down
# sys.stdout.write(" "*(n+2-1) + '* '*(n*2+1) + '*\n')
for i in range(n):
	if i == 0:
		sys.stdout.write(" "*(n-i+1) + '*' + " "*(((n-i)*2)-1) + '*' + f'\033[{i*6}C ' + '*' + " "*((n-i)*2-1) + '*\n')
	else:	
		sys.stdout.write(" "*(n-i+1) + '*' + " "*(((n-i)*2)-1) + '*' + f'\033[{i*6}C ' + '*' + " "*((n-i)*2) + '*\n')

sys.stdout.write(' *' + " "*(n*6) + '  *')

if n >= 10:
	sys.stdout.write(f"\033[{n+n//2+n//3}A")
	sys.stdout.write(f"\033[10000D")
	sys.stdout.write(f"\033[{n+n//3}C|  | +--+ +-- | / ----- +---+ +--+ +--- +--+\n")
	sys.stdout.write(f"\033[{n+n//3}C|__| |  | |   |/    |   |   | |  | |    |  |\n")
	sys.stdout.write(f"\033[{n+n//3}C|  | |--| |   |\\    |   |   | |--+ |--- |\\-\n")
	sys.stdout.write(f"\033[{n+n//3}C|  | |  | |__ | \\   |   |___| |__| |___ | \\\n")

	sys.stdout.write(f"\033[{n*3}C+---- +--- +--- -----\n")
	sys.stdout.write(f"\033[{n*3}C|___  |___ |___   |\n")
	sys.stdout.write(f"\033[{n*3}C|     |       |   |\n")
	sys.stdout.write(f"\033[{n*3}C|     |___ ___|   |")
	sys.stdout.write("\033[10000D")
	sys.stdout.write("\033[10000B")
else:
	print()