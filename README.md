English | [简体中文](README_zh.md)

## Build

<i><strong> Note: You may need to install qemu, gcc, g++, GNU make, git and xorriso before build.</strong></i>

Install gcc, g++, GNU make, git, nasm and xorriso

```bush
sudo apt install build-essential
sudo apt install git
sudo apt install nasm
sudo apt install xorriso
```

Install qemu and create a link

```bush
sudo apt install qemu
sudo apt install qemu-system

sudo ln -s /usr/bin/qemu-system-i386 /usr/bin/qemu
```

Clone the repo

```bush
git clone https://github.com/PiEOS-Team/PiEOS.git
```

Use `make` to make files

```bush
make
```

## Boot

use this command to boot PiEOS

```
qemu make
```

## Updates

<details>

<summary>0.0.6 Alpha</summary>

- boot by iso

- fix some problems

- add debug

- support strings

</details>

<details>

<summary>0.0.4 Alpha</summary>

- fix some problems

- compiled by RainySoft-Team

- thanks RainySoft-Team very much

</details>

<details>

<summary>0.0.3 Alpha</summary>

- add some func of input/output

- remove HIM :)

</details>

<details>

<summary>0.0.2 Alpha</summary>

- fix the problem of cannot compile (missing floppy.img)

</details>

## Developers

kuqilin

## Thanks

RainySoft-Team

