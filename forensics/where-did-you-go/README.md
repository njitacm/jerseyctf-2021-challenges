# where-did-you-go

Find the flag in this forensic disk image.

## Solution

```
ewfmount NJCTF_Image1.E01 /mnt/ewf

mmls /mnt/ewf/ewf1  (use this to find the offset)

mount /mnt/ewf/ewf1 /mnt/forensics -t ntfs-3g -o ro,loop,show_sys_files,streams_interface=windows,offset=$((128*512))

cd /mnt/forensics

cd '$RECYCLE.BIN/'

cat '$RQSTOMN.txt'
```

Flag: jctf{90nE_8U7_N07_f0R9077En}


--- 

## Challenge Message 
After successfully cracking the password to the computer in the headquarters of the mysterious building, the PC suddenly shuts down. However, luckily you are able to make a copy of the disk image! It turns out that there are not one, but two disks in the PC. Find the flag in this forensic disk image. In the next challenge, you will search for the flag in the other disk image.

## Challenge Hints
Research the NTFS Recycling.
