;* =====================================================================================
;*
;*       Filename:  switch_to.s
;*
;*    Description:  线程切换的实现
;*
;*        Version:  0.1
;*        Created:  2024年2月8日 14时19分40秒
;*       Revision:  none
;*       Compiler:  nasm
;*
;*         Author:  PiEOS-Team
;*
;* =====================================================================================

[global switch_to]

; 具体的线程切换操作，重点在于寄存器的保存与恢复
switch_to:
        mov eax, [esp+4]

        mov [eax+0],  esp
        mov [eax+4],  ebp
        mov [eax+8],  ebx
        mov [eax+12], esi
        mov [eax+16], edi
        pushf
        pop ecx
        mov [eax+20], ecx

        mov eax, [esp+8]

        mov esp, [eax+0]
        mov ebp, [eax+4]
        mov ebx, [eax+8]
        mov esi, [eax+12]
        mov edi, [eax+16]
        mov eax, [eax+20]
        push eax
        popf
 	
        ret
