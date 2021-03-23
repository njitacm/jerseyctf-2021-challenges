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
