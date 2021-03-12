# HASH-browns
* Get the 

## Solution 
```bash
openssl md5 file* | awk '{print $2}' | python3 -c 'import sys;data = sys.stdin.read(); [print(line[-4:]) for line in data.split("\n")]'
```
