stack = []
register = 0
pc = 0

n = int(input())
instructions = [input().split() for _ in range(n)]

while pc < n:
    opcode, *operand = instructions[pc]
    operand = int(operand[0]) if operand else None
    
    if opcode == "PUSH":
        stack.append(operand)
    elif opcode == "STORE":
        register = stack.pop()
    elif opcode == "LOAD":
        stack.append(register)
    elif opcode == "PLUS":
        b = stack.pop()
        a = stack.pop()
        stack.append(a + b)
    elif opcode == "TIMES":
        b = stack.pop()
        a = stack.pop()
        stack.append(a * b)
    elif opcode == "IFZERO":
        if stack.pop() == 0:
            pc = operand
            continue
    elif opcode == "DONE":
        print(stack.pop())
        break
    pc += 1