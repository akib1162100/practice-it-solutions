def BiitwiseOr(a,b):
    return a|b

def BitWiseAnd(a,b):
    return a&b

def BitWiseXor(a,b):
    return a^b

def  BitWiseNot(a):
    return ~a

def RightShift(a,b):
    return a>>b

def LeftShift(a,b):
    return a<<b

print("ten",10)
print('{0:8b}'.format(10))
print("twenty",20)
print('{0:8b}'.format(20))
print("BiitwiseOr: ",BiitwiseOr(10,20))
print('{0:8b}'.format(BiitwiseOr(10,20)))
print("BitWiseAnd: ",BitWiseAnd(10,20))
print('{0:8b}'.format(BitWiseAnd(10,20)))
print("BitWiseXor: ",BitWiseXor(10,20))
print('{0:8b}'.format(BitWiseXor(10,20)))
print("BitWiseNot: ",BitWiseNot(10))
print('{0:8b}'.format(BitWiseNot(10)))
print("RightShift: ",RightShift(10,2))
print('{0:8b}'.format(RightShift(10,2)))
print("LeftShift: ",LeftShift(10,2))
print('{0:8b}'.format(LeftShift(10,2)))