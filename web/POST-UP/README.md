# POST-UP
* Send POST request to URL

## Solution 
* Solutions are small so they they don't need a whole directory at this point

### Python3 
```python
import requests

r = requests.post("URL")
print(f"{r.text}")
```

## Bash
```bash
python3 -c 'import requests; r = requests.post("URL"); print(r.text)'
```

```bash
curl -X POST URL
```

---

## Challenge Message
Up and at’m! Time to tackle your first mission of the day! Send a request to HQ to receive mission details!

www.jerseyctf.info

## Challenge Hints
Send the POST
