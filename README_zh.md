[English](README.md) | 简体中文

## 编译


<i><strong> 注意：你可能需要在编译前安装 qemu，gcc，g++，GNU make，git 和 xorriso，以及 mtools。</strong></i>

准备工作

1. 安装git，gcc，g++，GNU make，NASM，xorriso

```bush
sudo apt install git build-essential nasm xorriso mtools
```


2. 安装qemu并建立链接


```bush
sudo apt install qemu qemu-system

sudo ln -s /usr/bin/qemu-system-i386 /usr/bin/qemu
```


3. 克隆仓库


```bush
git clone https://github.com/PiEOS-Team/PiEOS_by_grub.git
```


4. 使用 `make` 编译文件


```bush
cd PiEOS_by_grub
make
```


## 启动


使用此命令来启动PiEOS

```bush
make qemu-iso
```

或

```
make qemu-flp
```

## 更新

<details>

<summary>0.1</summary>

- 重构了整个系统

</details>


## 开发者

PiEOS-Team

## 特别鸣谢

RainySoft-Team



