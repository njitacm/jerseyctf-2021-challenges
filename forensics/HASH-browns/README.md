# HASH-browns
* Get the decimal sum of the last 4 digits of all each file from an hash. They were talking about something pertains to md as the hash.

## Solution 
```bash
openssl md5 file* | awk '{print $2}' | python3 -c 'import sys;data = sys.stdin.read(); print(sum([int(f"{line[-4:]}", 16) for line in data.split("\n") if line != ""]))'
```