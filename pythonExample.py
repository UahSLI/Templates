###
#@File: pythonExample.py
#@Desc: A brief description of the file
#@FSW: False (Denotes if the file is running on the rocket or payload during the mission)
#@Req: Requirements satisfied by file
###

#global variables all caps
#Statically type all variables
PI:float = 3.14159

#variables and function names camel cased
myData:int = 4

#Class starts with capital letter
class MyClass:
    def __init__(self) -> None:
        self.x = 5 + 10 #spaces in between operators


#Brief description of function
#@in: data, a number to add
#@in: data2, another number to add
#@out: The sum of data points
#@req: Requirement satisfied by the function
def doStuff(data:int,data2:int)->int:
    return data+data2

#Entry point
def main():
    pass

main()

#Use @TODO for any to dos