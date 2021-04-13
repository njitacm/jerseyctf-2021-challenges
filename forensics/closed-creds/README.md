# closed-creds

Using the registry files provided, what is the password of the Administrator user?

## Solution

```
samdump2 system SAM > hash.txt
```

```
john --format=NT --wordlist=/usr/share/wordlists/rockyou.txt hash.txt
```


Flag: jctf{Password1}

--- 

## Challenge Message 
The clues from the camera led you to a mysterious building. Surprisingly, the front door was left unlocked. Unsurprisingly, the computer in the headquarters was not left unlocked. Using the registry files provided, will you be able to crack the password of the Administrator user?


## Challenge Hints
* Research dumping hashes from SAM.
* Submit the flag in the following format: **jctf{flag}**.
