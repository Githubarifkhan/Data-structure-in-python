def stack():
    stack = []
    return stack
def empty(stack):
    return len(stack) == 0   


def push(stack, item):
    stack.append(item)
    print("pused item" + item)

def pop(stack):
    if(empty(stack)):
        return " stack is emppty"
    else:
        return stack.pop()

stack = stack()
push(stack, str(1))
push(stack, str(2))
push(stack, str(4))
push(stack, str(3))
print("popped item:" + pop(stack))
print("stack after popping element" +str(stack))

    
