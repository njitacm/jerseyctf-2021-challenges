# volatile-memory-1

Using the RAM image [https://drive.google.com/drive/folders/1a7NZ5g3TR1Pn6hxsf68AsSwP-ItqaHl_](found here), what is the PID (process ID) of notepad.exe?


## Solution

Volatility 3

```
/opt/volatility3/vol.py -f memdump.mem windows.pslist.PsList
```

Volatility 2

```
volatility -f memdump.mem imageinfo

/opt/volatility/vol.py --profile=Win2012R2x64_18340 psscan -f memdump.mem
```


Flag: jctf{1808}
