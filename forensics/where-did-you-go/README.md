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
