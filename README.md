# 32-bit kernel

32-bit example kernel using C and Assembly.

To build and run kernel you will need to [install GCC Cross-Compiler](https://wiki.osdev.org/GCC_Cross-Compiler), [qemu-system-x86_64](https://www.qemu.org/docs/master/system/target-i386.html), [nasm](https://www.nasm.us/)

- `./build.sh`
- `qemu-system-x86_64 -hda ./bin/os.bin`

## Resources

- [Write a simple kernel](https://wiki.osdev.org/Bare_Bones) - this will help with most of the things needed to run a kernel
- [OSDev Wiki](https://wiki.osdev.org/Main_Page) - Learn systems programming
- [The Linux Programming Interface](https://man7.org/tlpi/) - systems programming book
- [Ralf Brown's Interrupt List](https://ctyme.com/rbrown.htm)
