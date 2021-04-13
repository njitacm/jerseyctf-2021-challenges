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

--- 

## Challenge Message 
# Challenged by **SpecterOps**

It turns out that there are not one, but two disks in the PC. Finding the flag in the previous disk left you confused. Seems like you will have to find the flag in this forensic disk image too!
