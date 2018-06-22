                  load    R1,test     ;
                  load    R2,1        ;
                  load    R0,0        ;
stringwords  :    load    RF,[R1]     ;
                  addi    R1,R1,R2    ;
                  jmpEQ   RF=R0,Ready ;
                  jmp      stringwords   ;
                
Ready:       load R1,test ;
             load   R1,15  ; a variable  a%b  a mod b
             load  R2,4 ; b variable  a%b  a mod b
             load R5,48 ;
             move R0,R2 ;
 Loop :      JmpLE R1<=R0,Print ;
             xor R3,R1,R0;       
             addi R0,R0,R2 ; 
             jmp Loop;
  Print : addi R3,R5,R3 ;
          move RF,R3 ;
     halt ;
test:   db " a mod b is a%b == "
       