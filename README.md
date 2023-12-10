[简体中文](README_cn.md)

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

## Boot

use this command to boot PiEOS
```
qemu make
```

## Updates

<details>

<summary>0.0.3 Alaph</summary>

- add some func of input/output

- remove HIM :)

</details>

<details>

<summary>0.0.2 Alaph</summary>

- fix the problem of cannot compile (missing floppy.img)

</details>

## Developers

...

## Thanks

...

