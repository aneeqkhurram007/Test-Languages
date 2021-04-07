.MODEL SMALL
.STACK 100H


.DATA
 A dw 10
 B dw 20
 C dw 18
 D dw 18       ;defining all variables
 ctemp dw 0    
 StringA db "Value of A = ",A,10,13,"$"
 StringB db "Value of B = ",B,10,13,"$"
 StringC db "value of C = ",C,10,13,"$"

  
.CODE


MAIN PROC
    
     MOV AX, @DATA
     MOV DS, AX
    
       MOV AX, A  
       
       MOV BX, B
       
       CMP AX,BX
       JL IF1
       
       
       IF1:
       MOV CX,C
       CMP BX,CX      ;first if condition
       JG IF2 
       
       JMP END       ;if condition is not satsified jump out of if
       
       IF2:
       MOV DX,D
       CMP CX,DX
       JLE IF3          ;second if condition 
       
       JMP END
       
       IF3: 
                          ;third if condition
       SUB BX,C           ;B-C
                  
 
       ;MOV CX,0                   
       MOV CX, 4
      
       LOOP1:
                               
       ADD ctemp,DX
                                ;ctemp=4C
       LOOP LOOP1   
       
       
       
       
       MOV CX,5
        
       LOOP2: 
       
       ADD DX,D
                                  ;DX=6D
       LOOP LOOP2 
        
      
        
       NEG DX                     ;DX=-6D
       ADD AX,A
       ADD AX,BX                    ;AX=2A+(B-C)
       ADD AX,ctemp                 ;AX=A+(B-C)+4C
       ADD AX,DX                    ;AX= A+(B-C)-6D
                                     
       
       ;MOV A,0
       MOV A,AX 
       
       MOV AH, 9
       LEA DX, StringA
       INT 21H
       
       LEA DX, StringB
       INT 21H
       
       LEA DX, StringC
       INT 21H
       
     
       JMP END 

    
     END: 
     
     
     MOV AH, 4CH
     INT 21H

    
MAIN ENDP


END MAIN




