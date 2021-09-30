r = 5
_= 0
while _<= r - 1:
    j = 0
    while j < _:
        
        print('', end=' ')
        j += 1
    k = _
    while k <= r - 1:
        print('$', end=' ')
        k += 1
    print()
    _+= 1

_= r - 1
while _>= 0:
    j = 0
    while j < _:
        print('', end=' ')
        j += 1
    k = _
    while k <= r - 1:
        print('$', end=' ')
        k += 1
    print('')
    _-= 1
