English | [简体中文](README_zh.md)

## Build

<i><strong> Note: You may need to install qemu, gcc, g++, GNU make, git and xorriso also mtools before build.</strong></i>

1. Install gcc, g++, GNU make, git, nasm and xorriso

```bush
sudo apt install build-essential git nasm xorriso install mtools
```

2. Install qemu and create a link

```bush
sudo apt install qemu qemu-system

sudo ln -s /usr/bin/qemu-system-i386 /usr/bin/qemu
```

3. Clone the repo

```bush
git clone https://github.com/PiEOS-Team/PiEOS_by_grub.git
```

4. Use `make` to compile files

```bush
cd PiEOS_by_grub
make
```

## Boot

use this command to boot PiEOS


```
make qemu-iso
```

or

```
make qemu-flp
```

## Updates

<details>

<summary>0.1</summary>

- refactoring all the OS

</details>


## Developers

PiEOS-Team

## Thanks

RainySoft-Team

