#qemu-system-riscv64 -M  sifive_u -bios sbi-qemu -kernel 1.elf -nographic
qemu-system-riscv64 -machine virt -kernel 1.elf -m 8M -nographic -smp 2 -bios sbi-qemu
