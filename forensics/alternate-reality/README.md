# alternate-reality

Find the flag in this forensic disk image.

## Solution

```
ewfmount NJCTF_Image2.E01 /mnt/ewf

mmls /mnt/ewf/ewf1

mount /mnt/ewf/ewf1 /mnt/forensics -t ntfs-3g -o ro,loop,show_sys_files,streams_interface=windows,offset=$((128*512))

getfattr -Rn ntfs.streams.list .

cat flag.txt:hidden
```

Flag: jctf{FL492 1N 73h S7r34M}
