## Build

<i><strong> Note: You may need to install qemu, gcc, g++, GNU make and git before build.</strong></i>

Install qemu and create a link

```sh
sudo apt install qemu
sudo ln -s /usr/bin/qemu-system-i386 /usr/bin qemu
```

Clone the repo

```bush
git clone https://github.com/PiEOS-Team/PiEOS.git
```

Use `make` to make files

```sh
make
```

## Updates

<details>

<summary>0.0.3 Alaph</summary>

- 增加了输入输出函数

- add some func of input/output

- 移除了HIM :)

- remove HIM :)

</details>

<details>

<summary>0.0.2 Alaph</summary>

- 修复了编译失败的问题（缺少floppy.img）

- fix the problem of cannot compile

</details>
