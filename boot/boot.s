;
; =====================================================================================
;
;       Filename:  boot.s
;
;    Description:  内核从此开始, 还有根据GRUB Multiboot规范的一些定义
;
;        Version:  0.0.1Alpha
;        Created:  2023年12月03日 08时35分57秒
;       Revision:  none
;       Compiler:  gcc
;
;         Author:  PiEOS-Team
;
; =====================================================================================
;

MBOOT_HEADER_MAGIC equ 0x1BADB002    ; 规定的魔数「Magic」无法更改
MBOOT_PAGE_ALIGN equ 1 << 0    ; 0号位表示所有的引导模块按页(4KB)对齐
MBOOT_MEM_INFO equ 1 << 1    ; 1号位通过 Multiboot 信息结构的 mem_* 域包括可用内存的信息
; 其实就是告诉GRUB把内存空间的信息包含在Multiboot信息结构中

MBOOT_HEADER_FLAGS equ MBOOT_PAGE_ALIGN | MBOOT_MEM_INFO    ; 定义我们要使用的multiboot的标记

; 域checksum是一个32位的无符号值，要求其与其他magic域相加时必须等于32位无符号0
; 即magic + flags + checksum = 0
MBOOT_CHECKSUM equ -(MBOOT_HEADER_MAGIC + MBOOT_HEADER_FLAGS)

; 符合Multiboot规范的 OS 映象需要这样一个 magic Multiboot 头

; Multiboot 头的分布必须如下表所示：
; ----------------------------------------------------------
; 偏移量  类型  域名        备注
;
;   0     u32   magic       必需
;   4     u32   flags       必需 
;   8     u32   checksum    必需 
;
; 我们只使用到这些就够了，更多的详细说明请参阅 GNU 相关文档
;-----------------------------------------------------------

;-----------------------------------------------------------------------------

[BITS 32]    ; 所有代码以 32-bit 的方式编译

section .text    ; 代码段从这里开始

;在代码段开始的地方设置符合multiboot的标记
dd MBOOT_HEADER_MAGIC
dd MBOOT_HEADER_FLAGS
dd MBOOT_CHECKSUM

[GLOBAL start]    ; 内核代码入口
[GLOBAL glb_mboot_ptr]    ; 全局的 struct multiboot * 变量
[EXTERN kern_entry]    ; 声明内核 C 代码的入口

; 愉快的撸代码环节

start:
    cli
    mov esp, STACK_TOP
    mov ebp, 0
    and esp, 0FFFFFFF0H
    mov [glb_mboot_ptr], ebx
    call kern_entry
stop:
    hlt
    jmp stop
; ------------------------------------------------------

section .bss    ; 未初始化的数据段从这里开始
stack:
    resb 32768
glb_mboot_ptr:
    resb 4

STACK_TOP equ $ - stack - 1
