# investigating-windows

Find the SID of the user robbr using the Windows registry files provided.


## Solution

```
perl /usr/share/windows-resources/regripper/rip.pl -r ./software -p profilelist
```

Flag: jctf{S-1-5-21-1410353290-3892556988-1991803543-1001}


--- 

## Challenge Message 
A robber has broken through the Windows into the municipal bank! The civilians of the city have called upon you to identify and capture the villain. 

Use your heroic forensics superpowers to find the SID of the user robbr using the Windows registry files provided!

## Challenge Hints
* Try reg ripper?
* Submit the flag in the following format: **jctf{flag}**.
