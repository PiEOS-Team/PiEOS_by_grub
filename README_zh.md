[English](README.md) | 简体中文

## 编译


<i><strong> 注意：你可能需要在编译前安装 qemu，gcc，g++，GNU make 和 git 。</strong></i>

准备工作

1. 安装git，gcc，g++，GNU make，NASM

```bush
sudo apt install git
sudo apt install build-essential
sudo apt install nasm
```


安装qemu并建立链接


```bush
sudo apt install qemu
sudo apt install qemu-system

sudo ln -s /usr/bin/qemu-system-i386 /usr/bin/qemu
```


克隆仓库


```bush
git clone https://github.com/PiEOS-Team/PiEOS.git
```


使用 `make` 编译文件


```bush
make
```


## 启动


使用此命令来启动PiEOS

```bush
qemu make
```


## 更新

<details>

<summary>0.0.6 Alpha</summary>

- 由 iso 启动

- 修复了一些问题

- 增加 debug 功能

- 支持字符串

</details>

<details>

<summary>0.0.4 Alpha</summary>

- 修复了一些问题

- 由RainySoft-Team编译

- 非常感谢RainySoft-Team

</details>

<details>


<summary>0.0.3 Alaph</summary>


- 增加输入输出函数


- 移除了HIM :)


</details>


<details>


<summary>0.0.2 Alaph</summary>

- 修复了无法编译的问题（缺少floppy.img）

</details>


## 开发者

kuqilin

## 特别鸣谢

RainySoft-Team



