# DeadRobin's Write-up for clientside

1. view the source coded, we can see an interesting script

```javascript
    function _9x34856(_458sd4) { return _458sd4.split("").reverse().join("")  }  
    function check(val) {
      if ( val == "clientside" ) {
        alert(atob(_9x34856("=0HO0UDOzg3XzQWMzRnblFDbj9FMu9FMu9FMutnZ0Nma")))
      } 
    }
```

2. this looks like a reverse base64 code lets decode it

```python
>>> import base64
>>> s = "=0HO0UDOzg3XzQWMzRnblFDbj9FMu9FMu9FMutnZ0Nma"[::-1] # to reverse it
>>> print(base64.b64decode(s))
b'jctf{n0_n0_n0_cl1ents1d3_x38548}'
```

