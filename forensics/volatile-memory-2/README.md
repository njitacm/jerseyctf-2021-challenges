# volatile-memory-2

Using the RAM image found here `https://github.com/tess-wqing/volatile-memory/blob/main/memdump.zip`, what is the name of the executable using destination port 4444?

## Solution

Volatility 3

```
/opt/volatility3/vol.py -f memdump.mem windows.netscan.NetScan
```

Volatility 2

```
volatility -f memdump.mem imageinfo
/opt/volatility/vol.py --profile=Win2012R2x64_18340 netscan -f memdump.mem
```


--- 

## Challenge Message 
*Destination Port 4444* is the only open entrance for the remote superhero island of WeCantWaitUntilCOVIDIsOver.  

In order for the *executable* boats filled with superheros to gain access to the island,  the ship *name* must be identified.

Use the RAM image found at:
https://drive.google.com/drive/folders/1a7NZ5g3TR1Pn6hxsf68AsSwP-ItqaHl_?usp=sharing

## Challenge Hints
* Submit the flag in the following format: **jctf{flag}**.
* What is the name of the executable using destination port 4444?