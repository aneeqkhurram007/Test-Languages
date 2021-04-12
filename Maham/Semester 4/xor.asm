.org 100h
.data
.code
main proc  
       
       MOV BX, 0000 0000 0000 111b
       XOR AX, AX
       MOV cx, 16

TOP: 
    ROL BX, 1

    JNC NEXT
    
    INC AX
    
NEXT:
  LOOP TOP


main endp

ret