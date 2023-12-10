[English](README.md) | 简体中文

## 编译


<i><strong> 注意：你可能需要在编译前安装 qemu，gcc，g++，GNU make 和 git 。</strong></i>


安装qemu并建立链接


```sh

sudo apt install qemu

sudo ln -s /usr/bin/qemu-system-i386 /usr/bin qemu

```


克隆仓库


```bush

git clone https://github.com/PiEOS-Team/PiEOS.git

```


使用 `make` 编译文件


```sh

make

```


## 启动


使用此命令来启动PiEOS

```

qemu make

```


## 更新


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

敬请期待

## 特别鸣谢

敬请期待



