;* =====================================================================================
;*
;*       Filename:  gdt_s.s
;*
;*    Description:  将 GDT 地址载入GDTR
;*
;*        Version:  0.0.7Alpha
;*        Created:  2024年2月4日 20时19分40秒
;*       Revision:  none
;*       Compiler:  nasm
;*
;*         Author:  PiEOS-Team
;*
;* =====================================================================================

[GLOBAL gdt_flush]

gdt_flush:
    mov eax, [esp+4]    ; 参数存入 eax 寄存器
    lgdt [eax]    ; 加载到 GDTR 修改原先[设置GRUB]
    
    mov ax, 0x10    ; 加载我们的数据段描述符
    mov ds, ax    ; 更新所以可以更新的段寄存器
    mov es, ax
    mov fs, ax
    mov gs, ax
    mov ss, ax
    jmp 0x08:.flush    ; 远跳转，0x08 是我们的段描述符，目的是清空流水线并串行化处理器

.flush:
    ret