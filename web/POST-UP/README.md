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