# volatile-memory-2

Using the RAM image found here <https://drive.google.com/drive/folders/1a7NZ5g3TR1Pn6hxsf68AsSwP-ItqaHl_>, what is the name of the executable using destination port 4444?

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
